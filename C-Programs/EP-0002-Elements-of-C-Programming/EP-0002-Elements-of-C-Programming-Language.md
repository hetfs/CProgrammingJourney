# Elements of C Language

> [***Back To C Programming Menu***](../../README.md#c-programming-journey)

The elements of the C programming language encompass various components necessary for constructing C programs [[1](https://studyopedia.com/c/c-introduction/)]. Understanding these elements is crucial for writing C programs effectively and efficiently.These elements include:

1. **Valid character set**: Defines the characters allowed in identifiers, keywords, and other language constructs.
2. **Identifiers**: Names used for variables, functions, and other entities in a program.
3. **Keywords**: Reserved words with predefined meanings in the language.
4. **Basic data types**: Fundamental types used to represent data, such as `int`, `float`, `char`, etc.
5. **Constants**: Fixed values that do not change during program execution.
6. **Variables**: Named storage locations in memory used to hold data during program execution.

## Data Types in C Language

C language offers a diverse range of data types, categorized into four main classes:

1. **Primary Data Types**: Includes `int`, `float`, and `char`.
2. **User-defined Data Types**: Such as `enumerator` and `typedef`.
3. **Derived Data Types**: Including `array`, `function`, `pointers`, `structure`, and `union`.
4. **Empty Data Sets**: Represented by `void`.

**Primary Data Types:** There are five primary fundamental data types:

**Integer**:
`int short`, or `short int`: Occupies 2 bytes, with a range of -32768 to +32767.
`long int` or `long` Occupies 4 bytes, with a range of -2,147,483,648 to +2,147,483,647.

**Real**:
`float` Occupies 4 bytes, with a range from 3.4e-38 to 3.4e38.
`double` Occupies 8 bytes, with a range from 1.7e-308 to 1.7e+308.
`long double` Occupies 10 bytes, with a range from 3.4e-4932 to 1.1e+4932.

**Character**:
`char` Occupies 1 byte, with a range of -128 to +127.

***Formula for Range Calculation***

**Formula to Calculate Range**: \(2^{n}-1\), where \(n\) is the number of bits occupied by the data type.

* Range of `int`:
* `int` occupies 2 bytes, i.e., 16 bits.
* So, \(2^{16}-1 = 2^{15} = 32768\).
* The range becomes: -32768 to +32767.

> This formula cannot be used to calculate the range of real data types
> (float, double, long double)

**Modifiers**
Modifiers like signed, unsigned, and short can be applied to character and integer primitive data type.
Additionally, the modifier long can be applied to double.

**Signed and Unsigned**
The range of `int` or signed `int` is -32768 to +32767, using 2 bytes.
When only positive values are required, the data type can be made unsigned, resulting in a range of 0 to 65535.

**Note**:
> Real data types (float, double, long double) cannot be made unsigned.

### Format Specifiers

Format specifiers are used in `printf` and `scanf` functions for formatting output/input.

* %d, %i: For printing integers in decimal, hexadecimal, or octal.
* %h, %ld: For short and long integers in decimal.
* %u, %lu: For unsigned integers.
* %f, %lf, %Lf: For floating-point numbers.
* %e, %g: For exponential notation.
* %o, %x, %X: For octal and hexadecimal representations.
* %c: For characters.
* %s: For strings.

### Escape Sequences

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

* `\ooo`: This escape sequence allows you to specify a character using its octal representation.
  Here, `ooo` represents a sequence of one to three octal digits (0-7). Each octal digit can range from 0 to 7.
  For example, `\010` represents the character with the octal value 010, which is equivalent to the ASCII character for backspace.
* `\xhh`: This escape sequence enables you to specify a character using its hexadecimal representation.
  Here, `hh` represents a sequence of one to two hexadecimal digits (0-9, A-F or a-f).
  Each hexadecimal digit can range from 0 to F (or f).
  For instance, `\x08` represents the character with the hexadecimal value 08, which is also the ASCII character for backspace.
These escape sequences provide a concise way to represent characters based on their numerical values in octal or hexadecimal formats within C strings. They are commonly used when you need to include non-printable characters or characters with special meanings in your strings.

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

* **Keywords**: `int`, `main`, `float`, `if`
* **Identifiers**: `x`, `y`
* **Constants**: `10`, `3.14`
* **Strings**: `"x is greater than y\n"`
* **Operators**: `+`, `-`, `*`, `/`, `==`, `>`, `&&`, `||`, `!`
* **Punctuators**: `()`, `{}`, `;`, `,`

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

* **Uniqueness**: Identifiers must be unique within their scope, ensuring that each entity has a distinct name.
* **Composition**: An identifier can be composed of letters, digits, and underscores ( _ ).
  It must start with a letter or an underscore.
* **Case Sensitivity**: C is case-sensitive, so uppercase and lowercase letters are considered different.
  For example, "Name" and "name" are distinct identifiers.
* **Reserved Keywords**: Identifiers cannot have the same names as reserved keywords used by the C language.
* **Rules and Conventions**: While there are specific rules for forming valid identifiers,
  programmers often follow conventions for readability and maintainability.

## Variable

A variable is a user-defined or readable custom name assigned to a memory location.
It serves as a container for storing data values such as numbers and characters.
A variable can be used to store a value of any data type.
The general syntax for declaring a variable is `data_type variable_name;`.
For example, `int num;` declares an integer variable named "num."

**Naming a Variable**:
When naming a variable, certain rules and conventions should be followed:

* Variable names must start with a letter or an underscore ( _ ).
* They can be followed by letters, digits, or underscores.
* C is case-sensitive, so uppercase and lowercase letters are distinct.
* Avoid using reserved keywords as variable names.
* Choose meaningful and descriptive names for better code readability.

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

* Primary Constants
* Secondary Constants.

### Primary Constants

**Numeric** constant is a negative or a positive numeric value that is either an integer constant or a fractional constant with an optional decimal point. Also, no space or any other special symbol is allowed.
Numeric Constants are sub-divided into two types:

* Integer
* Float

**Integer Constants**:
Represent whole numbers without any fractional part.
Integer constant in C is a fixed numerical value that represents an integral type.
These constants are used to assign specific integer values to variables and are crucial for numeric computations in C programming.
There are three types of integers:

* **Decimal**: Represented in the base-10 system (e.g., 123, 10, 88, 909 etc.).
* **Octal**: Represented in the base-8 system, preceded by '0' (e.g., 075, 011, 088 etc.).
* **Hexadecimal**: Represented in the base-16 system, preceded by '0x' or '0X' (e.g., 0xAB, 0x1a, 0x4b, 0x6b, etc.).

Integer constants can be positive or negative. They may start with an optional '+' or '-' sign.

* Decimal: `int decimal = 42;`
* Octal: `int octal = 075;` (Equivalent to decimal 61)
* Hexadecimal: `int hex = 0xAB;` (Equivalent to decimal 171)

The range of representable values depends on the size of the integer type (e.g., `int`, `long`, `short`).

**Syntax**:

* General form: `[sign] [base] constant_digits [uU] [lL]`
* Example: `int num = -123;`

**Floating-point Constants**:
Floating or real constants in C represent decimal numbers with fractional parts.
These constants are crucial for handling non-integer numerical values.
Here are key points about floating or real constants:

**Types of Real Constants**:

* **Float**: Represented with the `float` data type, typically 4 bytes in size.
* **Double**: Represented with the `double` data type, usually 8 bytes in size.
* **Long Double**: Represented with the `long double` data type, offering extended precision.

Written as a sequence of digits, possibly including a decimal point.
May include an optional exponent part for scientific notation.

***Examples***

* Float: `float num = 3.14f;`
* Double: `double pi = 3.14159;`
* Long Double: `long double largeNum = 1.234567e10;`

The range and precision depend on the chosen data type (`float`, `double`, or `long double`).
**Suffixes:** Suffixes like `f`, `F` indicate a float, while `l`, `L` indicate a long double.
**Scientific Notation:** Allows expressing very large or small numbers using the `e` or `E` notation.

### Character constant

They are further sub-divided into three types:

* Single Character
* String
* BackSlash

**Single character constants in C**:
Single character constants, also known as character literals, are individual characters enclosed within single quotation marks (' ')
These constants represent specific characters from the ASCII or Unicode character set.
Alphabets in uppercase(‘A’ to ‘Z’) or lowercase (‘a’ to‘z’)
Digits(0 to 9) or a special symbol(@, #, $, %, *, &, +, -, ., :, / etc.) For example:

* `char letter = 'A';`
* `int digit = '7';`
* `char newline = '\n';` (newline character)
* `'*'`
* `'\t'` (tab character)

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

* `\n` for newline character
* `\t` for tab character
* `\r` for carriage return
* `\b` for backspace
* `\0` for null character
* `\\` for the backslash itself

These constants are used to insert special characters or control the formatting of output in C programs.

**Logical Constants**
Logical Constants in C consist of logical operators and can take either of the two values: true or false.
They are generally of two types:

* logical connectives
* quantifiers.

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

### Secondary Constants in C Language

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

* **Square Brackets [ ]**: Used for array element reference.
* **Simple Brackets ( )**: Used for function calling and declaration.
* **Curly Braces { }**: Mark code blocks.
* **Comma (,)**: Separates variables or statements.
* **Pre-Processor / Hash (#)**: Denotes a header file or macro.
* **Asterisk (*)**: Used for multiplication and creating pointers.
* **Tilde (~)**: Used for bitwise complement.
* **Period (.)**: Accesses members of structures or unions.
* **Colon (:)**: Part of the conditional operator.
* **Semicolon (;)**: Statement terminator.
* **Assignment Operator (=)**: Assigns values to variables.

## Operators in C

Operators in C are fundamental elements used to perform computations on values.
They can be categorized into three types:

1. **Unary Operators**: These operate on a single operand.
2. **Binary Operators**: These operate on two operands.
3. **Ternary Operator**: This operates on three operands.

**Unary Operators**:
These operators require only a single operand.
Examples include the increment operator (++), decrement operator (--), and sizeof operator.

```c
#include <stdio.h>

int main() {
   int a = 15; // positive value of a
   int b = -(a); // use of unary minus operator
   
   printf("The value of a: %d\n", a);
   printf("The value of b: %d\n", b);
   return 0;
}
```

**Binary Operators**:
These operators require two operands.
They are further classified into:

* Arithmetic Operators: Addition (+), Subtraction (-), Multiplication (*), Division (/), and Modulus (%).
* Relational Operators: Equal to (==), Not equal to (!=), Greater than (>), Less than (<), Greater than or equal to (>=), and Less than or equal to (<=).
* Logical Operators: AND (&&), OR (||), and NOT (!).
* Increment and Decrement Operators: Increment (++), and Decrement (--).
* Bitwise Operators: AND (&), OR (|), XOR (^), Left Shift (<<), Right Shift (>>), and NOT (~).
* Assignment Operators: Assignment (=), Addition and assignment (+=), Subtraction and assignment (-=), Multiplication and assignment (*=), Division and assignment (/=), Modulus and assignment (%=), Left shift and assignment (<<=), Right shift and assignment (>>=), Bitwise AND and assignment (&=), and Bitwise XOR and assignment (^=).

**Ternary Operator**: This operator requires three operands and is represented by the '?' symbol.
It is used for conditional expressions.

```c
   int a = 10, b = 20, c;
   c = (a < b) ? a : b; // If a < b is true, then c will be assigned with the value of a else b 
```

### Precedence and Associativity

Operators in C have precedence and associativity rules governing their evaluation:

* **Precedence**: Determines the order of operations in an expression.
* **Associativity**: Defines the direction (left to right or right to left) in which operators of the same precedence are evaluated.
* There are 45 operators in C:

| Rank | Operators     | Descriptions                                         | Associativity  |
| ---- | ------------- | ---------------------------------------------------- | -------------- |
| 1    | ( )          | Function call                                        | Left to right  |
|      | [ ]           | Array element reference                              |                |
|      | ->            | Structure operator (used between pointer and member) |                |
|      | .             | Structure operator (used between object and member)  |                |
| 2    | -             | Unary minus                                          | Right to left  |
|      | +             | Unary plus                                           |                |
|      | ++            | Increment                                            |                |
|      | --            | Decrement                                            |                |
|      | !             | Logical not                                          |                |
|      | ~             | One’s complement                                    |                |
|      | *             | Value of address (used with pointers)                |                |
|      | &             | Address of                                           |                |
|      | sizeof        | Sizeof                                               |                |
|      | (type)        | Typecasting                                          |                |
| 3    | *             | Multiplication                                       | Left to right  |
|      | /             | Division                                             |                |
|      | %             | Modulus                                              |                |
| 4    | +             | Addition                                             | Left to right  |
|      | -             | Subtraction                                          |                |
| 5    | <<            | Left Shift                                           | Left to right  |
|      | >>            | Right Shift                                          |                |
| 6    | <             | Less than                                            | Left to right  |
|      | <=            | Less than equal                                      |                |
|      | >             | Greater than                                         |                |
|      | >=            | Greater than equal                                   |                |
| 7    | ==            | Equality (conditions)                                | Left to righ   |
|      | !=            | Not Equal                                            |                |
| 8    | &             | Bitwise AND                                          | Left to righ   |
| 9    | ^             | Bitwise XOR                                          | Left to righ   |
| 10   | \|            | Bitwise OR                                           | Left to righ   |
| 11   | &&            | Logical AND                                          | Left to righ   |
| 12   | \|\|          | Logical OR                                           | Left to righ   |
| 13   | ?:            | Condition Operators                                  | Left to righ   |
| 14   | =, *=, /=, %= | Assignment operators                                 | Right to left. |
| 15   | ,             | Comma operator                                       | Left to righ   |

**Full list of Assignment Operators**: =, *=, /=, %= +=, -= &=, ^= |=, <<=, >>=

### Operator Classes

C operators can be classified into nine main classes, each with specific functionalities:

1. **Arithmetic Operators**: Addition (+), Subtraction (-), Multiplication (*), Division (/), and Modulus (%).
2. **Unary Operators**: Include unary plus, unary minus, increment, decrement, logical not, bitwise complement, value of address, address of, sizeof, and typecasting.
3. **Relational Operators**: Used for comparisons like less than, greater than, less than or equal to, and greater than or equal to.
4. **Assignment Operators**: Assign values to variables and can also perform arithmetic operations simultaneously.
5. **Equality Operators**: Check for equality or inequality between operands.
6. **Logical Operators**: Used for logical operations such as AND, OR, and NOT.
7. **Conditional Operators**: Also known as the ternary operator, used for conditional expressions.
8. **Bitwise Operators**: Perform bitwise operations like AND, OR, XOR, left shift, and right shift.
9. **Comma Operator**: Evaluates expressions from left to right and returns the value of the rightmost expression.

***Examples and Output***

* Arithmetic operators perform basic mathematical operations.
* Unary operators manipulate the sign or value of variables.
* Relational operators compare values and return boolean results.
* Assignment operators assign values to variables and perform arithmetic operations.
* Equality operators check for equality or inequality.

### Operators Overview and Examples

1. **Arithmetic Operators**: Perform mathematical operations.

   Example:

   ```c
   int a = 10, b = 5, result;
   result = a + b; // Addition
   result = a - b; // Subtraction
   result = a * b; // Multiplication
   result = a / b; // Division
   result = a % b; // Modulus (remainder)
   ```

2. **Unary Operators**: Operate on a single operand.

   Example:

   ```c
   int x = 10, y = -5, result;
   result = +x; // Unary plus
   result = -y; // Unary minus
   result++;    // Increment
   result--;    // Decrement
   ```

3. **Relational Operators**: Compare values and return true or false.

   Example:

   ```c
   int a = 10, b = 20;
   if (a < b) {
         // Code block executed if a is less than b
   }
   ```

4. **Assignment Operators**: Assign values to variables.

   Example:

   ```c
   int a = 10, b = 5;
   a += b; // Equivalent to a = a + b
   ```

5. **Equality operator**:   = =, !=

   These two operators are used to check whether the given expression  has the
   right and left sides equal or not. This operator is also a Boolean operator it
   also gives answer in 0 or 1.

   Example:

   ```c
   int a,b,c=5;
   a= =5;
   b!=2;
   printf(“%d, %d”,a,b);
   ```

6. **Logical Operators**: Perform logical operations.

   Example:

   ```c
   int x = 5, y = 10;
   if (x > 0 && y < 20) {
         // Code block executed if both conditions are true
   }
   ```

7. **Conditional Operator (Ternary Operator)**

   * It operates on three operands and returns a value based on a condition.
   * Provides a shorthand for if-else statements.
   * Syntax: ``Condition ? True_Statement : False_Statement;``
     Example:

     ```c
     int a = 10, b = 5, max;
     max = (a > b) ? a : b; // Assigns the larger of a and b to max
     ```

8. **Bitwise Operators**:Perform bitwise operations.

   Logical operators, **&&** (AND) and **||** (OR), are fundamental in C programming and work with two expressions, typically involving relational or equality operators.

   ***AND Operator (&&)***

   * **Truth Table:**
   * Expression 1 | Expression 2 | Result
   * 0 | 0 | 0
   * 0 | 1 | 0
   * 1 | 0 | 0
   * 1 | 1 | 1

   ***OR Operator (||)***

   * **Truth Table:**
   * Expression 1 | Expression 2 | Result
   * 0 | 0 | 0
   * 0 | 1 | 1
   * 1 | 0 | 1
   * 1 | 1 | 1

   ***NOT Operator (!)***

   * Reverses the expression:
   * 0 becomes 1
   * 1 becomes 0

   Example Usage

   ```c
   int a = 10, b = 5, c, d;
   c = a > 3 && b != 3; // Evaluates to 1 since both conditions are true.
   d = (a == 10 || b > 20); // Evaluates to 1 since at least one condition is true.
   printf("%d, %d", c, d); // Output: 1, 1
   ```

   ***Short Circuit Evaluation***:

   * Logical AND (&&) stops evaluation if the first expression is false.
   * Logical OR (||) stops evaluation if the first expression is true.

   ***Bitwise operators manipulate individual bits:***

   * One's Complement (~)
   * Bitwise AND (&)
   * Bitwise OR (|)
   * Bitwise XOR (^)
   * Left Shift (<<)
   * Right Shift (>>)
   * Example:

     ```c
     int a = 5, b = 3, result;
     result = a & b; // Bitwise AND
     result = a | b; // Bitwise OR
     ```

9. **Comma Operator (,)**: Evaluates expressions sequentially.

* Works from left to right but returns the rightmost value.
* Often used in for loops.

Example:

```c
  int a;
  a = 5, 6; // a = 6
```

### Special Miscellaneous Operators

In C programming, Special Miscellaneous Operators refer to operators that serve specific purposes and do not fall under the categories of arithmetic, relational, logical, or bitwise operators. These include `sizeof()`, `* (pointer)`, and `& (address of)`.

1. **sizeof Operator**: Returns the size of a variable or data type in bytes.
   Example:

   ```c
   int size = sizeof(int); // size will be the size of an integer in bytes
   ```

2. **Comma Operator (,)**: Evaluates multiple expressions sequentially and returns the value of the last expression.

   Example:

   ```c
   int a = (5, 6); // a will be assigned the value 6
   ```

3. **Pointer Operator (*)**: Used to declare pointer variables and to access the value pointed to by a pointer.

   Example:

   ```c
   int *ptr; // Declares a pointer to an integer
   int x = 10;
   ptr = &x; // Assigns the address of x to ptr
   printf("%d", *ptr); // Prints the value stored at the address pointed to by ptr
   ```

4. **Member Selection Operator (->)**: Used to access the members of a structure or union through a pointer.

   Example:

   ```c
   struct Student {
       int id;
       char name[20];
   };

   struct Student s;
   struct Student *ptr = &s;
   ptr->id = 101; // Accesses the id member using the pointer
   ```

5. **Conditional Operator (?:)**: Also known as the ternary operator, it is used for decision making based on a condition.

   Example:

   ```c
   int x = 10, y;
   y = (x > 5) ? 1 : 0; // If x is greater than 5, y will be assigned 1, otherwise 0
   ```

These miscellaneous operators serve various purposes in C programming and are important for performing specific operations efficiently.

## Strings in C

In C programming, a string is essentially an array of characters terminated by the null character '\0'.
Unlike a generic character array, a C string always concludes with this unique terminator, indicating its endpoint.
Represented as a one-dimensional array, each character within occupies one byte of memory.
For instance, when declaring `char s[10]`, the array is implicitly initialized with a null terminator.
This distinct characteristic ensures that operations on C strings rely on this sentinel value to determine string boundaries, facilitating efficient string manipulation and processing in C programs.

**Declaring a String in C:**
A String in C is an array with a character as a data type.
C does not directly support strings as a data type, as seen in other programming languages like C++.
Hence, character arrays must be used to display a string in C.
The general syntax of declaring a string in C is as follows:

```c
char variable[array_size];
```

For example:

```c
char str[5];
char str2[50];
```

It is vital to note that we should always account for an extra space used by the null character (`\0`).

**Initializing a String in C:**
There are four methods of initializing a string in C:

1. **Assigning a string literal with size:**
   We can directly assign a string literal to a character array, keeping in mind to keep the array size at least one more than the length of the string literal that will be assigned to it.

   For example:

   ```c
   char str[5] = "John."; //  The compiler adds the null character (`\0`) at the end automatically
   ```

2. **Assigning a string literal without size:**

   It is also possible to directly assign a string literal to a character array without specifying the size.
   The size gets determined automatically by the compiler at compile time.

   ```c
   char str[] = "John.";
   ```

3. **Assigning character by character with size:**
   We can also assign a string character by character.
   However, it is essential to set the end character as `'\0'`.

   ```c
   char str[5] = {'J', 'o', 'h', 'n', '.', '\0'};
   ```

4. **Assigning character by character without size:**
   Similar to assigning directly without size, we also assign character by character with the null character at the end.
   The compiler will determine the size of the string automatically.

   ```c
   char str[] = {'J', 'o', 'h', 'n', '.', '\0'};
   ```

### Assigning Values to Strings in C

In C, character arrays cannot be directly assigned a string literal using the '=' operator once they have been declared.

```c
char str[100];
str = "John.";
```

This would result in a compilation error since assignment operations are not supported for character arrays after declaration.
To assign values to character arrays, we have two methods:

1. **During Initialization:**
   Values can be assigned to character arrays during their initialization.

   ```c
   char str[6] = "John.";
   ```

2. **Using strcpy():**
   The strcpy() function in C is a built-in function used to copy the contents of one string to another.
   It's found in the <string.h> header file.

The syntax of the strcpy() function in C is:

```c
char* strcpy(char* destination, const char* source);
```

Here's a breakdown of the syntax:

* `char* strcpy`: Specifies the return type of the function, which is a pointer to a character (string).
* `(char* destination)`: Represents the destination string where the contents of the source string will be copied.
  It's a pointer to a character array.
* `(const char* source)`: Denotes the source string whose content will be copied to the destination string.
  It's a pointer to a constant character array to indicate that the source string should not be modified.
  Let's break down how it works with an example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char destination[20]; // Destination string with enough space

    // Using strcpy() to copy contents from source to destination
    strcpy(destination, source);

    // Printing the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}
```

In this example, we have a source string "Hello, world!" and a destination string with enough space to hold the copied content.
The strcpy() function is used to copy the contents of the source string to the destination string. If the destination string isn't large enough to accommodate the source string's content, it may lead to buffer overflow issues, causing unexpected behavior or security vulnerabilities. Therefore, it's crucial to ensure that the destination string has sufficient space to hold the copied content to avoid such problems.

### Reading Strings in C

The scanf() function is commonly used to read strings in C.
It reads a sequence of characters until it encounters whitespace.
Here's the syntax of the `scanf()` function in C:

```c
scanf(const char *format, ...);
```

* `format`: A string literal or variable that specifies the format of the input to be read.
  It can contain format specifiers like `%d`, `%f`, `%c`, `%s`, etc.
  which represent the type of data to be read.
* `...`: Represents the list of variables where the input data will be stored.
  The number of variables must match the number of format specifiers in the format string.

Example usage:

```c
int num;
float price;
char letter;

// Reading integer, float, and character inputs
scanf("%d", &num);
scanf("%f", &price);
scanf(" %c", &letter); // Note the space before %c to consume any leading whitespace

// Reading a string input (note: it's a pointer, so no & is used)
char name[50];
scanf("%s", name);
```

In this example:

* `%d` is used to read an integer value into the variable `num`.
* `%f` is used to read a floating-point value into the variable `price`.
* `%c` is used to read a single character into the variable `letter`. The space before `%c` is used to consume any leading whitespace, including newline characters.
* `%s` is used to read a string into the character array `name`.

Ensure proper error handling and validation when using `scanf()` to handle unexpected inputs.

**Note:**

> The format specifier %s is used to read and output strings in C.
> Unlike other variables, the '&' operator is not required before the variable name in scanf(), as character arrays are pointers to the first character of the array.

### Reading a Line of Text

**fputs()** and **fgets()** are functions in C programming used to handle strings.

**fgets() Function:** To read a line of text in C, use the `fgets()` function, which reads a line of text from the standard input (usually the keyboard) and stores it in a character array.

* **fgets()**: It reads a line of text from a specified input stream (usually stdin, which represents the standard input, such as the keyboard) and stores it in a buffer. It stops reading when it encounters a newline character ('\n') or when it has read the maximum number of characters specified. fgets() ensures that the input string is null-terminated and can handle spaces in the input.
* **fputs()**: It writes a string to a specified output stream (usually stdout, which represents the standard output, such as the console). It doesn't append a newline character automatically, so if you want to print a newline after the string, you need to explicitly add '\n' to the string you're passing to fputs().

Here's a basic example to illustrate their usage:

```c
#include <stdio.h>

int main() {
    char str[50];

    // Reading a line of text
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin); // Reads from standard input and stores in str
    printf("You entered: %s", str); // Displays the entered string

    // Writing a string
    printf("Writing the same string using fputs(): ");
    fputs(str, stdout); // Writes the string to standard output
    return 0;
}
```

* **Input vs. Output**: `fgets()` is used for reading strings from an input stream, while `fputs()` is used for writing strings to an output stream.
* **Handling of Newline**: `fgets()` stops reading at a newline character, including it in the string, whereas `fputs()` does not automatically append a newline when writing.
* fgets() and puts() are used to read and print strings with whitespace.

Example Usage of fgets() and fputs() Functions in C

```c
#include <stdio.h>

int main() {
    // Example of fgets() to read input from user
    char input[100];
    printf("Enter a line of text: ");
    fgets(input, sizeof(input), stdin); // Reads a line of text from standard input
    printf("You entered: %s", input); // Outputs the entered text

    // Example of fputs() to write output
    char output[] = "Hello, world!";
    printf("Writing to file: %s\n", output);
    FILE *file = fopen("output.txt", "w"); // Open file for writing
    if (file != NULL) {
        fputs(output, file); // Write the string to file
        fclose(file); // Close the file
        printf("Write operation successful!\n");
    } else {
        printf("Failed to open file for writing!\n");
    }
    return 0;
}
```

### Passing Strings to Functions

Strings, represented by character arrays, can be passed to functions either as arrays or pointers. Both methods yield the same result:

```c
void pointer(char *str) {
  printf("The string is : ");
  puts(str);
}

void array(char str[]) {
  printf("The string is : ");
  puts(str);
}
```

Both functions output the same string.
Strings can be passed to functions as arrays or pointers.

### Manipulating Strings with Pointers

Since strings in C are represented by character arrays acting as pointers, we can manipulate them using pointers.

For example:

```c
char str[] = "Scaler.";
printf("%c", *str);             // Output: S
printf("%c", *(str + 1));       // Output: c
printf("%c\n", *(str + 6));     // Output: .
```

Pointers allow us to perform operations on strings easily.
Pointers can be used to manipulate and perform operations on strings.

### Example Program

The following program demonstrates various string operations in C:

```c
#include <stdio.h>

void array(char str[]) {
  printf("This function handles string literals with character arrays.\n");
  printf("First character: %c\n", str[0]);
  printf("The entire string is: %s\n", str);
  str[0] = 'Q'; // Modify the first character
  printf("The new string is: %s\n", str);
}

void literal(char *str) {
  printf("This function handles string literals using pointers.\n");
  printf("First character: %c\n", str[0]);
  printf("The entire string is: %s\n", str);
}

int main() {
  char str[] = "Strings.";
  array(str);

  char *strPtr = "Strings.";
  literal(strPtr);

  return 0;
}
```

This program illustrates string manipulation using both character arrays and pointers.
The program demonstrates operations on strings using character arrays and pointers.

### Difference between Character Arrays and String Literals

Character arrays can be modified, whereas string literals stored in read-only memory cannot be altered.

For example:

```c
char str[] = "John.";     // Modifiable
char *strPtr = "John.";   // Read-only
```

String literals, unlike character arrays, are stored in read-only memory and cannot be modified.
Character arrays can be modified, but string literals cannot.

1. Strings in C are terminated with null characters (CHAR(0)) and can include nonprintable characters.
2. Nonprintable characters are indicated using escape sequences, starting with a backslash (\) followed by a character.
3. C strings are specified with standard string constants followed by the character 'C'.It means that the string is represented using the standard string syntax, and then the character 'C' is appended to indicate it's a C-style string.

For example:

```c
char* myString = "Hello, World!C";
```

In this example, "Hello, World!" is the standard string constant, and 'C' is appended at the end to signify it as a C-style string. This 'C' character is not considered part of the string itself; it's just a marker to distinguish C-style strings from other types of strings. C-style strings are null-terminated, meaning they end with a null character ('\0') to signify the end of the string.
The 'C' character here doesn't interfere with the actual content of the string but serves as a convention to denote its type.
4. Backslashes are used as escape characters, and a null character is automatically added at the end of the string.
5. In C programming, strings can be delimited by either apostrophes (single quotes) or quotation marks (double quotes).
The choice between them depends on the context and the specific requirements of the string.

**Apostrophes (Single Quotes)**:

* Typically used to represent a single character.
* Special characters within the string are handled differently:
* To include an apostrophe itself within the string, you would use two consecutive apostrophes (`''`).
* However, apostrophes within apostrophes are generally not used in string delimitation.

**Quotation Marks (Double Quotes)**:

* Commonly used to represent strings of multiple characters.
* Special characters within the string can be directly represented, without escaping, except for the quotation marks themselves.
* To include a quotation mark within the string, you would use two consecutive quotation marks (`""`).

These rules ensure proper interpretation of strings by the C compiler, allowing for consistent and accurate handling of special characters within the strings. Choosing the appropriate delimiter depends on the specific needs and context of the string being defined or manipulated in the program.

### Conclusion

In conclusion, strings in C are declared using character arrays, which are a linear sequence of characters. The compiler automatically appends a Null character (\0) at the end of character arrays. Strings in C do not support assignment operations after declaration. Various methods such as scanf(), fgets(), and puts() are used for string input and output. Strings can be passed to functions as arrays or pointers. Pointers are useful for manipulating strings. However, string literals stored in read-only memory cannot be modified.

More about C Strings in Character Constants [[1]](https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Strings.html) [[2]](https://www.cita.utoronto.ca/~merz/intel_f10b/main_for/mergedProjects/lref_for/source_files/pgcchcst.htm) [[3]](https://www.scaler.com/topics/c/constants-in-c/)

> [**Go To Lab 0002 Element of C Prigramming**](Lab-0002-Element-of-C-Prigramming-Languge.md)
>
> [***Back To C Programming Menu***](../../README.md#c-programming-journey)
