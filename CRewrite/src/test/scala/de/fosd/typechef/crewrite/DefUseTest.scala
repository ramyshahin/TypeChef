package de.fosd.typechef.crewrite

import org.junit.Test
import de.fosd.typechef.parser.c._
import de.fosd.typechef.crewrite.CASTEnv._
import de.fosd.typechef.typesystem._

class DefUseTest extends ConditionalNavigation with ASTNavigation with CDefUse with CTypeSystem with TestHelper {


  @Test def test_int_def_use {
    val source_ast = getAST( """
      int foo(int *x, int z) {
        int i2 = x + 5;
        i2 = 5;
        int y;
        y = 5;
        return x + i2 + z;
      }
      int main(void) {
        int i = 0;
        i = i + 1;
        foo(i);
        int b = 666;
        foo(b);

        int if3 = 5;
        if (if3 == 5) {
          if3 = 10;
        } else {
          if3 = 30;
        }
        int for4;
        for (for4 = 0; for4 < 10; for4++) {
          println(for4);
        }
        int j;
        j = 10;
        i = (j * (j*(j-(j+j)))) - (j*j) + j;
        return (i > j) ? i : j;
      }
                             """);
    val env = createASTEnv(source_ast)

    typecheckTranslationUnit(source_ast)
    val defUseMap = getDefUseMap

    println("+++PrettyPrinted+++\n" + PrettyPrinter.print(source_ast))
    println("Source:\n" + source_ast)
    println("\nDef Use Map:\n" + defUseMap)
  }

  @Test def test_array_def_use {
    val source_ast = getAST( """
      #ifdef awesome
        #define quadrat(q) ((q)*(q))
      #endif
      const int konst = 55;
      int foo(int arr[5], int z) {
        arr[0] = 10;
        arr[1] = 5;
        arr[2] = (arr[0] + arr[1]) * arr[0];
        int x = 5;
        int i2 = x + 5;
        i2 = z;
        int y;
        y = konst;
        konst = 5;
        int missing = 3;
        y = missing;
        int variable;
        #ifdef awesome
          variable = 4;
          int noType = 3;
          int onlyHere = 3;
          z = onlyHere;
          y = quadrat(z);
        #else
          variable = 7;
          float noType = 7;
        #endif
        noType += noType;
        return variable;
      }
      int main(void) {
        int a[5];
        char c;
        c = 'a';



        a[konst] = 0;
        int plusgleich = 10;
        plusgleich += 5;
        int funktion;
        foo(a[5], funktion);
        int plusplus = 1;
        plusplus++;
        return plusgleich;
      }
                             """);
    val env = createASTEnv(source_ast)

    typecheckTranslationUnit(source_ast)
    val defUseMap = getDefUseMap

    println("+++PrettyPrinted+++\n" + PrettyPrinter.print(source_ast))
    println("Source:\n" + source_ast)
    println("\nDef Use Map:\n" + defUseMap)
  }

  @Test def test_struct_def_use {
    // TODO Verwendung struct variablen.
    val source_ast = getAST( """
      struct leer;

      struct student {
        int id;
        char *name;
        float percentage;
      } student1, student2, student3;

      struct withInnerStruct {
      struct innerStruct{
      int inner;
      };
      int outer;
      };

      int main(void) {
        struct student st;
        struct student st2 = {10, "Joerg Liebig", 0.99};

        st.id = 5;
        student3.id = 10;
        int i = student1.id;

        student2.name = "Joerg";
        student3.name = "Andi";

        student3.percentage = 90.0;


        return 0;
      }
                             """);
    val env = createASTEnv(source_ast)
    println("Source:\n" + source_ast + "\n")

    typecheckTranslationUnit(source_ast)
    val defUseMap = getDefUseMap

    println("+++PrettyPrinted+++\n" + PrettyPrinter.print(source_ast))
    println("Source:\n" + source_ast)
    println("\nDef Use Map:\n" + defUseMap)
  }

  @Test def test_opt_def_use {
    val source_ast = getAST( """
      int o = 32;
      int fooZ() {
        #if definedEx(A)
        const int konst = 55;
        int c = 32;
        #else
        int c = 64;
        const int konst = 100;
        #endif
        o = c+o;
        return c;
      }
      int foo(int z) {
        return z;
      }
      int fooVariableArgument(
      #if definedEx(A)
      int
      #else
      float
      #endif
      a) {
        return 0;
      }
      #if definedEx(A)
      int fooA(int a) {
        return a;
      }
      #else
      void fooA(int a) {

      }
      #endif
      int main(void) {
        #if definedEx(A)
        int b = fooA(0);
        int argInt = 2;
        fooVariableArgument(argInt);
        #else
        float argFloat = 2.0;
        fooVariableArgument(argFloat);
        fooA(0);
        #endif

        return 0;
      }
                             """);
    val env = createASTEnv(source_ast)
    println("TypeChef Code:\n" + PrettyPrinter.print(source_ast))

    typecheckTranslationUnit(source_ast)
    val defUseMap = getDefUseMap

    println("+++PrettyPrinted+++\n" + PrettyPrinter.print(source_ast))
    println("Source:\n" + source_ast)
    println("\nDef Use Map:\n" + defUseMap)
  }

}