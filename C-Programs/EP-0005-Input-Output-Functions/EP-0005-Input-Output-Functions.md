# Input Output (I/O) functions in C

> [***Back To C Programming Menu***](../../courseMenu.md#c-programming-course-menu)

Input Output (I/O) functions in C are used for handling input and output operations in programs. They facilitate communication between the program and external devices such as the keyboard, screen, files, and printers.

These functions include `printf()` and `scanf()` for formatted output and input, respectively, which are commonly used for console-based interactions. Additionally, there are functions like `fprintf()` and `fscanf()` for file-based input and output operations.

C also provides functions like `getchar()` and `putchar()` for character-based input and output, as well as functions such as `gets()` and `puts()` for handling strings.

I/O functions are essential for creating interactive programs, processing data from external sources, and producing output for users or other programs.

To take input for characters, strings, and integers in C, you can use different input functions provided by the standard C library (`stdio.h`).

*Here's how you can do it*:

1. **Character Input**:
   - Use `getchar()` function to read a single character from the standard input device.
   - Example:

     ```c
     #include <stdio.h>
     int main() {
         char ch;
         printf("Enter a character: ");
         ch = getchar();
         printf("You entered: %c\n", ch);
         return 0;
     }
     ```

    **Break down the code step by step**:

    1. `#include <stdio.h>`: This line includes the standard input-output header file, which contains declarations for input and output functions like `printf()` and `getchar()`.

    2. `int main() {`: This is the entry point of the program. The `main()` function returns an integer value and doesn't accept any arguments.

    3. `char ch;`: Declares a variable named `ch` of type `char`. This variable will store the character input provided by the user.

    4. `printf("Enter a character: ");`: Prints the message "Enter a character: " on the standard output, prompting the user to enter a character.

    5. `ch = getchar();`: Reads a single character from the standard input and assigns it to the variable `ch`. The `getchar()` function reads a single character from the standard input stream (usually the keyboard) and returns it as an integer value. Since we are storing it in a variable of type `char`, it will be automatically converted to the corresponding character.

    6. `printf("You entered: %c\n", ch);`: Prints the character entered by the user. The `%c` format specifier is used to format and print a single character. The value of `ch` is substituted in place of `%c`.

    7. `return 0;`: Indicates successful termination of the `main()` function with a return value of 0, which typically indicates that the program executed without errors.

    This code snippet prompts the user to enter a character, reads the input, and then displays the entered character back to the user.

2. **String Input**:
   - Use `fgets()` function to read a string from the standard input device.
   - Example:

     ```c
     #include <stdio.h>
     int main() {
         char str[50];
         printf("Enter a string: ");
         fgets(str, sizeof(str), stdin);
         printf("You entered: %s", str);
         return 0;
     }
     ```

    **Break down the code step by step**:

   1. `#include <stdio.h>`: This line includes the standard input-output header file, which contains declarations for input and output functions like `printf()` and `fgets()`.

   2. `int main() {`: This is the entry point of the program. The `main()` function returns an integer value and doesn't accept any arguments.

   3. `char str[50];`: Declares a character array named `str` capable of holding up to 49 characters (plus one for the null terminator). This array will store the string input provided by the user.

   4. `printf("Enter a string: ");`: Prints the message "Enter a string: " on the standard output, prompting the user to enter a string.

   5. `fgets(str, sizeof(str), stdin);`: Reads a line of text from the standard input (usually the keyboard) and stores it in the character array `str`. The `fgets()` function reads characters from the input stream until a newline character or the end-of-file is encountered, or until `sizeof(str)` - 1 characters have been read.

   6. `printf("You entered: %s", str);`: Prints the string entered by the user. The `%s` format specifier is used to format and print a string. The value of `str` is substituted in place of `%s`.

   7. `return 0;`: Indicates successful termination of the `main()` function with a return value of 0, which typically indicates that the program executed without errors.

   This code snippet prompts the user to enter a string, reads the input, and then displays the entered string back to the user.

3. **Integer Input**:
   - Use `scanf()` function with `%d` specifier to read an integer from the standard input device.
   - Example:

     ```c
     #include <stdio.h>
     int main() {
         int num;
         printf("Enter an integer: ");
         scanf("%d", &num);
         printf("You entered: %d\n", num);
         return 0;
     }
     ```

    **Break down the code step by step**:

    1. `#include <stdio.h>`: This line includes the standard input-output header file, which contains declarations for input and output functions like `printf()` and `scanf()`.

    2. `int main() {`: This is the entry point of the program. The `main()` function returns an integer value and doesn't accept any arguments.

    3. `int num;`: Declares an integer variable named `num` to store the user input.

    4. `printf("Enter an integer: ");`: Prints the message "Enter an integer: " on the standard output, prompting the user to enter an integer.

    5. `scanf("%d", &num);`: Reads an integer input from the standard input stream (usually the keyboard) and stores it in the variable `num`. The `%d` format specifier is used to indicate that the input should be treated as an integer. The `&` operator is used to pass the address of the variable `num` to `scanf()` so that it can directly modify the variable's value.

    6. `printf("You entered: %d\n", num);`: Prints the integer entered by the user. The `%d` format specifier is used to format and print an integer value. The value of `num` is substituted in place of `%d`.

    7. `return 0;`: Indicates successful termination of the `main()` function with a return value of 0, which typically indicates that the program executed without errors.

    This code snippet prompts the user to enter an integer, reads the input, and then displays the entered integer back to the user.

**Input and Output Functions in C**:

1. **printf()**: Used to print formatted output to the standard output device. It takes formatted strings as input and displays them on the screen.

    ```c
    #include <stdio.h>

    int main() {
        printf("Hello, world!\n");
        return 0;
    }
    ```

2. **scanf()**: Used to read formatted input from the standard input device. It takes formatted input according to the specified format string.

    ```c
        #include <stdio.h>

        int main() {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("You entered: %d\n", num);
            return 0;
        }
    ```

3. **putchar()**: Writes a single character to the standard output device. It takes a character as input and displays it on the screen.

    ```c
        #include <stdio.h>
        
        int main() {
            char ch = 'A';
            putchar(ch);
            return 0;
        }
    ```

4. **getchar()**: Reads a single character from the standard input device. It waits for the user to input a single character and then returns it.

    ```c
        #include <stdio.h>

        int main() {
            char ch;
            printf("Enter a character: ");
            ch = getchar();
            printf("You entered: %c\n", ch);
            return 0;
        }
    ```

5. **fprintf()**: Writes formatted data to a file. It takes a file pointer and a formatted string as input, allowing data to be written to a specified file.

    ```c
    #include <stdio.h>

    int main() {
        FILE *fp;
        fp = fopen("output.txt", "w");
        fprintf(fp, "This is a test message.");
        fclose(fp);
        return 0;
    }
    ```

6. **fscanf()**: Reads formatted data from a file. It takes a file pointer and a format string as input, allowing data to be read from a specified file.

    ```c
    #include <stdio.h>

    int main() {
        FILE *fp;
        int num;
        fp = fopen("input.txt", "r");
        fscanf(fp, "%d", &num);
        printf("Number read from file: %d\n", num);
        fclose(fp);
        return 0;
    }
    ```

7. **puts()**: Writes a string to the standard output device. It takes a null-terminated string as input and displays it on the screen, followed by a newline character.

    ```c
    #include <stdio.h>

    int main() {
        puts("This is a string.");
        return 0;
    }
    ```

8. **gets()**: Reads a string from the standard input device. It reads characters from the standard input until a newline character or the end-of-file marker is encountered, storing them in a buffer. However, it's considered unsafe due to buffer overflow vulnerabilities and is deprecated in newer versions of C.

    ```c
    #include <stdio.h>
    int main() {
        char str[50];
        printf("Enter a string: ");
        gets(str);
        printf("You entered: %s\n", str);
        return 0;
    }
    ```

Below is a comprehensive overview of the concepts and functions related to Input/Output operations in C, along with some code practice examples:

1. **Input and Output in C**:
   - C provides built-in functions for performing input and output operations.
   - Input refers to providing data to the program, while output involves displaying data on the screen or writing it to a file or device.

2. **Standard I/O Library**:
   - The `stdio.h` library in C provides methods for input and output operations.
   - It includes functions like `printf()` for output and `scanf()` for input.

3. **Basic Input/Output Functions**:
   - `printf()`: Used to format and print data to the standard output.
   - `scanf()`: Used to read formatted input from the standard input.

4. **Character Input/Output Functions**:
   - `getchar()`: Reads a single character from the standard input.
   - `putchar()`: Writes a single character to the standard output.

5. **String Input/Output Functions**:
   - `gets()`: Reads a line of text from the standard input (deprecated due to safety concerns).
   - `fgets()`: Reads a line of text from a file stream.

6. **File Input/Output Functions**:
   - `fopen()`: Opens a file for reading or writing.
   - `fclose()`: Closes a file stream.
   - `fprintf()`: Writes formatted output to a file.
   - `fscanf()`: Reads formatted input from a file.

7. **Error Handling**:
   - Functions like `perror()` and `strerror()` are used for error reporting and handling in I/O operations.

8. **Practice Code**:

```c
#include <stdio.h>

int main() {
    // Output
    printf("Hello, world!\n");

    // Input
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // Character Input/Output
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: %c\n", ch);

    // String Input/Output
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s\n", str);

    // File Input/Output
    FILE *file = fopen("example.txt", "w");
    fprintf(file, "This is a sample text.\n");
    fclose(file);

    return 0;
}
```

This code provides a basic overview of input/output operations in C and includes examples for different types of functions and their usage.

```c
#include <stdio.h>

int main() {
    // Integer data type
    int integerVar = 10;
    printf("Integer Variable: %d\n", integerVar);

    // Character data type
    char charVar = 'A';
    printf("Character Variable: %c\n", charVar);

    // Floating-point data types
    float floatVar = 3.14;
    printf("Float Variable: %f\n", floatVar);

    // Double data type
    double doubleVar = 123.456;
    printf("Double Variable: %lf\n", doubleVar);

    return 0;
}
```

This practice program demonstrates the usage of primary data types in C, including integer, character, floating-point, and double data types. It initializes variables of each type and prints their values using `printf()` statements. This program provides hands-on practice for beginners to understand and work with primary data types in C.

**Breakdown of the provided code step by step**:

1. **Include Standard Input Output Library**:

   ```c
   #include <stdio.h>
   ```

   This line includes the standard input-output library in the program, which provides functions like `printf()` and `scanf()` for input and output operations.

2. **Main Function**:

   ```c
   int main() {
   ```

   This is the entry point of the program. Execution begins from here.

3. **Integer Variable Declaration and Initialization**:

   ```c
   int integerVar = 10;
   ```

   Declares an integer variable named `integerVar` and initializes it with the value 10.

4. **Print Integer Variable**:

   ```c
   printf("Integer Variable: %d\n", integerVar);
   ```

   Prints the value of `integerVar` using the `printf()` function. `%d` is a format specifier used to print integers.

5. **Character Variable Declaration and Initialization**:

   ```c
   char charVar = 'A';
   ```

   Declares a character variable named `charVar` and initializes it with the character 'A'.

6. **Print Character Variable**:

   ```c
   printf("Character Variable: %c\n", charVar);
   ```

   Prints the value of `charVar` using the `printf()` function. `%c` is a format specifier used to print characters.

7. **Floating-point Variable Declaration and Initialization**:

   ```c
   float floatVar = 3.14;
   ```

   Declares a floating-point variable named `floatVar` and initializes it with the value 3.14.

8. **Print Floating-point Variable**:

   ```c
   printf("Float Variable: %f\n", floatVar);
   ```

   Prints the value of `floatVar` using the `printf()` function. `%f` is a format specifier used to print floating-point numbers.

9. **Double Variable Declaration and Initialization**:

   ```c
   double doubleVar = 123.456;
   ```

   Declares a double variable named `doubleVar` and initializes it with the value 123.456.

10. **Print Double Variable**:

    ```c
    printf("Double Variable: %lf\n", doubleVar);
    ```

    Prints the value of `doubleVar` using the `printf()` function. `%lf` is a format specifier used to print double precision floating-point numbers.

11. **Return Statement**:

    ```c
    return 0;
    ```

    Indicates successful completion of the program and returns 0 to the operating system.

That's the breakdown of the provided code! It declares and initializes variables of different data types and prints their values using `printf()` statements.

Below is a simple C program that demonstrates input and output operations. It reads a character from the user and displays its corresponding ASCII value.

```c
#include <stdio.h>

int main() {
    // Declare a variable to store the character input
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");

    // Read the character input from the user
    scanf("%c", &ch);

    // Display the ASCII value of the character
    printf("ASCII value of %c is %d\n", ch, ch);

    return 0;
}
```

Explanation:

1. **Include Standard Input Output Library**:

   ```c
   #include <stdio.h>
   ```

   This line includes the standard input-output library in the program, which provides functions like `printf()` and `scanf()` for input and output operations.

2. **Main Function**:

   ```c
   int main() {
   ```

   This is the entry point of the program. Execution begins from here.

3. **Variable Declaration**:

   ```c
   char ch;
   ```

   Declares a variable `ch` of type `char` to store the character input from the user.

4. **Prompt User for Input**:

   ```c
   printf("Enter a character: ");
   ```

   Displays a message asking the user to enter a character.

5. **Read Input Character**:

   ```c
   scanf("%c", &ch);
   ```

   Uses `scanf()` to read a character input from the user and store it in the variable `ch`.

6. **Display ASCII Value**:

   ```c
   printf("ASCII value of %c is %d\n", ch, ch);
   ```

   Prints the character and its corresponding ASCII value using `printf()`. The `%c` format specifier is used to print the character, and `%d` is used to print its ASCII value.

7. **Return Statement**:

   ```c
   return 0;
   ```

   Indicates successful completion of the program and returns 0 to the operating system.

When you run this program, it will prompt you to enter a character. After entering the character, it will display its ASCII value.

```c
#include <stdio.h>

int main() {
    // Integer data type
    int integerVar = 10;
    printf("Integer Variable: %d\n", integerVar);

    // Character data type
    char charVar = 'A';
    printf("Character Variable: %c\n", charVar);

    // Floating-point data types
    float floatVar = 3.14;
    printf("Float Variable: %f\n", floatVar);

    // Double data type
    double doubleVar = 123.456;
    printf("Double Variable: %lf\n", doubleVar);

    return 0;
}
```

This program demonstrates the primary data types in C:

1. **Integer**: Declared using `int`. Example: `10`.
2. **Character**: Declared using `char`. Example: `'A'`.
3. **Floating-point**: Declared using `float`. Example: `3.14`.
4. **Double**: Declared using `double`. Example: `123.456`.

Each variable is assigned a value of its respective data type, and then printed using `printf()` function with appropriate format specifiers `%d`, `%c`, `%f`, and `%lf` to display their values.

**Data Types Sizes in C**:

This program provides a comprehensive overview of the sizes of primary data types in C language. It declares variables of various data types and prints their sizes in bytes using the `sizeof` operator.

```c
#include<stdio.h>

int main()
{

    int in;
    short int si;
    long int li;
    long long int lli;
    signed short int ssi;
    unsigned short int usi;
    unsigned int uin;

    char ch;
    signed char sch;
    unsigned char uch;

    float fl;
    double dl;


    long double ldl;
    printf("\n Data Type\t\tSize.");
    printf("\n =========\t\t=====");
    printf("\n int occupies..........%d bytes.",sizeof(in));
    printf("\n unsigned int occupies.%d bytes.",sizeof(uin));
    printf("\n Short int occupies....%d bytes.",sizeof(si));
    printf("\n Long int occupies.....%d bytes.",sizeof(li));
    printf("\n Long Long int ........%d bytes.",sizeof(lli));
    printf("\n signed short int .....%d bytes.",sizeof(ssi));
    printf("\n unsigned short int....%d bytes.",sizeof(usi));
    printf("\n char occupies.........%d bytes.",sizeof(ch));
    printf("\n signed char ..........%d bytes.",sizeof(sch));
    printf("\n unsigned char ........%d bytes.",sizeof(uch));
    printf("\n float occupies........%d bytes.",sizeof(fl));
    printf("\n double occupies.......%d bytes.",sizeof(dl));
    printf("\n long double occupies..%d bytes.\n",sizeof(ldl));

    return 0;

}
```

## Increment and Decrement Operators in C: Explained

The increment (++) and decrement (--) operators in C are unary operators used to increase or decrease the value of a variable by one, respectively. They are commonly used in loops and other programming constructs to modify variables.

1. **Increment Operator (++)**: Increases the value of a variable by one. It can be used as a prefix (++x) or postfix (x++). When used as a prefix, the value is incremented before the expression is evaluated. When used as a postfix, the value is incremented after the expression is evaluated.

2. **Decrement Operator (--)**: Decreases the value of a variable by one. Similar to the increment operator, it can be used as a prefix (--x) or postfix (x--), with the same behavior regarding evaluation timing.

These operators are particularly useful for concise and efficient code, especially in loops where you need to increment or decrement a counter variable. However, it's essential to understand their usage to avoid potential pitfalls, such as unintended side effects in complex expressions.

**Different types of Increment and Decrement Operators in C**:

In C programming, there are two main types of increment and decrement operators:

1. **Prefix Increment/Decrement**: These operators are placed before the variable (++x, --x). In prefix increment, the value is first incremented or decremented, and then the result is used in the expression where it's applied.
2. **Postfix Increment/Decrement**: These operators are placed after the variable (x++, x--). In postfix increment, the value is first used in the expression where it's applied, and then it's incremented or decremented.

These operators are unary operators and are commonly used to modify the value of a variable by adding or subtracting one. They are frequently used in loop constructs like for and while loops to increment or decrement loop counters.

**Prefix Increment/Decrement and Postfix Increment/Decrement**:

Prefix and postfix increment/decrement operators have a crucial difference in their behavior:

1. **Prefix Increment/Decrement**: These operators (++x, --x) increment or decrement the variable before its value is used in the expression. In other words, the variable is first incremented or decremented, and then its updated value is used.

    ```c
    #include<stdio.h>

    int main() {
        int x = 5;
        printf("Prefix Increment Example:\n");
        printf("Original value of x: %d\n", x);
        printf("Incrementing x: %d\n", ++x); // Incrementing x before its value is used
        printf("Updated value of x: %d\n", x);
        
        int y = 10;
        printf("\nPrefix Decrement Example:\n");
        printf("Original value of y: %d\n", y);
        printf("Decrementing y: %d\n", --y); // Decrementing y before its value is used
        printf("Updated value of y: %d\n", y);

        return 0;
    }
    ```

2. **Postfix Increment/Decrement**: These operators (x++, x--) increment or decrement the variable after its value is used in the expression. The variable's current value is first used, and then it is incremented or decremented.

*Here are example programs for each*:

    ```c

        #include<stdio.h>

        int main() {

        int x = 5;
        printf("Postfix Increment Example:\n");
        printf("Original value of x: %d\n", x);
        printf("Incrementing x: %d\n", x++); // Using x's value and then incrementing it
        printf("Updated value of x: %d\n", x);

        int y = 10;
        printf("\nPostfix Decrement Example:\n");
        printf("Original value of y: %d\n", y);
        printf("Decrementing y: %d\n", y--); // Using y's value and then decrementing it
        printf("Updated value of y: %d\n", y);

        return 0; 
        } 
        ```

> [**Go To Lab-0005-Input-Output-Functions**](Lab-0005-Input-Output-Functions.md)
>
> [***Back To C Programming Menu***](../../courseMenu.md#c-programming-course-menu)
