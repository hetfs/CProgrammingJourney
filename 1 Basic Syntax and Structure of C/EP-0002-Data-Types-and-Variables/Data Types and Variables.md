# Learning Data Types and Variables

Discover the concept of Data Structures in C and their practical applications.
Data structures are specific types of containers used in the programming world to store and organize data.
Each container has its own unique properties that are utilized to manage and manipulate the stored data.

In C programming, data types define the type of data that a variable can hold, such as integers, characters, floating-point numbers, etc.
Each data type has a specific set of values and operations that can be performed on it.
Variables, on the other hand, are containers used to store data values in memory.
They are declared with a specific data type and can hold values of that type during program execution.

**Integer Types**: These data types are used to store whole numbers without any fractional part.

Examples include:

- `int`: Represents integer values.
- `char`: Stores single characters as integer values according to ASCII or Unicode.
- `short`: Typically smaller than int, used for smaller integer values.
- `long`: Larger than int, used for larger integer values.

**Floating-Point Types**: Used to store real numbers with fractional parts.

Examples include:

- `float`: Single-precision floating-point numbers.
- `double`: Double-precision floating-point numbers with higher precision.

**Void Type**: Denotes an empty set of values. Typically used with functions that return no value or have no parameters.

**Derived Types**: These are user-defined data types created using fundamental data types.

Examples include:

- `Array`: Stores a fixed-size sequential collection of elements of the same type.
- `Structure`: Allows storing different data types under one name.
- `Pointer`: Stores the memory address of another variable.

**Enumerated Types**: Defines a set of symbolic names bound to unique integers. Used for defining constants.

## Variables in C

A variable in C is a named memory location that holds a specific type of data.
It serves as a container for storing information temporarily during program execution.
By assigning a name to a memory location, variables make it easier to manage and manipulate data within a program.
They allow us to store various types of data, such as integers, floating-point numbers, characters, and more.
Moreover, variables can be reused multiple times within a program, enabling flexibility and efficiency in coding.
This ability to store and retrieve different types of data using named memory locations enhances the readability, maintainability, and versatility of C programs.

> *Variables in C serve as human-friendly labels for memory locations, eliminating the need to remember memory addresses.
> The size of a variable is determined by the type of data it holds*.

**There are 3 aspects of defining a variable**:

1. **Variable Declaration**:
Variable declaration in C tells the compiler about the existence of the variable with the given name and data type.
When the variable is declared compiler automatically allocates the memory for it.

2. **Variable Definition**:
In the definition of a C variable, the compiler allocates some memory and some value to it.
A defined variable will contain some random garbage value till it is not initialized.

3. **Variable Initialization**:
Initialization of a variable is the process where the user assigns some meaningful value to the variable.

**C Variable Declaration Syntax**:

In C, declaring a variable involves specifying its name and type.

```c
data_type variable_name = value;          // defining a single variable

data_type variable_name1, variable_name2; // defining multiple variables
```

Here's what each component represents:

- **data_type**: Represents the type of data the variable can hold.
- **variable_name**: Refers to the user-assigned name for the variable.
- **value**: Denotes the initial value assigned to the variable.

Example:

```c
int var;    // declares an integer variable
char a;     // declares a character variable
float grade;  // declares float variables
```

Note:
> C is a strongly typed language, necessitating the specification of variable types before usage.

**Rules for Naming Variables in C**:

When naming variables in C, adherence to certain rules ensures clarity and consistency. Consider the following guidelines:

1. **Avoid Starting with Digits**: Variable names should not commence with a digit, ensuring they are distinguishable from numerical values.
2. **Character Composition**: Variable names can include alphabets, digits, and underscores. Special characters, however, are discouraged.
3. **Avoid Reserved Keywords**: Steer clear of using keywords like "float" or "int" as variable names to prevent confusion and maintain code readability.
4. **Eliminate Spaces**: Variables should not contain spaces or blanks within their names, enhancing code legibility and compiler interpretation.
5. **Case Sensitivity**: Recognize that C distinguishes between uppercase and lowercase letters. Typically, variable names are written in lowercase to avoid ambiguity.

*Consider the examples below to better understand these rules*:

```c
int var1;     // Correct
int 1var;     // Incorrect - Cannot begin with a digit
int my_var1;  // Correct
int my$var;   // Incorrect - Avoid special characters
char else;    // Incorrect - Avoid using keywords
int my var;   // Incorrect - Spaces are not permitted
int COUNT;    // Correct - Uppercase variable name
int Count;    // Correct - Mixed-case variable name
int count;    // Correct - Lowercase variable name
```

By adhering to these guidelines, programmers ensure code clarity, maintainability, and adherence to C language standards.

**Types of Variables in C**:
In C programming, various types of variables serve different purposes and have distinct scopes.

1. Local Variables
2. Global Variables
3. Static Variables
4. Automatic Variables
5. Extern Variables
6. Register Variables

*Here's an overview of the main types*:

**Local Variables**:
These are accessible only within the scope of their declaration, typically within a function or block.
They store data temporarily during specific instructions without affecting other parts of the program.

```c

#include <stdio.h>

void myFunction() {
    // Declaration and initialization of local variables
    int x = 10;
    float y = 3.14;
    
    // Using local variables
    printf("The value of x is: %d\n", x);
    printf("The value of y is: %f\n", y);
}

int main() {
    // Call the function
    myFunction();
    
    // Attempting to access local variables outside their scope will result in an error
    // Uncommenting the following line will generate an error
    // printf("Trying to access x outside its scope: %d\n", x);
    
    return 0;
}
```

In this example, x and y are local variables declared inside the function myFunction().
They are accessible only within the scope of this function.
Attempting to access them outside their scope, as shown in the commented-out line in main(), will result in a compilation error.

**Global Variables**:
Declared outside any function, global variables can be accessed by all functions within the same scope.
They hold information throughout the program's lifetime and aid in debugging.

```c
#include <stdio.h>

// Global variable declaration
int globalVar = 10;

void display() {
    printf("Global variable: %d\n", globalVar);
}

int main() {
    // Accessing global variable within the main function
    printf("Global variable within main function: %d\n", globalVar);
    
    // Calling the display function
    display();
    
    return 0;
}
```

In this example, `globalVar` is declared outside of any function, making it a global variable.
It can be accessed and modified by any function within the same program. The `display` function demonstrates accessing the global variable from within another function.
When executed, both `printf` statements will output the value of `globalVar`, demonstrating its global scope.

**Automatic Variables**:
Created when a function or block of code is executed, these variables automatically go out of scope and are destroyed upon exiting the scope in which they were declared.

```c
#include <stdio.h>

    void myFunction() {
        int localVar = 10;  // Declaration of an automatic variable
        printf("Local variable inside the function: %d\n", localVar);
    }

    int main() {
        myFunction(); // Call to the function
        // Uncommenting the following line will generate an error because localVar is out of scope
        // printf("Trying to access local variable outside the function: %d\n", localVar);
        return 0;
    }
```

In this example:

- `myFunction()` defines an automatic variable `localVar`.
- The variable `localVar` is accessible only within the scope of the function `myFunction()`.
- Trying to access `localVar` outside the function, such as in `main()`, will result in a compilation error because it's out of scope.

This demonstrates how automatic variables are created when a function or block of code is executed, and they automatically go out of scope and are destroyed upon exiting the scope in which they were declared.

**External Variables**:
Declared outside any function, external variables can be used and modified throughout all functions within the same compilation unit. They have global scope and can be accessed by other compiled code.

```c
#include <stdio.h>

// Declaration of an external variable
extern int globalVar;

// Function to print the value of the external variable
void printGlobalVar() {
    printf("The value of globalVar is: %d\n", globalVar);
}

int main() {
    // Accessing the external variable
    globalVar = 100;
    
    // Calling the function to print the value of the external variable
    printGlobalVar();
    
    return 0;
}

// Definition of the external variable
int globalVar;
```

In this example, `globalVar` is declared as an external variable using the `extern` keyword at the beginning of the program. It is then defined later in the program outside of any function. The `printGlobalVar()` function prints the value of `globalVar`. Finally, in the `main()` function, we assign a value to `globalVar` and call `printGlobalVar()` to display its value.

**Static Variables**:
Declared with the keyword "static," these variables retain their values between function calls.
They can be local or global and provide persistence across function invocations.

Here's an example of a static variable in C:

```c
#include <stdio.h>

void increment() {
    static int count = 0; // Static variable declaration and initialization
    count++; // Increment the static variable
    printf("Count is %d\n", count);
}

int main() {
    increment(); // First function call
    increment(); // Second function call
    increment(); // Third function call
    return 0;
}
```

In this example, the variable `count` is declared as static inside the function `increment()`. Unlike local variables, static variables retain their values between function calls. So, each time the `increment()` function is called, the value of `count` persists and increments.

The output will be:

```c

Count is 1
Count is 2
Count is 3
```

This demonstrates how static variables maintain their values across multiple function invocations, providing persistence throughout the program's execution.

**Register variables**:
Register variables in C are a special type of local variables that are stored in CPU registers rather than in memory (RAM). The `register` keyword is used to declare a register variable. However, it's worth noting that the `register` keyword is now considered obsolete and is often ignored by modern compilers.

```c
#include <stdio.h>

int main() {
    register int i; // Declare a register variable
    int sum = 0;

    for (i = 1; i <= 10; ++i) {
        sum += i;
    }

    printf("Sum of numbers from 1 to 10 is: %d\n", sum);
    return 0;
}
```

In this example, the variable `i` is declared as a register variable. The compiler may choose to store this variable in a CPU register for faster access. However, it's essential to note that using the `register` keyword doesn't guarantee that the variable will be stored in a register; it's merely a suggestion to the compiler. Modern compilers are efficient at optimizing code and may choose to ignore this suggestion if they find it unnecessary. Therefore, the use of `register` is no longer common in modern C programming.

**constant variable**:
constant variable in C, also known as a "constant," is a variable whose value cannot be changed during the execution of a program. Once a constant is assigned a value, it remains fixed throughout the program's execution.

In C, constants are typically defined using the `const` keyword. Here's an example:

```c
#include <stdio.h>

int main() {
    const int x = 10; // Declaration of a constant variable 'x' with value 10
    printf("The value of x is: %d\n", x);
    return 0;
}
```

In this example, `x` is a constant variable initialized with the value 10. Attempting to modify the value of `x` will result in a compiler error.

Constants offer several benefits, including:

1. **Readability**: Constants make code more readable by providing meaningful names for fixed values.
2. **Safety**: Constants prevent accidental modification of values, reducing the risk of bugs.
3. **Optimization**: Some compilers can optimize code better when constants are used, as they know the values will not change.

Using constants is a good practice in programming, as it helps in writing cleaner, safer, and more maintainable code.

Below is the primary differences between local and global variables in C:

| Global Variable | Local Variable |
|-----------------|----------------|
| Declared outside the `main()` function, accessible throughout the program by any function. | Declared within specific blocks like loops, switch cases, or user-defined functions. |
| Have global scope, accessible from anywhere in the program. | Limited to the block in which they are declared, existing only during the block's execution. |
| All functions within the same source file can access global variables directly. | Accessible only within the block where they are declared. |
| Not accessible from another source file due to limited visibility. | Not accessible outside of the block in which they are declared. |
| Can be declared with the `extern` keyword globally, indicating their usage before their actual declaration. | Their reference address is passed whenever they are called. |

In conclusion, variables play a crucial role in C programming, providing a means to store and manipulate data throughout execution. Different types of variables, including local and global ones, have specific scope limitations based on their declaration within the code. It's essential to understand and appropriately use each type to ensure efficient program execution and memory management.

## Data types in C

In C programming, a data type is a classification that specifies the type of data a variable can hold and the operations that can be performed on that data. Data types determine the size of memory allocated to variables and define the range of values that can be stored in them.

C language offers a diverse range of data types, categorized into four main classes:

1. **Primary Data Types**: Primitive data types are the most basic data types that are used for representing simple values such as `int`, `float`, and `char`etc.
2. **User-defined Data Types**: The user-defined data types are defined by the user himself. Such as `enumerator` and `typedef`.
3. **Derived Data Types**: The data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. Including: `array`, `function`, `pointers`, `structure`, and `union`.
4. **Empty Data Sets**: Represented by `void`.

These data types are essential for declaring variables and constants, allowing programmers to manipulate different types of data efficiently within their programs.

## Primary Data Types

There are five primary fundamental data types:

1. **Integer**:
`int short`, or `short int`: Occupies 2 bytes, with a range of -32768 to +32767.
`long int` or `long` Occupies 4 bytes, with a range of -2,147,483,648 to +2,147,483,647.

2. **Real**:
`float` Occupies 4 bytes, with a range from 3.4e-38 to 3.4e38.
`double` Occupies 8 bytes, with a range from 1.7e-308 to 1.7e+308.
`long double` Occupies 10 bytes, with a range from 3.4e-4932 to 1.1e+4932.

3. **Character**:
`char` Occupies 1 byte, with a range of -128 to +127.

    ***Formula for Range Calculation***

    **Formula to Calculate Range**: \(2^{n}-1\), where \(n\) is the number of bits occupied by the data type.

    - Range of `int`:
    - `int` occupies 2 bytes, i.e., 16 bits.
    - So, \(2^{16}-1 = 2^{15} = 32768\).
    - The range becomes: -32768 to +32767.

    > This formula cannot be used to calculate the range of real data types
    > (float, double, long double)

4. **Modifiers**
Modifiers like signed, unsigned, and short can be applied to character and integer primitive data type.
Additionally, the modifier long can be applied to double.

5. **Signed and Unsigned**
The range of `int` or signed `int` is -32768 to +32767, using 2 bytes.
When only positive values are required, the data type can be made unsigned, resulting in a range of 0 to 65535.

**Note**:
> Real data types (float, double, long double) cannot be made unsigned.

Here's data types arranged in a table format:

| Data Type                  | Size (bytes) | Range                                    | Format Specifier |
|----------------------------|--------------|------------------------------------------|------------------|
| short int                  | 2            | -32,768 to 32,767                        | %hd              |
| unsigned short int         | 2            | 0 to 65,535                              | %hu              |
| unsigned int               | 4            | 0 to 4,294,967,295                       | %u               |
| int                        | 4            | -2,147,483,648 to 2,147,483,647          | %d               |
| long int                   | 4            | -2,147,483,648 to 2,147,483,647          | %ld              |
| unsigned long int          | 4            | 0 to 4,294,967,295                       | %lu              |
| long long int              | 8            | -(2^63) to (2^63)-1                      | %lld             |
| unsigned long long int     | 8            | 0 to 18,446,744,073,709,551,615          | %llu             |
| signed char                | 1            | -128 to 127                              | %c               |
| unsigned char              | 1            | 0 to 255                                 | %c               |
| float                      | 4            | 1.2E-38 to 3.4E+38                       | %f               |
| double                     | 8            | 1.7E-308 to 1.7E+308                     | %lf              |
| long double                | 16           | 3.4E-4932 to 1.1E+4932                   | %Lf              |

**Note**:
> The 'long', 'short', 'signed', and 'unsigned' are datatype modifiers that can be used with some primitive data types to change their size or length.                                               |

You can always check the size of a variable using the `sizeof()` operator.

```c
#include <stdio.h>      
int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}
```

## Format Specifiers

Format specifiers are used in `printf` and `scanf` functions for formatting output/input.

- %d, %i: For printing integers in decimal, hexadecimal, or octal.
- %h, %ld: For short and long integers in decimal.
- %u, %lu: For unsigned integers.
- %f, %lf, %Lf: For floating-point numbers.
- %e, %g: For exponential notation.
- %o, %x, %X: For octal and hexadecimal representations.
- %c: For characters.
- %s: For strings.

## Escape Sequences

Escape sequences are non-printable characters used in the `printf()` function, always beginning with a backslash \\.
Common escape sequences include \n (new line), \t (tab), and \b (backspace).

| Escape sequences | Description                                                      |
| ---------------- | ---------------------------------------------------------------- |
| \a               | Bell beep                                                        |
| \b               | ack space(brings cursor one position left)                       |
| \f               | form feed(ejects current paper from printer and loads a new one) |
| \n               | New line character                                               |
| \r               | carriage return(brings cursor to the beginning of the line)      |
| \t               | Horizontal tab                                                   |
| \v               | Vertical tab.                                                    |
| \\\              | To print backslash                                               |
| \”               | To print double quotations                                       |
| \’               | To print single quotations                                       |
| \\?              | To print question mark                                           |
| \0               | Null (End of string)                                             |
| \xhh or \Xhh     | A hexadecimal bit pattern                                        |
| \ooo             | An octal bit pattern                                             |

Escape sequences like `\ooo` and `\xhh` provide a way to represent characters using octal or hexadecimal character codes, respectively.

- `\ooo`: This escape sequence allows you to specify a character using its octal representation.
  Here, `ooo` represents a sequence of one to three octal digits (0-7). Each octal digit can range from 0 to 7.
  For example, `\010` represents the character with the octal value 010, which is equivalent to the ASCII character for backspace.
- `\xhh`: This escape sequence enables you to specify a character using its hexadecimal representation.

## What are tokens in the C language

Tokens are the smallest individual elements that constitute a program and are meaningful to the compiler.
The tokens of C language can be classified into six types based on the functions they are used to perform.

1. **Identifiers**:
   Names given to variables, functions, and other user-defined entities.
   Identifiers must start with a letter and can contain letters, digits, and underscores.
2. **Keywords**:
   Reserved words with predefined meanings in the C language.
   Examples include `int`, `float`, `while`, and `if`.
3. **Constants:**
   Values that cannot be changed during the execution of a program.
   Constants can be of various types, such as integer constants, floating-point constants, and character constants.
4. **Operators**:
   Symbols that perform operations on operands, such as arithmetic or logical operations.
   Examples include arithmetic operators (+, -, *, /), relational operators (==, !=, <, >), and logical operators (&&, ||, ! ).  
5. **Special Characters**:`(Punctuators)`
   Special symbols that are used to separate tokens and delimit statements.
   Examples include parentheses (), braces {}, brackets [], semicolons **;**, and commas **,**.
6. **Strings**:
   Sequences of characters enclosed in double quotes.
   Strings are used to represent text data.

The following C code contains various types of tokens:

```c
int main() {
    int x = 10;
    float y = 3.14;
    if (x > y) {
        printf("x is greater than y\n");
    }
}
```

- **Keywords**: `int`, `main`, `float`, `if`
- **Identifiers**: `x`, `y`
- **Constants**: `10`, `3.14`
- **Strings**: `"x is greater than y\n"`
- **Operators**: `+`, `-`, `*`, `/`, `==`, `>`, `&&`, `||`, `!`
- **Punctuators**: `()`, `{}`, `;`, `,`

Tokens are important because they allow the compiler to parse and interpret a C program.
The compiler reads the source code and breaks it down into tokens. It then uses these tokens to build a syntax tree,
which is a hierarchical representation of the program's structure. The syntax tree is then used to generate machine code,
which can be executed by the computer.

## Keywords

Keywords in C are reserved words with predefined meanings, and they play a crucial role in the language's syntax and semantics.
These words are recognized and interpreted by the C compiler.
Every keyword in C is used for a purpose as it is designed for a unique purpose.
It can not be used as variable names as per user concern. It has a special meaning in compilers.
Using it without proper spelling or using it in the upper case alphabet will show compile time error.

| #  | Keyword  | Description                                                                         |
| -- | -------- | ----------------------------------------------------------------------------------- |
| 1  | auto     | Specifies automatic storage duration for a variable.                                |
| 2  | double   | Represents a double-precision floating-point data type.                             |
| 3  | int      | Declares an integer data type.                                                      |
| 4  | struct   | Defines a structure, allowing you to create user-defined data types.                |
| 5  | break    | Exits from the nearest enclosing loop or switch statement.                          |
| 6  | else     | Part of the conditional statement, executed when the condition is false.            |
| 7  | long     | Declares a long integer data type.                                                  |
| 8  | switch   | Initiates a switch statement, used for multi-branching.                             |
| 9  | case     | Defines a branch in a switch statement.                                             |
| 10 | enum     | Declares an enumeration, a set of named integer constants.                          |
| 11 | register | Suggests to the compiler that a variable should be stored in a register.            |
| 12 | typedef  | Creates a new data type using an existing one.                                      |
| 13 | char     | Represents a character data type.                                                   |
| 14 | extern   | Declares a variable or function as defined externally.                              |
| 15 | return   | Exits a function and returns a value.                                               |
| 16 | union    | Defines a union, allowing multiple data types to share the same memory space.       |
| 17 | const    | Declares a constant variable.                                                       |
| 18 | float    | Represents a floating-point data type.                                              |
| 19 | short    | Declares a short integer data type.                                                 |
| 20 | unsigned | Declares an unsigned integer data type.                                             |
| 21 | continue | Skips the rest of a loop's code and continues with the next iteration.              |
| 22 | for      | Initiates a for loop.                                                               |
| 23 | signed   | Declares a signed integer data type.                                                |
| 24 | void     | Represents an empty data type or indicates that a function does not return a value. |
| 25 | default  | Defines the default case in a switch statement.                                     |
| 26 | goto     | Transfers control to a labeled statement.                                           |
| 27 | static   | Specifies that a variable retains its value between function calls.                 |
| 28 | sizeof   | Returns the size of a data type or object.                                          |
| 29 | volatile | Indicates that a variable may be modified by an external entity.                    |
| 30 | do       | Initiates a do-while loop.                                                          |
| 31 | while    | Initiates a while loop.                                                             |
| 32 | if       | Initiates an if statement.                                                          |

All 32 keywords in C were added in the first version of C, which was known as the C89 standard.
There were some keywords added in the C with the C99 standard, which are:
**_bool**, **_complex**, **_imaginary**, **restrict**, and **inline**.

***Here's a brief explanation for each***

1. The `_Bool` type is a data type introduced in C99 to represent boolean values.
   It can have two possible values: **0** for false and **1** for true.
   It's commonly used for boolean operations.
2. The `_Complex` keyword is used to declare a complex number data type in C.
   Complex numbers have both a real and an imaginary part.
   For example, `double _Complex` declares a complex number with double precision.
3. The `_Imaginary` keyword is used to declare an imaginary number data type in C.
   Imaginary numbers are part of the complex number system and have no real part.
   For example, `float _Imaginary` declares an imaginary number with single precision.
4. The `restrict` keyword is a type qualifier in C that provides a hint to the compiler about pointer aliasing.
   It indicates that the pointer is the only means to access the data it points to, helping the compiler optimize code.
5. The `inline` keyword is used to suggest to the compiler that a particular function should be inlined. Inlining a function means that the compiler inserts the function's code directly at the call site instead of generating a function call. This can lead to performance improvements.

***Example***
Here, we are using **int**, **char** and **auto** keywords.
We can simply use **auto** keyword to deduce the data type of any variable.
In this example, instead of using **int** and **character array**,
we can just use **auto** keyword which will automatically identify the data type for storage purposes.

```c
int number = 45; //int keyword
char firstName[10] = "Johnson"; //char keyword

These two lines can be modified as: (without knowing the data-type)
auto num = 45; //auto keyword is used to deduce the data type of a variable
auto firstName = "Johnson";
```

## Identifiers

Identifiers are names given to various program entities, such as variables, functions, arrays, structures, labels, etc.
These names are crucial for uniquely identifying and referencing different elements within a program.
Identifiers play a fundamental role in C programming, allowing developers to create and manage variables, functions, and other program elements with meaningful names.

***Here are some key points about identifiers in C:***

- **Uniqueness**: Identifiers must be unique within their scope, ensuring that each entity has a distinct name.
- **Composition**: An identifier can be composed of letters, digits, and underscores ( _ ).
  It must start with a letter or an underscore.
- **Case Sensitivity**: C is case-sensitive, so uppercase and lowercase letters are considered different.
  For example, "Name" and "name" are distinct identifiers.
- **Reserved Keywords**: Identifiers cannot have the same names as reserved keywords used by the C language.
- **Rules and Conventions**: While there are specific rules for forming valid identifiers,
  programmers often follow conventions for readability and maintainability.

## Variable

A variable is a user-defined or readable custom name assigned to a memory location.
It serves as a container for storing data values such as numbers and characters.
A variable can be used to store a value of any data type.
The general syntax for declaring a variable is `data_type variable_name;`.
For example, `int num;` declares an integer variable named "num."

**Naming a Variable**:
When naming a variable, certain rules and conventions should be followed:

- Variable names must start with a letter or an underscore ( _ ).
- They can be followed by letters, digits, or underscores.
- C is case-sensitive, so uppercase and lowercase letters are distinct.
- Avoid using reserved keywords as variable names.
- Choose meaningful and descriptive names for better code readability.

**Valid Names**:
Valid variable names adhere to the rules mentioned above.
Variable names can be up to 31 characters in ANSI C language.
The Standard says to avoid the use of underscores as the first letter.
For example, `count`, `_total`, and `studentScore` are valid variable names, but `_total` not recommented.
`2ndPlace` and `break` are not valid due to starting with a digit and being a reserved keyword, respectively.
They are not started with a numerical digit, not a keyword and also, there is no blank space or any special operator.
These concepts are fundamental to understanding how variables are declared, named, and used in C programming.

## Constants

Constants in C refer to fixed values that remain unchanged during the execution of a program.
These values cannot be modified once they are declared.
Constants are used to represent unchanging quantities or values that are essential for the program's logic.
They are declared with specific data types, and their values cannot be altered during the program's execution.
Constants play a crucial role in making programs more readable, maintainable, and less error-prone.
They are used to define values that should remain fixed throughout the program's execution.

We can declare constants in C language using: `const`, `#define`...

We are using the `const` keyword to declare a variable and assigning a value to it that can not be modified later.

```c
const variable_name = value; //We can assign a constant value to variable_name
```

we are using `#define` pre-processor and constant `ll` will be an alias-name for long keyword.

```c
#define ll long //Here, constant ll will be treated as an alias name for long
```

**Constants in C language can be classified into two categories**:

- Primary Constants
- Secondary Constants.

### Primary Constants

**Numeric** constant is a negative or a positive numeric value that is either an integer constant or a fractional constant with an optional decimal point. Also, no space or any other special symbol is allowed.
Numeric Constants are sub-divided into two types:

- Integer
- Float

**Integer Constants**:
Represent whole numbers without any fractional part.
Integer constant in C is a fixed numerical value that represents an integral type.
These constants are used to assign specific integer values to variables and are crucial for numeric computations in C programming.
There are three types of integers:

- **Decimal**: Represented in the base-10 system (e.g., 123, 10, 88, 909 etc.).
- **Octal**: Represented in the base-8 system, preceded by '0' (e.g., 075, 011, 088 etc.).
- **Hexadecimal**: Represented in the base-16 system, preceded by '0x' or '0X' (e.g., 0xAB, 0x1a, 0x4b, 0x6b, etc.).

Integer constants can be positive or negative. They may start with an optional '+' or '-' sign.

- Decimal: `int decimal = 42;`
- Octal: `int octal = 075;` (Equivalent to decimal 61)
- Hexadecimal: `int hex = 0xAB;` (Equivalent to decimal 171)

The range of representable values depends on the size of the integer type (e.g., `int`, `long`, `short`).

**Syntax**:

- General form: `[sign] [base] constant_digits [uU] [lL]`
- Example: `int num = -123;`

**Floating-point Constants**:
Floating or real constants in C represent decimal numbers with fractional parts.
These constants are crucial for handling non-integer numerical values.
Here are key points about floating or real constants:

**Types of Real Constants**:

- **Float**: Represented with the `float` data type, typically 4 bytes in size.
- **Double**: Represented with the `double` data type, usually 8 bytes in size.
- **Long Double**: Represented with the `long double` data type, offering extended precision.

Written as a sequence of digits, possibly including a decimal point.
May include an optional exponent part for scientific notation.

***Examples***

- Float: `float num = 3.14f;`
- Double: `double pi = 3.14159;`
- Long Double: `long double largeNum = 1.234567e10;`

The range and precision depend on the chosen data type (`float`, `double`, or `long double`).
**Suffixes:** Suffixes like `f`, `F` indicate a float, while `l`, `L` indicate a long double.
**Scientific Notation:** Allows expressing very large or small numbers using the `e` or `E` notation.

### Character constant

They are further sub-divided into three types:

- Single Character
- String
- BackSlash

**Single character constants in C**:
Single character constants, also known as character literals, are individual characters enclosed within single quotation marks (' ')
These constants represent specific characters from the ASCII or Unicode character set.
Alphabets in uppercase(‘A’ to ‘Z’) or lowercase (‘a’ to‘z’)
Digits(0 to 9) or a special symbol(@, #, $, %, *, &, +, -, ., :, / etc.) For example:

- `char letter = 'A';`
- `int digit = '7';`
- `char newline = '\n';` (newline character)
- `'*'`
- `'\t'` (tab character)

> All escape sequences are also considered characters

**String Constants**
In C, a string constant is represented by a sequence of characters within double quotes. These characters can include letters, digits, special symbols, and escape sequences like `\n` (newline) or `\t` (tab). The number of characters in a string constant varies depending on its content, but it can range from zero characters for an empty string to a maximum determined by the memory available in the system. To determine the number of characters in a string constant, one can use functions like `strlen()` to calculate its length programmatically [[C/Strings](https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Strings.html)].
Strings in C are represented as arrays of characters with a null character '\0' denoting the end.
Represent sequences of characters, enclosed in double quotes (“ “), and memory is allocated dynamically if declared as `"string[]"`.

**Syntax:** Represented by a sequence of characters enclosed in double quotes, e.g., `"Hello"`, `"123"`, `"C programming"`.
**Type:** String constants are arrays of characters with the data type `char[]`.
**Example:**
  `char greeting[] = "Hello";`

***Note***

> The character constant ‘4’ is not the same as digit 4. Every character constants
> has an equivalent integer number.

In C, single character constants are represented as integer values according to their ASCII or Unicode equivalents.
They are commonly used in assignments, comparisons, and various operations involving characters in C programming.

‘A’ to ‘Z’ has ASCII 65 to 90. i.e.
‘A’ has ASCII 65 ‘B’ has ASCII 66 and so on.
‘a’ to ‘z’ has ASCII 97 to 122
‘0’ to ‘9’ has ASCII 48 to 57
‘ ‘ (space) has ASCII 32.
☺  (smiling space) has ASCII 1.

**Backslash Constant in C:**

In C, a backslash constant, also known as an escape sequence, is a special character sequence preceded by a backslash `\`.
It allows representing non-graphical characters or characters with special meanings in C strings.
Common backslash constants include:

- `\n` for newline character
- `\t` for tab character
- `\r` for carriage return
- `\b` for backspace
- `\0` for null character
- `\\` for the backslash itself

These constants are used to insert special characters or control the formatting of output in C programs.

**Logical Constants**
Logical Constants in C consist of logical operators and can take either of the two values: true or false.
They are generally of two types:

- logical connectives
- quantifiers.

The equality predicate ('=) is also treated as a logical constant.
Some symbols that are treated as logical constants are:

| Symbols | Meaning                    |
| ------- | -------------------------- |
| T       | "True"                     |
| F       | "False"                    |
| =       | "Equals"                   |
| ¬       | "Not"                      |
| ∧       | "And"                      |
| ∨       | "Or"                       |
| →       | "Implies", "if...then"     |
| ∀       | "For all"                  |
| ∃       | "There exists", "for some" |

## Secondary Constants in C Language

**Arrays**:
**Arrays** in C are collections of elements of the same data type with unique index numbers for accessing elements.
They are stored in contiguous memory locations.

Example: `int A[10];`

The name of the array, like `A`, is a constant pointer to the first element of the array and can be considered as a `const int*`.

**Pointers**:
**Pointers** in C are variables that store memory addresses.
They enable the return of multiple values from a function.

Example: `int *nums;` declares a pointer `nums` of type `int`.

**Structures**:
**Structures** in C are user-defined data types used to store various data types.
The `struct` keyword is used for declaration.
Example:

```c
  struct Article {
     char subject[50];
     char abstract[50];
     int lines;
  };
```

**Unions**:
**Unions** in C are user-defined data types like structures but use less memory.
They can only store data in one field at a time.
Example:

```c
union Article {
   char subject[50];
   char abstract[50];
};
```

**Enumeration (Enum)**:
**Enums** in C assign names to integral constants.
Example:

```c
enum days {Sun, Mon, Tues};
```

## Special Characters in C

Special characters in C have specific meanings and usage:

- **Square Brackets [ ]**: Used for array element reference.
- **Simple Brackets ( )**: Used for function calling and declaration.
- **Curly Braces { }**: Mark code blocks.
- **Comma (,)**: Separates variables or statements.
- **Pre-Processor / Hash (#)**: Denotes a header file or macro.
- **Asterisk (*)**: Used for multiplication and creating pointers.
- **Tilde (~)**: Used for bitwise complement.
- **Period (.)**: Accesses members of structures or unions.
- **Colon (:)**: Part of the conditional operator.
- **Semicolon (;)**: Statement terminator.
- **Assignment Operator (=)**: Assigns values to variables.
