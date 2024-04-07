# Lab-0003-Exercise

If an expression c=e1&&e2&&e3, then if e1 is false, e2 and e3________ be evaluated.

1. The logical operator == checks for the _________ of the two values.
2. All characters are internally represented as _______.
3. The statement
   “ if (ch>= ‘a’ && ch<= ‘z’) returns (‘A’ + ch- ‘a’)”
   will return ______ for a given character between ‘a’ and ‘z’.
4. In the printf statement between the % and the conversion character
there may be an h if the integer to be printed as _______.
5. The data type double is actually double precision _______.
6. Operators *, /,% have _________ precedence.
7. Operators &, ^, = = have _________ precedence.
8. A __________ converts thew assembly language programs to machine code.
9. Braces { and } are used to group the declarations and statements together into a ______ statement.
10. The operator size of returns size of a data type in a  ________.
11. Given that a is unsigned integer variablewhose value is 0 X 6db7, the
    expression.
    b=a<<6;
    will assign b the value_________
12. The expression  11%3 will evaluate to ________.
13. ? : is a ______ operator.
14. In a C expression with mixed data type containing variables of the float
    and double the result is of the type _______.
15. The unary operator ~ is used for performing the ________ on the variable.
16. The following C expression
    1+2*3-5
    evaluates the expression to ____

## Anwsers

1. If an expression `c = e1 && e2 && e3`, then if `e1` is false, `e2` and `e3` **will not** be evaluated.

2. The logical operator `==` checks for the **equality** of the two values.

3. All characters are internally represented as **ASCII values**.

4. The statement `"if (ch >= 'a' && ch <= 'z') returns ('A' + ch - 'a')"` will return **the uppercase equivalent** for a given character between 'a' and 'z'.

5. In the `printf` statement between the `%` and the conversion character, there may be an `h` if the integer to be printed is of type **`short int`**.

6. The data type double is actually double precision **floating-point**.

7. Operators `*`, `/`, and `%` have **higher** precedence.

8. Operators `&`, `^`, `==` have **lower** precedence.

9. A **compiler** converts assembly language programs to machine code.

10. Braces `{` and `}` are used to group the declarations and statements together into a **block** statement.

11. The operator `sizeof` returns the size of a data type in **bytes**.

12. Given that `a` is an unsigned integer variable whose value is `0x6db7`, the expression `b = a << 6;` will assign `b` the value **`0xB600`**.

13. The expression `11 % 3` will evaluate to **`2`**.

14. `? :` is a **ternary** operator.

15. In a C expression with mixed data types containing variables of `float` and `double`, the result is of the type **`double`**.

16. The unary operator `~` is used for performing the **bitwise negation** on the variable.

17. The following C expression `1 + 2 * 3 - 5` evaluates the expression to **`2`**.

## What will be the output of the following program

1. **Output Explanation**: The output will be "MatrixComputer". In the switch statement, since there's no match for the value of `i`, it goes to the default case and prints "Matrix". Then, it continues to execute the case labeled as 1, printing "Computer".

2. **Output Explanation**: In this case, `b` contains garbage while `c` is assigned the value 200. This happens because `a` is initialized with 300, and when the condition `a>=400` is checked, it becomes false, so `b` remains uninitialized while `c` gets assigned 200.

3. **Output Explanation**: There is no error. Constant expressions like `1*2+4` are acceptable in case labels.

4. **Output Explanation**: A switch statement without any case statements can still compile and execute. In this case, it will print "Hello World".

5. **Output Explanation**: The output will be "Hello" because the printf statement is common for both cases.

6. **Output Explanation**: No, switch statements cannot be used to switch on strings; they only work with integer constants or constant expressions.

7. **Output Explanation**: Yes, it's possible to test whether a value lies within a range using switch statements, but it may not be practical for larger ranges.

8. **Output Explanation**: The break statement is used to exit the switch block. The continue statement cannot be used to take control to the beginning of the switch; it's only applicable in loops.

9. **Output Explanation**: The output will be "Jokar You have lost the game:". Since there's no perfect match for the value of `card`, it executes the default case and then continues to the printf statement outside the switch block.

10. **Output Explanation**: The output will be "Gold". Even though the case label is a character constant '3', it matches the value of `prize`, which is 3.

11. **Output Explanation**: The output will be "Unix and Linux:". Each case constant expression is evaluated, and the case label that matches the value of `c` is executed.

12. **Output Explanation**: The output will be "you have passed:". The value of `k` is evaluated to 3, which matches the case label, and the corresponding statement is executed.

For the rest of the explanations, please refer to the numbered explanations provided above.

## Point out the errors, if any, in the following programs

## Refinement of Programs and Error Identification

1. **Program**:

    ```c
    float a = 12.25, b = 5.2;
    if (a = b)
        printf(“\n a and b becomes equal”);
    ```

    **Output**: No Error.

2. **Program**:

    ```c
    int a = 10, b = 15;
    if ('A' < 'a')
        printf(“\n A is smaller than a”);
    ```

    **Output**: No Error.

3. **Program**:

    ```c
    int x = 10;
    if (x >= 2) then
        printf(“Good”);
    ```

    **Output**: Error.

4. **Program**:

    ```c
    int j = 10, k = 12;
    if (k >= j)
    {
        {
            k = j;
            j = k;
        }
    }
    ```

    **Output**: No Error.

5. **Program**:

    ```c
    int a = 10, b = 15;
    if (a % 2 = b % 5)
        printf(“wonderful”);
    ```

    **Output**: Error.

6. **Program**:

    ```c
    int a, b;
    printf(“Enter two num:”);
    scanf(“%d %d”, a, b);
    if (a > b)
        printf(“a is max”);
    else
        printf(“b is max”);
    ```

    **Output**: Error.

7. **Program**:

    ```c
    int ch = 1;
    switch (ch)
    {
        case 0;
            printf(“\nClub”);
        case 1;
            printf(“\nDiamond”);
    }
    ```

    **Output**: Error.

8. **Program**:

    ```c
    int temp;
    scanf(“%d”, temp);
    switch (temp)
    {
        case (temp <= 20)
            printf(“Oh! Damn Cool”);
        case (temp > 20 && temp <= 30)
            printf(“Rainy season:”);
        case (temp > 30 && temp <= 40)
            printf(“\nWish me I am on Everest:”);
        default:
            printf(“\nLet’s Go for a Picnic:”);
    }
    ```

    **Output**: Error.

9. **Program**:

    ```c
    float a = 3.5;
    switch (a)
    ```

    **Output**: Error.

10. **Program**:

    ```c
    int a = 3, b = 4, c;
    c = b - a;
    switch (c)
    {
        case 1 || 2:
            printf(“Hello Matrix:”);
            break;
        case a || b:
            printf(“Bye Matrix“);
            break;
    }
    ```

    **Output**: Error.

## Lab 0003 Exercise (WAP- Write a Program)

1. **Program to Check Even or Odd Number:**
   Write a program to determine if a user-input number is even or odd.

2. **Program to Find Maximum of Two Numbers:**
   Create a program to find the maximum between two user-input numbers.

3. **Program to Find Maximum of Three Numbers:**
   Develop a program to determine the maximum among three user-input numbers.

4. **Program to Find Maximum of Four Numbers:**
   Implement a program to find the maximum among four user-input numbers.

5. **Program to Find Maximum of Four Numbers (Short Logic):**
   Write a program with a concise logic to find the maximum among four user-input numbers.

6. **Program to Find Second Maximum of Three Numbers:**
   Write a program to find the second maximum among three user-input numbers.

7. **Program to Check Leap Year:**
   Create a program to check if a user-input year is a leap year.

8. **Program to Calculate Student Grade:**
   Develop a program to calculate the grade of a student based on their marks as per the given criteria.

9. **Program to Compute Telephone Bill:**
   Implement a program to compute the telephone bill for a customer based on their monthly rental and usage rates.

10. **Program to Compute Employee Pension:**
    Create a program to compute the pension amount for an employee based on their age and gender.

11. **Program to Check Magic Number:**
    Write a program to determine if a user-input 3-digit number is a magic number (palindrome).

12. **Program to Check Leap Year with Logical Operators:**
    Develop a program to determine if a user-input year is a leap year using logical operators.

13. **Program to Identify Character Type:**
    Create a program to identify whether a character entered by the user is a capital letter, small case letter, digit, or special symbol.

14. **Program to Check Leap Year using Conditional Operators:**
    Implement a program to check if a user-input year is a leap year using conditional operators.
