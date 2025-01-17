
# Coding Styles and Formatting

Ensuring a computer program's readability is essential for both the programmer and others who may interact with the code. Besides debugging and testing, readability contributes significantly to code quality. Adopting a disciplined coding style enhances readability, simplifies code maintenance, and boosts correctness. The Kernighan and Ritchie (K&R) style, outlined in "The C Programming Language," provides a solid model for achieving this goal. Key principles of this style include consistent indentation, meaningful variable names, clear commenting, and concise functions. By adhering to such guidelines, programmers can create code that is easier to understand, modify, and verify for correctness

1. **Names:** Names should be carefully chosen to reflect their purpose and context within the system. Meaningful names improve code readability and maintainability.
2. **Indentation and Spacing:** Use tabs for indentation, spaces for separation, and maintain consistent spacing for clarity.
3. **Comments:** Use sparingly to document important sections; let the code speak for itself where possible.
4. **Function Declarations:** Declare all relevant information on one line; fold long lines appropriately.
5. **Loops, Loop Tests, and Parentheses:** Prefer `while` or `for` loops over `do...while`; use parentheses for clarity and to avoid unexpected behavior.
6. **Data Types and Typedef:** Use `typedef` for defining new types, especially for structures.
7. **Global Declarations:** Declare global variables at the top of source files, with comments for clarity.
8. **Enum and Constants:** Use `enum` for integer constants, maintain naming conventions for clarity.
9. **Static Objects:** Utilize `static` for variables and functions when appropriate to control visibility.
10. **Error Checking:** Check return values from system calls and handle errors appropriately.
11. **Avoiding Casts:** Minimize casts to prevent potential errors and improve code clarity.
12. **Macros:** Use caution with macro functions due to potential side effects and prefer functions for better maintainability.
13. **Idioms:** Learn and use common programming patterns (idioms) for clarity and consistency.

## Writing Clean and Readable Code Example

1. **Meaningful Naming**:
   - Use descriptive names with underscores for multi-word variables and functions.
   - Avoid single-character names unless for loop iteration variables.
   - Avoid camelCase, use underscores for multi-word variables.

   ```c
   int max_value;
   const int MAX_SIZE = 100;

   // Good example: Descriptive variable name
   int hot_water_temperature;  

   // Bad example: Avoid camelCase
   int hotWaterTemperature;

   void calculate_sum() { ... }  // Descriptive function name
   ```

2. **Indentation and Spacing:**
   - Use tabs for indentation and spaces for separation, maintaining consistent spacing for clarity.
   - Indent code blocks with 3 or 4 spaces for clarity. Utilize editors like Emacs or Vi for assistance.

     ```c
     // Good example:
     for (int i = 0; i < n; i++) {
         // code here
     }
     // Bad example:
     for(int i=0; i<n; i++) {
         // code here
     }
     ```

3. **Comments:**
   - Use sparingly to document important sections; prefer self-explanatory code where possible.
   - Include comments to explain the intent of code blocks, function usage, and variable declarations.

     ```c
     // Good example:
     // Calculate the sum of two numbers
     int sum = num1 + num2;

     // Bad example:
     // Add num1 and num2 and store the result in sum
     int sum = num1 + num2;

     // Calculate the average of given values
      float calculate_average(int num1, int num2) {
         // Function body
      }
     ```

4. **Function:**
   - Declare all relevant information on one line; fold long lines appropriately.
   - Avoid code duplication by using appropriate function calls.
   - Annotate helper functions with static and unmodified parameters with const.
   - Provide comments to describe the intent of code blocks and variable usage.

     ```c
     // Good example:
     int calculate_sum(int num1, int num2);

     // Bad example:
     int
     calculate_sum(int num1, int num2);

     // Calculate the average of given values
      float calculate_average(int num1, int num2) {
         // Function body
      }
     ```

5. **Loops, Loop Tests, and Parentheses:**
   - Prefer `while` or `for` loops over `do...while`; use parentheses for clarity.

     ```c
     // Good example:
     while (condition) {
         // code here
     }
     // Bad example:
     do {
         // code here
     } while (condition);
     ```

6. **Data Types and Typedef:**
   - Use `typedef` for defining new types, especially for structures.

     ```c
     // Good example:
     typedef struct {
         int id;
         char name[20];
     } Person;
     // Bad example:
     struct Person {
         int id;
         char name[20];
     };
     ```

7. **Global Declarations:**
   - Declare global variables at the top of source files with comments for clarity.

     ```c
     // Good example:
     // Global variable representing maximum length
     #define MAX_LEN 100
     // Bad example:
     int max_len = 100;
     ```

8. **Enum and Constants:**
   - Use `enum` for integer constants; maintain naming conventions for clarity.

     ```c
     // Good example:
     enum { MONDAY, TUESDAY, WEDNESDAY };
     // Bad example:
     #define MONDAY 1
     ```

9. **Static Objects:**
   - Utilize `static` for variables and functions when appropriate to control visibility.

     ```c
     // Good example:
     static int count = 0;
     // Bad example:
     int count = 0;
     ```

10. **Error Checking:**
    - Check return values from system calls and handle errors appropriately.

      ```c
      // Good example:
      if (file_ptr == NULL) {
          perror("Error opening file");
          exit(EXIT_FAILURE);
      }
      // Bad example:
      // No error checking
      ```

11. **Avoiding Casts:**
    - Minimize casts to prevent potential errors and improve code clarity.

      ```c
      // Good example:
      int result = (int) some_double_value;
      // Bad example:
      int result = (int)some_double_value;
      ```

12. **Macros:**
    - Use caution with macro functions due to potential side effects; prefer functions for better maintainability.

      ```c
      // Good example:
      #define SQUARE(x) ((x) * (x))
      // Bad example:
      #define SQUARE(x) x * x
      ```

13. **Idioms:**
    - Learn and use common programming patterns for clarity and consistency.

      ```c
      // Good example:
      // Swap two variables
      void swap(int *a, int *b) {
          int temp = *a;
          *a = *b;
          *b = temp;
      }
      // Bad example:
      // No swap function, inline swapping
      int temp = a;
      a = b;
      b = temp;
      ```

14. **Consistent Variable Declaration**:

      - Declare variables of the same type on the same line if possible.

      ```c
      int x, y, z;  // Declaring multiple variables of the same type on one line
      ```

15. **Blank Lines**:

      - Leave one blank line between variable declarations and the first line of code in a function.

      ```c
      int main() {
      int x = 0;

      // Blank line here
      statement;
      }
      ```

16. **Consistent Style**:

      - Use consistent styles, such as placing curly brackets on the same line as conditionals or functions.

      ```c
      if (condition) {
         statement;
      }
      ```

17. **Constants**:

      - Define constants instead of hardcoding values. Constants should be in uppercase.
      - Define constants using `#define` or `const` for values that won't change.

         ```c
         #define MAX_LENGTH 100  //#define MAX_LENGTH 100 and NOT #define max_length 100
         const float PI = 3.1415;
         ```

18. **Whitespace and Operators**:

      - Use whitespace between operators for clarity.
      - Use one blank space between operators and after commas.

         ```c
         int x = 5 + 7;
         int result = x + y;
         int y = func(a, b);
         ```

19. **Braces and Conditionals**:

      - Always use braces for conditionals and loops to avoid ambiguity.

         ```c
         if (condition) {
            // Code block
         }
         
         for (int i = 0; i < 10; i++) {
            // Loop body
         }
         ```

20. **Pointer Access**:

      - When accessing structure members via a pointer, use the arrow operator without spaces.
      - Access structure members using `->` rather than `(*ptr).member`.

      ```c
      struct Point {
            int x;
            int y;
      };

      struct Point p;
      p.x = 10;

      p->member;  // Correct
      ```

21. **Line Length**:

      - Avoid lines exceeding 80 characters for readability, Limit source lines to 80 characters for readability.

      ```c
      long_variable_name = another_long_variable_name + some_value;
      ```

22. **Code Duplication**:

      - Refactor code to avoid duplication, promoting maintainability.

23. **Documentation**:

      - Ensure understanding by documenting complex code sections.

24. **Code Organization**:
Organize code following a universal convention, including proper inclusion of headers, defines, data types, globals, prototypes, and main function placement.

25. **Miscellaneous**:
Utilize assertions for error handling and clarity.
Use appropriate return statement placements and loop controls for readability and logic clarity.

Remember to adhere to these guidelines for code clarity and maintainability.

## The best Naming Conventions

In C Naming Conventions promote clarity and consistency, enhancing code readability

1. **Use Descriptive Names**:
   - Choose names that clearly describe the purpose or functionality of variables, constants, and functions.

   ```c
   int totalStudents;  // Descriptive name for a variable
   const float PI_VALUE = 3.14159;  // Descriptive name for a constant
   void calculateAverage() { ... }  // Descriptive name for a function
   ```

2. **Follow CamelCase or Underscore Convention**:
   - Use CamelCase for functions and types, and underscores for variables and constants.

   ```c
   int numberOfStudents;  // Underscore convention for variables
   void calculateAverageGrade() { ... }  // CamelCase for functions
   #define MAX_SIZE 100  // Underscore convention for constants
   ```

3. **Avoid Single-letter Names**:
   - Except for loop variables, avoid single-letter names to enhance code readability.

   ```c
   int studentCount;  // Prefer descriptive names over single letters
   for (int i = 0; i < MAX_SIZE; i++) { ... }  // Loop variable 'i' is acceptable
   ```

4. **Use Consistent Naming Styles**:
   - Maintain consistent naming styles throughout the codebase for uniformity.

   ```c
   int firstNumber;
   float averageTemperature;
   void computeSum() { ... }
   ```

5. **Be Mindful of Abbreviations**:
   - Use clear and widely-understood abbreviations if necessary, but prioritize readability.

   ```c
   int numStudents;  // 'num' is a commonly-understood abbreviation for 'number'
   const int MAX_LEN = 100;  // 'LEN' abbreviates 'length'
   ```

## C Code Styles and Formatting Guidelines

Explore various C code styles and their corresponding formatting guidelines to ensure consistency and readability:

1. **K&R Style**: Named after Kernighan and Ritchie, this style places braces on the same line as the control statement and uses tabs for indentation. Example:

    ```c
    int main() {
        // Code here
    }
    ```

2. **Allman Style**: Also known as BSD style, it positions the opening brace on a new line and utilizes spaces for indentation. Example:

    ```c
    int main()
    {
        // Code here
    }
    ```

3. **GNU Style**: Similar to K&R, but with variations like spaces around keywords (`if`, `while`, etc.) and aligned braces with the control statement. Example:

    ```c
    int main ()
    {
        // Code here
    }
    ```

4. **Whitesmiths Style**: Uncommon, this style places braces on a new line with the same indentation as the control statement. Example:

    ```c
    int main()
       {
           // Code here
       }
    ```

Select a style that aligns with your team's preferences or project guidelines to maintain code consistency and readability.

## Formatting Tools for C Code

Various formatting tools are available to streamline code formatting, some of which come bundled with specific C compilers. Clang users can leverage [clang-format](https://clang.llvm.org/docs/ClangFormatStyleOptions.html), while GCC users have the option to utilize `indent`. Additionally, standalone formatters like `astyle` offer additional flexibility.

```bash
sudo apt install indent  # Install indent
```

**Indentation Styles**:

1. **K&R Style**:
   - Use `-kr` option with `indent` for K&R style indentation.

     ```bash
     indent -kr -ts4 main.c  # Tab indentation
     indent -kr -ts1 main.c  # Space indentation
     ```

2. **GNU Style**:
   - Employ `-gnu` option with `indent` for GNU style indentation.

     ```bash
     indent -gnu -ts1 main.c  # Two-space indentation
     ```

3. **Linux Style**:
   - This style, used in the Linux kernel, is a variant of K&R with minor differences. It supports both tab and space indentation and omits spaces in castings.

     ```bash
     indent -linux main.c  # Tab indentation
     ```

**Note**:
> Linux style, commonly used in the Linux kernel, allows for both tab and space indentation, with slight variations compared to K&R.

These tools help maintain consistent code formatting and adhere to established style guidelines, enhancing code readability and maintainability.

1. [ClangFormat — Clang 19.0.0git documentation](https://clang.llvm.org/docs/ClangFormat.html)
2. [Stack Overflow - "inconsistent use of tabs and spaces in indentation"](https://stackoverflow.com/questions/5685406/inconsistent-use-of-tabs-and-spaces-in-indentation)
3. [github C style and coding rules](https://github.com/MaJerle/c-code-style)
