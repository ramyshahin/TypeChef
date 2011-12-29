package de.fosd.typechef

/*
* temporarily copied from PreprocessorFrontend due to technical problems
*/

import java.io.File


import de.fosd.typechef.parser.c._
import de.fosd.typechef.typesystem._
import lexer.options.OptionException

object Frontend {


    def main(args: Array[String]): Unit = {
        // load options
        val opt = new FrontendOptionsWithConfigFiles()
        try {
            opt.parseOptions(args)

            if (opt.isPrintVersion) {
                println("TypeChef 0.3")
                return;
            }
        } catch {
            case o: OptionException =>
                println("Invocation error: " + o.getMessage);
                println("use parameter --help for more information.")
                return;
        }

        processFile(opt)
    }


    def processFile(opt: FrontendOptions) {
        val t1 = System.currentTimeMillis()

        val fm = opt.getFeatureModel().and(opt.getLocalFeatureModel).and(opt.getFilePresenceCondition)

        val tokens = new lexer.Main().run(opt, opt.parse)

        //        val tokens = preprocessFile(filename, preprocOutputPath, extraOpt, opt.parse, fm)
        val t2 = System.currentTimeMillis()
        var t3 = t2;
        var t4 = t2;
        var t5 = t2;
        if (opt.parse) {
            println("parsing.")
            val in = CLexer.prepareTokens(tokens)
            val parserMain = new ParserMain(new CParser(fm))
            val ast = parserMain.parserMain(in)
            t3 = System.currentTimeMillis();
            t5 = t3;
            t4 = t3
            val ts = new CTypeSystemFrontend(ast.asInstanceOf[TranslationUnit], fm)
            if (opt.typecheck || opt.writeInterface) {
                println("type checking.")
                ts.checkAST
                t4 = System.currentTimeMillis();
                t5 = t4
            }
            if (opt.writeInterface) {
                println("inferring interfaces.")
                val interface = ts.getInferredInterface().and(opt.getFilePresenceCondition)
                t5 = System.currentTimeMillis()
                ts.writeInterface(interface, new File(opt.getInterfaceFilename))
                if (opt.writeDebugInterface)
                    ts.debugInterface(interface, new File(opt.getDebugInterfaceFilename))
            }

        }
        if (opt.recordTiming)
            println("timing (lexer, parser, type system, interface inference)\n" + (t2 - t1) + ";" + (t3 - t2) + ";" + (t4 - t3) + ";" + (t5 - t4))

    }


}
