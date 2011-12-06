/*
 * temporarily copied from PreprocessorFrontend due to technical problems
 */
package de.fosd.typechef.linux

import java.io._
import de.fosd.typechef.featureexpr.{FeatureExprParser, FeatureExpr}
import de.fosd.typechef.featureexpr.FeatureModel
import java.util.Properties
import java.io.File
import java.io.FileInputStream

import gnu.getopt.Getopt
import gnu.getopt.LongOpt

import de.fosd.typechef.parser.c._
import de.fosd.typechef.typesystem._
import de.fosd.typechef.lexer._

object LinuxPreprocessorFrontend {

    //can be overriden with command line parameters p and t
    def PARSEAFTERPREPROCESSING = true
    def TYPECHECKAFTERPARSING = false
    def CREATEINTERFACEAFTERPARSING = true

    ////////////////////////////////////////
    // General setup of built-in headers, should become more general and move
    // elsewhere.
    ////////////////////////////////////////
    val predefSettings = new Properties()
    val settings = new Properties(predefSettings)

    def systemRoot = settings.getProperty("systemRoot")
    def systemIncludes = settings.getProperty("systemIncludes")
    def predefMacroDef = settings.getProperty("predefMacros")

    def setSystemRoot(value: String) = settings.setProperty("systemRoot", value)

    var preIncludeDirs: Seq[String] = Nil
    var postIncludeDirs: Seq[String] = Nil
    var cmdLinePostIncludes: Seq[String] = Nil

    def initSettings {
        predefSettings.setProperty("systemRoot", File.separator)
        predefSettings.setProperty("systemIncludes", "usr" + File.separator + "include")
        predefSettings.setProperty("predefMacros", "host" + File.separator + "platform.h") //XXX not so nice a default
        //XXX no default for GCC includes - hard to guess (one could invoke GCC with special options to get it, though, but it's better to do that to generate the settings file).
    }

    def loadPropList(key: String) = for (x <- settings.getProperty(key, "").split(",")) yield x.trim

    def loadSettings(configPath: String) = {
        settings.load(new FileInputStream(configPath))
        preIncludeDirs = loadPropList("preIncludes") ++ preIncludeDirs
        println("preIncludes: " + preIncludeDirs)
        println("systemIncludes: " + systemIncludes)
        postIncludeDirs = postIncludeDirs ++ loadPropList("postIncludes")
        println("postIncludes: " + postIncludeDirs)
    }

    def includeFlags =
        (cmdLinePostIncludes ++ (preIncludeDirs ++ List(systemIncludes) ++ postIncludeDirs).flatMap(
            (path: String) =>
                if (path != null && !("" equals path))
                    List(systemRoot + File.separator + path)
                else
                    List()
        )).flatMap((path: String) => List("-I", path))


    ////////////////////////////////////////
    // Preprocessor/parser invocation
    ////////////////////////////////////////
    def preprocessFile(inFileName: String, outFileName: String, extraOpt: Seq[String], getTokenstream: Boolean,
                       featureModel: FeatureModel): java.util.List[Token] =
        new Main().run(Array(
            inFileName,
            "-o",
            outFileName,
            "--include",
            predefMacroDef
        ) ++
                extraOpt ++
                includeFlags, getTokenstream, !getTokenstream, featureModel)


    def main(args: Array[String]): Unit = {
        initSettings
        var extraOpt = List("-p", "_")
        val optionsToForward = "pPUDx"
        val INCLUDE_OPT = 0
        val OPEN_FEAT_OPT = 1
        val longOpts = Array(new LongOpt("include", LongOpt.REQUIRED_ARGUMENT, null, INCLUDE_OPT),
            new LongOpt("openFeat", LongOpt.REQUIRED_ARGUMENT, null, OPEN_FEAT_OPT))
        val g = new Getopt("PreprocessorFrontend", args, ":r:I:c:o:t:i" + optionsToForward.flatMap(x => Seq(x, ':')), longOpts)
        var loopFlag = true
        var preprocOutputPathOpt: Option[String] = None
        var parse = PARSEAFTERPREPROCESSING
        var typecheck = TYPECHECKAFTERPARSING
        var createInterface = CREATEINTERFACEAFTERPARSING
        do {
            val c = g.getopt()
            if (c != -1) {
                val arg = g.getOptarg()
                c match {
                    case 'r' => setSystemRoot(arg)
                    case 'I' => cmdLinePostIncludes :+= arg
                    case 'c' => loadSettings(arg)
                    case 'o' => preprocOutputPathOpt = Some(arg)
                    case 'p' => parse = true
                    case 't' => typecheck = true
                    case 'i' => createInterface = true

                    case ':' => println("Missing required argument!"); sys.exit(1)
                    case '?' => println("Unexpected option!");
                    sys.exit(1)

                    //Pass-through --include and --openFeat.
                    case INCLUDE_OPT => extraOpt ++= List("--include", arg)
                    case OPEN_FEAT_OPT => extraOpt ++= List("--openFeat", arg)

                    //Pass-through some other options
                    case _ => if (optionsToForward contains c) {
                        extraOpt ++= List("-" + c.asInstanceOf[Char], arg)
                    }
                }
            } else {
                loopFlag = false
            }
        } while (loopFlag)
        println(includeFlags)
        val remArgs = args.slice(g.getOptind(), args.size)

        for (filename <- remArgs) {
            preprocOutputPathOpt match {
                case None => preprocOutputPathOpt = Some(filename.replace(".c", ".pi"))
                case Some(_) => None
            }
            val preprocOutputPath = preprocOutputPathOpt.get
            val parserInput = preprocOutputPath
            val folderPath = new File(preprocOutputPath).getParent

            val filePresenceCondition = getFilePresenceCondition(preprocOutputPath)
            val fm = getFeatureModel(preprocOutputPath).and(filePresenceCondition)

            val t1 = System.currentTimeMillis()
            val tokens = preprocessFile(filename, preprocOutputPath, extraOpt, parse, fm)
            val t2 = System.currentTimeMillis()
            var t3 = t2; var t4 = t2; var t5 = t2;
            if (parse) {
                val in = CLexer.prepareTokens(tokens)
                val parserMain = new ParserMain(new CParser(fm))
                val ast = parserMain.parserMain(in)
                t3 = System.currentTimeMillis();
                t5 = t3;
                t4 = t3
                val ts = new CTypeSystemFrontend(ast.asInstanceOf[TranslationUnit], fm)
                if (typecheck || createInterface) {
                    ts.checkAST
                    t4 = System.currentTimeMillis();
                    t5 = t4
                }
                if (createInterface) {
                    println("inferring interfaces.")
                    val interface = ts.getInferredInterface().and(filePresenceCondition)
                    t5 = System.currentTimeMillis()
                    ts.writeInterface(interface, new File(filename + ".interface"))
                    ts.debugInterface(interface, new File(filename + ".dbginterface"))
                }

            }
            println("timing (lexer, parser, type system, interface inference)\n" + (t2 - t1) + ";" + (t3 - t2) + ";" + (t4 - t3) + ";" + (t5 - t4))
        }
    }
    def getFilePresenceCondition(cfilename: String): FeatureExpr =
        new FeatureExprParser().parseFile(cfilename + ".pc")


    def getFeatureModel(cfilename: String): FeatureModel = {
        val featureExpr = new FeatureExprParser().parseFile(cfilename + ".fm")
        println(cfilename + " FM " + featureExpr)
        LinuxFeatureModel.featureModelApprox.and(featureExpr)
    }

}
