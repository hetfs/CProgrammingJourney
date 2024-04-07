# CHAPTER: 1

## Introduction to C language

The C programming language was developed by Dennis Ritchie in 1972 at AT&T Bell Laboratories USA, as a system implementation language. Currently, it is a general-purpose, high-level language, that remains evergreen and is widely recognized as the base language/ foundation for numerous other advanced programming languages. This is also why this robust language is often referred to as the 'mother of programming languages. One of the key features of C is its closeness to the operating system, which allows for easy access to system-level resources such as low-level memory access and also high-level memory mechanisms, making it an efficient middle-level programming language. C's closeness to the hardware also makes it ideal for low-level development, such as operating system development, kernel development, embedded systems (e.g., microcontrollers, IoT devices) etc. It proves to be an excellent choice for complex data manipulation software, such as database development or 3d animation.  While many programming languages today are better suited for specific tasks, C a structured programming language remains unparalleled when it comes to performance. It is a general-purpose and procedural-oriented programming language with countless applications in areas such as operating systems, language compilers, network drivers, language interpreters, and system utilities.

***Key Features of C Language:***

* **Portability:** C code can be easily ported to different platforms with minimal changes.
* **Efficiency:** C is a compiled language that produces fast and efficient code.
* **Low-level access:** C provides low-level access to hardware and memory, making it suitable for system programming.
* **Structured programming:** C supports structured programming constructs like loops, conditional statements, and functions.
* **Extensibility:** C allows users to create their own functions and libraries, extending its functionality.

***Applications of C Language:***

* Operating systems (e.g., Linux, Unix)
* Embedded systems (e.g., microcontrollers, IoT devices)
* Desktop applications
* Mobile applications
* Game development
* Database systems
* Compilers and interpreters

***Advantages of C Language:***

* **Speed and efficiency:** C produces fast and efficient code due to its low-level access to hardware.
* **Portability:** C code can be easily ported to different platforms with minimal changes.
* **Versatility:** C can be used for a wide range of applications, from system programming to application development.
* **Extensibility:** C allows users to create their own functions and libraries, extending its functionality.
* **Widely used:** C is a popular language with a large community and extensive documentation.

***Disadvantages of C Language:***

* **Manual memory management:** C requires manual memory management, which can lead to memory leaks and segmentation faults if not handled properly.
* **Lack of object-oriented features:** C does not natively support object-oriented programming, although extensions like C++ provide these features.
* **Pointer arithmetic:** C allows direct manipulation of pointers, which can be error-prone and lead to undefined behavior.
* **No built-in security features:** C does not have built-in security features, making it vulnerable to buffer overflows and other security issues.

***Significance of C Language*** C is a significant programming language for several reasons:

**Foundation of Modern Programming:**
C is the foundation of many modern programming languages, including C++, Java, and Python.
Understanding C provides a strong foundation for learning other languages.

**Operating Systems and Embedded Systems:**
C is widely used in the development of operating systems (e.g., Linux, Unix) and embedded systems (e.g., microcontrollers, IoT devices). Its efficiency and low-level access make it suitable for these applications.

**High-Performance Computing:**
  C is often used in high-performance computing applications where speed and efficiency are critical.
  Its ability to produce fast and optimized code makes it a preferred choice for scientific computing and simulations.

**Game Development:**
C is commonly used in game development, particularly for creating high-performance game engines and graphics libraries.
Its low-level access to hardware allows for efficient memory management and optimization.

**Educational Value:**
C is a popular language for teaching programming concepts due to its simplicity, structured nature, and wide availability.
It helps students understand the fundamentals of programming and computer architecture.

**Portability:**
C code can be easily ported to different platforms with minimal changes.
This portability makes it suitable for developing cross-platform applications and software that can run on various operating systems.

**Hardware Interaction:**
C provides low-level access to hardware, making it possible to directly interact with peripherals, memory, and other hardware components. This capability is essential for embedded systems and hardware-related applications.

**Legacy Code:**
A significant amount of legacy code, particularly in operating systems and embedded systems, is written in C. Understanding C is crucial for maintaining and updating these systems. Overall, C remains a significant programming language due to its efficiency, portability, low-level access, and widespread use in various domains.

***Programming languages have different levels of abstraction:***

* **High-level languages:** Resemble human languages, easy to read and learn (e.g., BASIC). High-level languages are easier to use but slower and larger.
* **Mid-level languages:** Combine elements of high- and low-level languages (e.g., C). `C is a mid-level` language that balances these factors.
* **Low-level languages:** Difficult to read and understand, close to the underlying hardware (e.g., machine language). Low-level languages offer speed and smaller program size, but are more difficult to develop in.

## History of C Programming Language

Here is a brief history of C language that also showcases the hierarchy of programming languages before C came into existence.
**BCPL**, or the `Basic Combined Programming Language`, is a computer programming language created by **Martin Richards** at the University of Cambridge in **1966**. It was designed as a simple systems programming language with a portable compiler that has been implemented on various machines, from large mainframes to mini computers.

BCPL has its roots in the Combined Programming Language `(CPL)`, an ambitious collaboration between Cambridge University and the University of London. While CPL development was halted, BCPL emerged, adopting much of the syntactic richness of CPL. The language evolved from the typeless language BCPL and introduced a type structure.

BCPL played a significant role in the history of programming languages and influenced the development of subsequent languages. It provided a foundation for the creation of the C programming language, which, in turn, became a cornerstone in modern software development.

In the early **1970s**, at Bell Laboratories, **Ken Thompson** and **Dennis Ritchie** played pivotal roles in the development of the C programming language, a cornerstone in the history of computing. Here's a brief overview:

**B Language and Ken Thompson:**

* **Ken Thompson** initially created the `B` language in **1969-70**, derived from **Martin Richards's BCPL**. Based on the **BCPL** language developed at Cambridge University.
* B served as a system implementation language but had limitations.

**Dennis Ritchie's Contribution:**

* **Dennis Ritchie** took the reins in **1971**, transforming `B` into the more powerful and versatile C language.
* C was designed to enhance the expressiveness and efficiency of `B`, making it a general-purpose programming language.

**C Language Development (1972):**

* In **1972**, **Dennis Ritchie**, along with colleagues at Bell Labs, finalized the C language.
* C was instrumental in the development of the `Unix operating system`, also created by Thompson and Ritchie.

**Unix Operating System:**
Ken Thompson, Dennis Ritchie, and others used C to develop the Unix operating system, providing a portable and efficient platform.

**Awards and Recognition:**
Both Ritchie and Thompson received numerous accolades, including the Turing Award (Ritchie in 1983, Thompson in 1984), recognizing their contributions.

* Developed the first chess program to beat a human player in a tournament (1967).
* Co-authored the book "Unix Programming Environment" with Dennis Ritchie (1978).

**Personal Lives:**
Ken Thompson retired from Bell Labs in 2000 and is now a professor emeritus at the University of California, Berkeley.
Dennis Ritchie passed away in 2011.

**Legacy:**
Ken Thompson's contributions to computer science have had a profound impact on the field. Unix and C have become essential tools for software development, operating systems, and embedded systems. His work has laid the foundation for modern computing and continues to inspire generations of computer scientists. Unix and C laid the groundwork for modern operating systems and software development practices.The C language became a foundational language for system programming, influencing subsequent languages like C++, Objective-C, and more.

**Conclusion**
Ken Thompson and Dennis Ritchie were two of the most influential computer scientists of the 20th century. Their work on Unix and C has had a lasting impact on the field of computing, and their legacy continues to inspire generations of computer scientists.

## ANSI C Standard

ANSI stands for the American National Standards Institute. It is a private non-profit organization that oversees the development of voluntary consensus standards for products, services, processes, systems, and personnel in the United States. ANSI works to ensure that standards are developed in a fair, open, and transparent manner, with input from all stakeholders. In the context of programming languages like C, ANSI has published standards such as ANSI C, which specify the syntax and semantics of the language to ensure consistency and interoperability across different platforms and implementations [[wiki](https://en.wikipedia.org/wiki/ANSI_C)].
The ANSI C standard, also known as C89 or C90, was the first standardized version of the C programming language. It was completed in 1989 by the American National Standards Institute (ANSI) and later adopted as an international standard by the International Organization for Standardization (ISO). ANSI C introduced several important features and conventions, providing a baseline dialect for modern C programming. While subsequent revisions such as C99 and C11 have been released, remains relevant as a foundational standard for C programming.

## Popular Frameworks and Libraries for C Language

**Frameworks** are pre-built structures or platforms that provide a foundation for developing software applications. They include reusable code libraries, APIs, and tools designed to streamline the development process by offering standardized solutions to common tasks. Frameworks often enforce certain architectural patterns and provide a set of rules and conventions to follow, promoting consistency and efficiency in development. They can range from general-purpose frameworks, like web application frameworks for building websites, to specialized frameworks tailored for specific domains such as embedded systems or game development.

**C Standard Library**, also known as `libc`, provides essential functions and macros specified by the ISO C standard.[[wiki]](https://en.wikipedia.org/wiki/C_standard_library)
**GNU C Library**, commonly known as `glibc`, is the implementation of the C standard library for the GNU operating system and GNU/Linux distributions. It serves as a crucial component for these systems, providing essential functions for programs written in the C programming language. `Glibc` abstracts many low-level functionalities of the operating system, such as memory management, system calls, and file operations, offering a standardized interface for developers. It is maintained by the GNU Project and is released under the GNU Lesser General Public License (LGPL), allowing for its free use and modification by the community [wiki](https://en.wikipedia.org/wiki/Glibc). The GNU C Library - GNU Project - Free Software Foundation [[1]](https://www.gnu.org/software/libc/) The GNU C Library (glibc) - Sourceware.org[[2]](https://sourceware.org/glibc/) GNU C Library (glibc) - Wikipedia[[3]](https://en.wikipedia.org/wiki/Glibc)
**IBM Standard C Library** Functions Table offers a comprehensive list of standard C library functions categorized by name.[[4]](https://www.ibm.com/docs/en/i/7.3?topic=extensions-standard-c-library-functions-table-by-name) C library functions cover a wide range of functionalities, including input/output operations, string manipulation, memory management, and mathematical computations.[[5]](https://www.programiz.com/c-programming/library-function)
Various open-source libraries exist to extend the functionality of C programs, such as those listed on the CPP Reference page for open-source C libraries.[[6]](https://en.cppreference.com/w/c/links/libs)

* **SymCrypt**: A cryptographic library developed by Microsoft [gihub](https://github.com/uhub/awesome-c).
* **Wax**: A tiny programming language that transpiles to C, C++, Java, TypeScript, Python, C#, Swift, and Lua [github](https://github.com/uhub/awesome-c).
* **libtirpc**: A framework for remote procedure calls (RPC) in C [sourceforge.net](https://sourceforge.net/directory/frameworks/c/).
* **libsdl-android**: Library for simple direct media access in Android apps written in C [sourceforge.net](https://sourceforge.net/directory/frameworks/c/).
* **Check**: A unit testing framework for C [sourceforge.net](https://sourceforge.net/directory/frameworks/c/).
* **Radare2**: A portable reversing framework in C [sourceforge.net](https://sourceforge.net/directory/frameworks/c/).

1. [Bell Labs - The Development of the C Language](https://www.bell-labs.com/usr/dmr/www/chist.html)
2. [Wikipedia - Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
3. [Unstop - History Of C Language: Basics, Timeline, Benefits &amp; More!](https://unstop.com/blog/history-of-c-language)
4. [Prepbytes - Who Invented C Language?](https://www.prepbytes.com/blog/c-programming/who-invented-c-language/)
5. [operating system](https://unstop.com/blog/types-of-operating-systems)
6. [C a structured programming language](https://unstop.com/blog/prepare-for-c-interview-questions) 100+ Top C Interview Questions With Answers (2024)

## Compilers and Programming Environments for C

**Compilers for C:**

* **GNU Compiler Collection (GCC):** A widely used, open-source compiler for C and other languages.
* **Clang:** A modern, open-source compiler developed by Apple.
* **Microsoft Visual C++:** A commercial compiler for C and C++ from Microsoft.
* **Intel C Compiler:** A commercial compiler for C and C++ from Intel.
* **Embarcadero C++Builder:** A commercial compiler and integrated development environment (IDE) for C and C++ from Embarcadero Technologies.

**Programming Environments for C:**

* **Visual Studio:** A popular IDE from Microsoft that supports C and other languages.
* **Eclipse CDT:** An open-source IDE for C and C++ development.
* **Code::Blocks:** A free and open-source IDE for C and C++.
* **Dev-C++:** A free and open-source IDE specifically designed for C and C++ development.
* **Sublime Text:** A popular text editor with support for C and other languages.

## Choosing a Compiler and Programming Environment

The choice of compiler and programming environment depends on factors such as:

* **Platform:** The operating system and hardware architecture you are targeting.
* **Features:** The specific features and optimizations you require.
* **Cost:** Whether you need a free or commercial solution.
* **Personal preference:** The user interface and workflow that you find most comfortable.

For general-purpose C development, GCC or Clang are widely used and reliable options. Visual Studio is a popular choice for Windows development, while Eclipse CDT is a good option for cross-platform development.
It is recommended to use an IDE for C development, as it provides features such as code completion, debugging, and project management, which can significantly improve productivity.

**Visual Studio Code (VS Code)** is a free and open-source code editor developed by Microsoft. It is a popular choice for C development due to its features and extensibility.

* **Syntax highlighting and IntelliSense:** VS Code provides syntax highlighting and IntelliSense for C, making it easier to write and debug code.
* **Debugging:** VS Code has a built-in debugger that allows you to step through your code, set breakpoints, and inspect variables.
* **Integrated terminal:** VS Code has an integrated terminal that allows you to run commands and interact with the command line without leaving the editor.
* **Cross-platform:** VS Code is available for Windows, macOS, and Linux, making it a convenient choice for developers working on different platforms.
* **Extensions:** VS Code has a large ecosystem of extensions that can enhance its functionality, including extensions for C development, such as:
  * C/C++ Intellisense: Provides advanced code completion and IntelliSense features.
  * C/C++ Extension Pack: A collection of extensions for C and C++ development, including code navigation, refactoring, and debugging tools.
  * CMake Tools: Support for CMake, a popular build system genarator for C and C++ projects.

1. Install VS Code from the [official website:](https://code.visualstudio.com/)
2. Install the [C/C++ extension pack:](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
3. Create a new C project or open an existing one in VS Code.
4. Start coding VS Code will provide syntax highlighting, IntelliSense, and other features to assist you.

**Tips for Using VS Code for C Development:**

> Use the integrated terminal to compile and run your C programs.
> Set up a debug configuration to step through your code and debug errors.
> Install additional extensions to enhance your C development experience, such as the CMake Tools extension for CMake support.
> Take advantage of VS Code's keyboard shortcuts and customizable settings to optimize your workflow.
> VS Code is a powerful and extensible code editor that can significantly improve your development experience.

## The C Development Cycle

**Step 1 Idea:** Come up with an idea for a program.

**Step 2 Source Code:** Use an editor to write the source code (text file containing instructions in C language).

**Step 3 Compile and Link:** Compile the source code to translate it into machine code. Link the compiled code with necessary libraries to create an executable program.

**Step 4 Error Handling (Optional):** Weep bitterly over errors (if any).

**Step 5 Testing:** Run the program and test its functionality.

**Step 6 Bug Fixing (Optional):** Pull out hair over bugs (if any).

**Step 7 Iteration:** Start over (required) to refine the program or add new features.

***From Text File to Program:***

* **Source Code File:** A text file containing the instructions for the computer in C language.
* **Text Editor:** A program used to create and edit source code files.
* **Compilation:** The process of translating source code into machine code.
* **Linking:** The process of combining compiled code with necessary libraries to create an executable program.

***Creating the Source Code File:***

* Use a text editor to create a source code file with the extension `".C"`.
* Write the instructions for the computer in C language.
* Type the instructions carefully, paying attention to capitalization and punctuation.
* Save the file with the appropriate name.

**Example Source Code File `(main.C)`:**

```c
#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    return(0);
}
```

**Four Steps to Build a C Program:**

1. **Save:** Save the source code in a text file with a `".C"` extension.
2. **Compile:** Translate the source code into machine code using a compiler.
3. **Link:** Combine the compiled code with necessary libraries to create an executable program. (This step may be done automatically by the compiler.)
4. **Run:** Execute the program to perform the desired task.

**Example Using the GCC Compiler:**

```bash
gcc -o helloApp main.C
./helloApp

# Output
Hello world!
```

**Explanation:**

* `gcc` is the GCC compiler.
* `-o helloApp` specifies the output file name as "helloApp".
* `main.C` is the source code file.
* `./helloApp` runs the executable program.

**Note:**

> The linking step is typically done automatically by the compiler, but it can be done manually using a linker tool.
> The hardest part of programming is not the mechanical steps of saving, compiling, and running, but understanding the logic and syntax of the programming language.
> C is a programming language that uses a compiler to translate high-level programs into machine code.
> Permits close interaction with the inner workings of the computer.

## Assembler vs. Compiler

**What is an Assembler?**

* Translates assembly language to machine code.
* Provides a one-to-one mapping with machine code.
* May offer additional features like macro facilities.

**What is Complier?**

* Translates a high-level language to a low-level language (usually assembly language).
* Reads a program in one language (source language) and translates it to another language (target language).
* Performs optimizations to the code.
* Consists of components such as scanner, parser, semantic routines, and code generators.

***Difference between Assembler and Compiler***

| Feature         | Assembler          | Compiler               |
| --------------- | ------------------ | ---------------------- |
| Source Language | Assembly Language  | High-Level Language    |
| Translation     | One-to-One Mapping | Not One-to-One Mapping |
| Efficiency      | Faster Execution   | Slower Execution       |

***Difference between Compiler and Interpreter***

| Feature            | Compiler                 | Interpreter        |
| ------------------ | ------------------------ | ------------------ |
| Translation        | Entire Program at Once   | Line-by-Line       |
| Speed              | Faster                   | Slower             |
| Memory Requirement | More                     | Less               |
| Error Detection    | After Entire Translation | During Translation |

***Merits of C Programming***

* General purpose programming language.
* Structured programming language.
* System independence.
* High efficiency.
* Suitable for system programming.

***Difference between Syntax and Semantics***

| Feature    | Syntax                                | Semantics                   |
| ---------- | ------------------------------------- | --------------------------- |
| Definition | Rules for constructing valid programs | Meaning of programs         |
| Focus      | Form and structure                    | Behavior and functionality  |
| Example    | "int main()" is syntactically correct | "main()" returns an integer |

***Flowchart***

* A symbolic representation of program logic using predefined symbols.
* Shows the flow of logic, operations, decisions, and other information.
* Provides a guide for writing the program.

***Algorithms***

* A detailed, step-by-step procedure for solving a problem.
* Can be written in ordinary language or formal procedures.
* Example:

1. Read A,B.
2. Set SUM := A+B.
3. Write SUM.
4. Exit.

***Pseudocode***

* An intermediate form between flowchart and source code.
* English approximation of source code that follows language rules and style.
* Example:
  main()
  {
  integer a,b,sum;
  read in a and b;
  add a & b and set it to sum;
  write sum;
  }

***Structure of C Program (Source Code)***
Let us discuss the structure of a simlpe C program using an example:

```c
 /*sum of two numbers*/

#include<stdio.h>  
#include<conio.h>

int main(){

    int a, b, sum; //Variable Declarations

    printf("enter two numbers");   /* Request for Input */
    scanf("%d %d",&a,&b);          /* Input from user */


    sum=a+b;                      /* Adding two numbers */
    printf("sum=%d\n",sum);      /* Output Sum */
    getch();                    /* To hold output screen */


    return 0;
}         /* End of main */
   
```

When you run this program, it will:

* Prompt you to enter two numbers.
* Read the two numbers from the keyboard.
* Calculate the sum of the two numbers.
* Print the sum on the console.
* Wait for you to press any key before exiting.

**Comments:**

* `//sum of two numbers`: This is a single line comment.
* `/*sum of two numbers*/`: This is a multi-line comment.
* Enclosed in `/*` and `*/` and used for documentation.

**Header Files:**

* `#include<stdio.h>`: This header file is included for `input` and `output` operations.
* `#include<conio.h>`: This header file is included for `getch` functions.

**Main Function:**

* `int main()`: This is the entry point of the program. It returns an integer (0 in this case).

**Variable Declarations:**

* `int a, b, sum;`: Declares three integer variables: `a` and `b` to store the input numbers, and `sum` to store the result.

**Input:**

* `printf("enter two numbers");`: Prompts the user to enter two numbers.
* `scanf("%d %d", &a, &b);`: Reads two integers from the user and stores them in `a` and `b`.
* `&:` Used with `scanf()` to allow it to change variables. this `&`is also known as Ampersand

**Calculation:**

* `sum = a + b;`: Calculates the sum of `a` and `b` and stores it in `sum`.

**Output:**

* `printf("sum=%d\n", sum);`: Prints the sum of the two numbers.
  *`\n:`Newline character.

**Hold Output:**

* `getch();`: Pauses the program and waits for the user to press any key before continuing.

**The `return` Statement**

* `return 0;`: Indicates successful execution of the program and returns 0 to the operating system.

**The `return` statement in C is used to:**

* Exit a function and return a value to the caller.
* Exit the `main` function and terminate the program.

**Syntax:**

```c
return expression;
```

* `expression`: An optional expression that evaluates to the value to be returned.

**Function Return:**

When a function encounters a `return` statement, it:

* Evaluates the expression (if present).
* Returns the result of the expression to the caller.
* Exits the function and resumes execution in the caller.

**Program Termination:**

When the `main` function encounters a `return` statement, it:

* Evaluates the expression (if present).
* Returns the result of the expression to the operating system.
* Terminates the program.

**Return Value:**
The value returned by the `main` function is typically used by the operating system to indicate the status of the program.

* **0**: Success
* **Non-zero**: Failure

**Example:**

```c
int main() {
  // Do something...

  return 0; // Indicates successful execution
}
```

**Operating System Handling:**
Different operating systems handle the return value of the `main` function differently.

* **MS-DOS**: Stores the return value in the `ERRORLEVEL` environment variable.
* **UNIX Bourne and Korn shells**: Stores the return value in the `$?` temporary variable.

**Return Value Range:** The range of valid return values depends on the operating system.

* Most operating systems support return values from 0 to 255.
* Some operating systems support return values up to 65535.

For portability, it is recommended to use return values between 0 and 255.
**The Format of C**

***Statements***

* Statements are terminated with semicolons.
* Indentation is ignored by the compiler.
* C is case sensitive - all keywords and Standard Library functions are lowercase.
* Strings are placed in double quotes.
* Newlines are handled via `\n`.

***Programs***

* Programs are capable of flagging success or error; those forgetting to do so have one or other chosen randomly!

***Semicolons***

* Semicolons are very important in C. They form a statement terminator; they tell the compiler where one statement ends and the next one begins.
* If you fail to place one after each statement, you will get compilation errors.

***Free Format***

* C is a free format language. This is the up-side of having to use semicolons everywhere. There is no problem breaking a statement over two lines - all you need do is not place a semicolon in the middle of it (where you wouldn't have anyway).
* The spaces and tabs that were so carefully placed in the example program are ignored by the compiler. Indentation is entirely optional, but should be used to make the program more readable.

***Case Sensitivity***

* C is a case sensitive language. Although `int` compiles, "Int", "INT" or any other variation will not. All C keywords are lowercase. All of the several hundred functions in the Standard Library are lowercase.

***Random Behavior***

* Having stated that `main` is to return an integer to the operating system, forgetting to do so (either by saying `return` only or by omitting the `return` entirely) would cause a random integer to be returned to the operating system.
* This random value could be zero (success) in which case your program may randomly succeed. More likely is a non-zero value which would randomly indicate failure.

### Important features of the above C program

1. The instructions of a C program are typed in lowercase but the variables and user defined things can be written in uppercase.
2. The first line of this program is the comment. Comment starts with double slash `//` or with slash and asterisk `/*` and ends with asterisk and slash `*/`. A comment helps the programmer in explaining the logic of the program. It improves the readability of the program.
   Comments are not necessary; it is a good practice to begin a program with a comment indicating the purpose of the program, its author and the date on which the program was written.
3. The second and third lines of the program are called as header files (`stdio.h` and `conio.h`) which contains information that must be included in the program before compiling. `#` is a pre-processor directive or compiler directive. This statement directs the compiler to include header files in the program before compiling the program.
4. Every C program consists of one or more modules called functions. One of this functions is called `main()`. The execution of every program begins with `main` function, which may call other functions. Whole program is written in this `main` function enclosed in curly brackets `{}`. Use of more than one `main()` is illegal.
5. Declaration of the variables is done immediately after the opening braces of the program. We cannot declare variables in the middle of a program.
6. Note that every statement in the `main` function ends with a semicolon `;`.
7. Next is the `printf()` statement: `printf("Enter two numbers");` `printf` is an output command which requests the user to enter a number. This message is known as "prompt message" and is printed on the output screen as `Enter two numbers`.
8. The values entered in the computer via the next statement `scanf()`. `scanf("%d %d", &a, &b);` `scanf` is an input command which takes some value from the user according to the given format specifier and stores it at the desired variable. The `&` is called as address of operator.
9. The next is the assignment statement: `sum = a + b;` which adds the values in variable `a` and `b` and the assign it to variable `sum`.
10. The last `printf()` is used to show the calculated value for `sum` on the screen.
11. Finally the `getch()` function is used to show the output screen.
12. All the statements inside the `main()` are slightly ahead than `main()`. This is called as indentation. This shows that all the statements are inside the `main()` function.

## A C program typically consists of the following sections

**1. Header Files:**

**The `#include` directive:** is a preprocessor directive in C that instructs the preprocessor to include the contents of another file into the current source file. Header files contain declarations for functions and variables defined in standard libraries or custom modules.

**Syntax:**

```c
#include <header_file>  //or
#include "header_file"
```

* `<header_file>`: System header file located in the compiler's include directory.
* `"header_file"`: Custom header file located in the current directory or a specified path.

**How it Works:**

* The preprocessor reads the source file and encounters the `#include` directive.
* It replaces the directive with the contents of the specified header file.
* The preprocessor then continues processing the source file as if the header file's contents were written directly in the source file.

**Purpose:**

* To include standard library functions and declarations.
* To include custom functions and declarations from other source files.
* To modularize code and improve readability.

**Example:**

```c
#include <stdio.h>

int main() {
  printf("Hello, world!\n");
  return 0;
}
```

In this example, the `#include <stdio.h>` directive includes the standard input/output header file, which contains declarations for functions like `printf`.

**stdio.h Header File:**

The `stdio.h` header file is a standard header file that defines functions and macros for input and output operations. It includes declarations for:

* Input functions: `scanf`, `getchar`, etc.
* Output functions: `printf`, `putchar`, etc.
* File handling functions: `fopen`, `fclose`, etc.
* Error handling macros: `EOF`, `NULL`, etc.

By including `stdio.h`, you can use these functions and macros in your C program to perform input and output operations.

**2. Function Declarations:**

* Declare functions that will be used in the program.
* Function declarations specify the function's name, return type, and parameter list.

**3. Global Variables:**

* Declare global variables that are accessible throughout the program.
* Global variables are typically placed at the beginning of the program.

**4. `main` Function:**

* The `main` function is the entry point of the program.
* It is where program execution begins.

**5. Function Definitions:**

* Define the functions declared earlier.
* Function definitions provide the implementation of the functions.

**6. Local Variables:**

* Declare local variables within the scope of functions.
* Local variables are only accessible within the function in which they are declared.

**7. Statements:**

* Statements are executable lines of code that perform specific tasks.
* Statements are typically grouped into blocks using curly braces `{}`.

**8. Comments:**

* Comments are used to provide explanatory notes or documentation within the code.
* Comments are ignored by the compiler.

**Example:**

```c
#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int x = 10;
  int y = 20;
  int result = sum(x, y);
  printf("The sum of %d and %d is %d\n", x, y, result);
  return 0;
}
```

**Explanation:**

* The `stdio.h` header file is included for input and output operations.
* The `sum` function is declared and defined to calculate the sum of two integers.
* The `main` function is the entry point of the program.
* Local variables `x` and `y` are declared and initialized.
* The `sum` function is called to calculate the sum of `x` and `y`.
* The `result` is printed using `printf`.
