# Questions about C Control Statement Looping

## Theori

1. What is the purpose of using a loop in programming?
2. Describe the syntax of the "for" loop in C.
3. How does the "while" loop differ from the "do-while" loop in C?
4. Explain the concept of an infinite loop. How can it be avoided?
5. What is the significance of the loop control variable in a "for" loop?
6. Discuss the role of the loop condition in determining the termination of a loop.
7. How can you terminate a loop prematurely using a control statement?
8. Describe the difference between a pre-test loop and a post-test loop, providing examples of each in C.
9. Discuss the potential pitfalls of using nested loops in C programming.
10. Explain the concept of loop optimization and provide examples of techniques used to optimize loops in C.

## Here are the answers to thes questions

1. **Purpose of Using a Loop in Programming**:
   Loops are used in programming to execute a block of code repeatedly based on a condition, thus reducing redundancy and making the code more efficient

2. **Syntax of the "for" Loop in C**:

    ```c
    for (initialization; condition; increment/decrement) {
        // code block to be executed
    }

    ```

    The "initialization" is executed once at the beginning. The "condition" is evaluated before each iteration. The "increment/decrement" is executed at the end of each iteration

3. **Difference Between "while" and "do-while" Loops in C**:

   - A "while" loop checks the condition before the execution of the loop statements, so it may not execute at all if the condition is initially false.
   - In contrast, a "do-while" loop executes the statements first and then checks the condition, ensuring that the loop body executes at least once

4. **Concept of an Infinite Loop**:

   An infinite loop continuously executes without ever stopping. It can be avoided by ensuring that the loop's termination condition is reachable or by using control statements like "break" or "return" within the loop to exit

5. **Significance of the Loop Control Variable in a "for" Loop**:

   The loop control variable in a "for" loop initializes the loop, updates it with each iteration, and acts as a condition for loop termination, controlling the flow of the loop

6. **Role of the Loop Condition in Determining Loop Termination**:

   The loop condition evaluates to either true or false, determining whether the loop should continue executing or terminate. If the condition evaluates to false, the loop terminates

7. **Terminating a Loop Prematurely Using a Control Statement**:

   You can terminate a loop prematurely using a "break" statement. When encountered, "break" exits the loop immediately, regardless of the loop condition

8. **Difference Between Pre-test and Post-test Loops**:

   - Pre-test loops, like "while" and "for" loops, evaluate the condition before executing the loop body.
   - Post-test loops, such as the "do-while" loop, execute the loop body at least once before evaluating the condition

9. **Potential Pitfalls of Using Nested Loops**:

   Nested loops can lead to decreased readability, increased complexity, and potential performance issues if not implemented carefully. They may also increase the risk of logical errors

10. **Concept of Loop Optimization and Techniques**:

   Loop optimization aims to improve the efficiency of loops by minimizing execution time and memory usage. Techniques include loop unrolling, loop fusion, loop interchange, and loop-invariant code motion

## Lab 0004 Exercise (WAP- Write a Program)

1. Print the numbers in reverse order from N to 1
    N………….5, 4, 3, 2, 1

    Algorithm to print numbers in reverse order from N to 1:

    1. Start.
    2. Input the value of N.
    3. Initialize a loop variable, let's call it "num", to N.
    4. Run a loop from num to 1:

    - Print the value of num.
    - Decrement num by 1.

    1. Repeat step 4 until num becomes 1.
    2. End.

    simple C code implementation for printing numbers in reverse order from N to 1:

    ```c
    #include <stdio.h>

    int main() {
    int N, num;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Initialize num to N
    num = N;

    // Run a loop from num to 1
    while (num >= 1) {
        // Print the value of num
        printf("%d ", num);

        // Decrement num by 1
        num--;
    }

    return 0;
    }

    ```

    This code prompts the user to input the value of N, then it initializes a loop variable `num` to N and runs a loop from `num` to 1, printing the value of `num` in each iteration and decrementing `num` by 1 until it reaches 1.

2. print the Factorial of  number N

    Algorithm for printing the Fibonacci series from 1 to N:

    ```sql
    1. Start
    2. Initialize variables `first` and `second` to 1 and 1, respectively.
    3. Prompt the user to input the value of N.
    4. Read the value of N from the user.
    5. Print the first two terms of the Fibonacci series, i.e., 1 and 1.
    6. Loop from 3 to N:
    a. Compute the next term of the series by adding the values of `first` and `second`.
    b. Print the value of the next term.
    c. Update the values of `first` and `second` with the previous terms values.
    7. End
    ```

    This algorithm initializes the first two terms of the Fibonacci series to 1 and 1, respectively. Then, it iterates through a loop to compute and print the subsequent terms until it reaches the desired count N.

    ```c
    # include <stdio.h>

    // To print the Fibonacci series from 1 to N in C

    int main() {
        int num, first = 0, second = 1, next;

        // Input the value of N
        printf("Enter the value of N: ");
        scanf("%d", &num);

        printf("Fibonacci Series: ");

        // Print the first two terms
        printf("%d %d ", first, second);

        // Generate and print the rest of the series
        for (int i = 3; i <= num; ++i) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }

        return 0;
    }

    ```

    This code prompts the user to input the value of N, then it initializes variables `first` and `second` to 0 and 1, respectively. It prints these initial values and then generates the rest of the Fibonacci series using a `for` loop, printing each term until it reaches N.

3. /*WAP to print the following
    1
    12
    123
    1234
    12345                         up to N rows*/

    Algorithm to Print Numbers in Pattern:

    ```sql {"id":"01HTFZJ7M6D5FTMZY3SZEDNRTV"}
    1. Start
    2. Prompt the user to enter the number of rows (N)
    3. Read the value of N from the user
    4. Initialize variables i and j for looping
    5. Start the outer loop from i = 1 to N
    6. Start the inner loop from j = 1 to i
    7.        Print the value of j
    8. Move to the next line after printing each row
    9. End the inner loop
    10. End the outer loop
    11. End

    ```

    This algorithm outlines the steps to print numbers in the given pattern, where each row contains numbers from 1 to the row number. It uses nested loops to iterate through the rows and columns to print the desired pattern.

    ```c {"id":"01HTFZJ7M6D5FTMZY3T1WPC1Y3"}
    #include <stdio.h>

    int main() {
        int n, i, j;
        printf("Enter the number of Rows: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++)
                printf("%d", j);
            printf("\n");
        }
        return 0;
    }

    ```

    This code prompts the user to enter the number of rows (`n`). Then, it iterates from 1 to `n`, printing each number from 1 to the current row number in increasing order within nested loops, creating the desired pattern. Finally, it moves to a new line after printing each row.

4. C program to check if the given sequence of numbers is in ascending order or not,
    with a sentinel     value of -1:

    Algorithm to determine if the sequence is in ascending order or not.

    ```sql
    1. Initialize variables: `prev` to store the previous number, `n` to store the current number, `flag` to track if the sequence is in ascending order, and `i` for iteration.
    2. Prompt the user to enter the first number (`n`).
    3. Set `prev` to the first number entered.
    4. Start a loop:

    - Prompt the user to enter the next number (`n`).
    - Check if `n` is not equal to the sentinel value `-1`.
    - If `n` is less than `prev` and not equal to `-1`, set `flag` to false and break out of the loop.
    - Update `prev` to `n`.

    1. After exiting the loop, check the value of `flag`.

    - If `flag` is false, print "Not in ascending order".
    - If `flag` is true, print "In ascending order".
    ```

    This algorithm checks each entered number against the previous one to determine if the sequence is in ascending order or not, using `-1` as the sentinel value to stop entering numbers.

    ```c
    #include <stdio.h>

    int main() {
        // Declare variables
        int prev, n, i = 1;
        enum {false, true};
        int flag = true;

        // Prompt user to enter the first number
        printf("Enter number 1: ");
        scanf("%d", &n);
        prev = n;

        // Continue getting numbers until sentinel value -1 is entered
        while (n != -1) {
            printf("Enter number %d: ", ++i);
            scanf("%d", &n);

            // Check if the current number is less than the previous one
            if (n < prev && n != -1) {
                flag = false;
                break;
            }

            prev = n;  // Update previous number
        }

        // Check the flag to determine the order
        if (flag == false)
            printf("Not in ascending order\n");
        else
            printf("In ascending order\n");

        return 0;
    }

    ```

    This program prompts the user to enter numbers until -1 is entered as the sentinel value. It compares each number with the previous one and sets a flag to false if any number violates the ascending order. Finally, it prints whether the sequence is in ascending order or not.

5. print the sum of 9+99+999+............... n terms.

```sql
1. Initialize variables `term` and `sum` as `long int`, and variables `n` and `cnt` as `int`.
2. Prompt the user to enter the value of `n`.
3. Read the value of `n` from the user.
4. Initialize the loop counter `cnt` to 1 and `term` to 9.
5. Start a loop that iterates from `cnt = 1` to `n`.
   - Print the current value of `term`.
   - Add the current value of `term` to `sum`.
   - Update `term` by multiplying it by 10 and adding 9 to it.

6. After the loop ends, print the total `sum` of the series.
```

```c {"id":"01HTFZJ7M8GF8TA7GDJM4XT3CR"}
#include <stdio.h>

int main() {
    long int term, sum = 0;
    int n, cnt;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (cnt = 1, term = 9; cnt <= n; cnt++) {
        printf("%ld\n", term);
        sum += term;
        term = (term * 10) + 9;
    }

    printf("Sum of the series: %ld", sum);

    return 0;
}

```

This program prompts the user to input the value of 'n', which determines how many terms of the series to sum. It then iterates from 1 to 'n', printing each term (which is a sequence of 9's) and adding it to the total sum. Finally, it prints the sum of the series.

6. Program to prints the Fibonacci series up to `N` terms.

1. **Input:**

   - Prompt the user to enter the value of `N`.
   - Read the value of `N` from the user.

2. **Initialization:**

   - Initialize variables `prev` and `next` to 0 and 1, respectively.
   - Initialize a counter variable `cnt` to 1.

3. **Print Header:**

   - Print "Fibonacci series:".

4. **Fibonacci Calculation Loop:**

   - While `cnt` is less than or equal to `N`, repeat the following steps:
      - Print the value of `next`.
      - Calculate the sum of `prev` and `next`, storing it in `sum`.
      - Update `prev` to the value of `next`.
      - Update `next` to the value of `sum`.
      - Increment `cnt` by 1.

5. **Output:**

   - End of the program.

```c {"id":"01HTFZJ7M9DYP6XWVGZS2K9Q0M"}
#include <stdio.h>

int main() {
    int prev = 0, next = 1, cnt = 1, sum, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    while(cnt <= n) {
        printf("%d, ", next);
        sum = prev + next;
        prev = next;
        next = sum;
        cnt++;
    }

    return 0;
}

```

This program prompts the user to input a value `N`, then prints the Fibonacci series up to `N` terms. It initializes `prev` and `next` as 0 and 1, respectively, and iteratively calculates the next Fibonacci number by adding the previous two numbers. The loop continues until the count reaches `N`.

7. Pascal's Triangle Program

1. **Initialize Variables**:

   - Declare variables `i`, `j`, `n`, and `b`, where `n` represents the number of rows, `i` and `j` are loop counters, and `b` represents the preceding number in Pascal's triangle.

2. **Input**:

   - Prompt the user to enter the number of rows `n`.
   - Read the value of `n` from the user.

3. **Generate Pascal's Triangle**:

   - Start a loop from `i = 0` to `n-1`.
      - Set `b` to `1` at the beginning of each row.
      - Start an inner loop from `j = 0` to `i`.
         - If `i` is `0` or `j` is `0`, print `b`.
         - Otherwise, calculate the value of `b` using the formula `b = b * (i - j + 1) / j`.
         - Print the value of `b` with proper formatting (`%3d` to provide each number a space of 3 characters).

      - Move to the next line after printing each row.

4. **Output**:

   - The Pascal's triangle up to `n` rows is printed.

This algorithm outlines the steps to generate Pascal's triangle up to a specified number of rows using nested loops and appropriate calculations.

```c {"id":"01HTFZJ7MABYY8GA54ZM67S4RH"}
#include <stdio.h>

int main() {
    int i, j, n, b;  // b = preceding number
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        b = 1;
        for (j = 0; j <= i; j++) {
            if (i == 0 || j == 0)
                printf("%3d", b);  // 3d is used to provide each number a space of 3 characters
            else {
                b = b * (i - j + 1) / j;
                printf("%3d", b);
            }
        }
        printf("\n");
    }
    return 0;
}

```

This program prints Pascal's triangle up to the specified number of rows. Each number in the triangle is obtained by adding the two numbers directly above it in the previous row. The program iterates through each row and each element in the row, calculating the values based on the formula for Pascal's triangle. It then prints the triangle with proper formatting to display the pattern correctly.

8. program takes a decimal number as input and converts it into its binary equivalent

1. Start the program.
2. Declare integer variables `n`, `i`, `a`, and `r`.
3. Print "Enter the number: ".
4. Read the input decimal number `n`.
5. Initialize a loop from `i = 15` to `0`.
6. Inside the loop:
   - Left shift `1` by `i` bits and store the result in `a`.
   - Perform bitwise AND operation between `n` and `a` and store the result in `r`.
   - If `r` is equal to `0`, print "0", else print "1".

7. Repeat step 6 for each bit position from the most significant bit to the least significant bit.
8. End the program.

```c {"id":"01HTFZJ7MABYY8GA54ZPQJ201A"}
#include <stdio.h>

int main() {
    int n, i, a, r;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 15; i >= 0; i--) {
        a = 1 << i;
        r = n & a;
        if (r == 0)
            printf("0");
        else
            printf("1");
    }

    return 0;
}

```

This program takes a decimal number as input and converts it into its binary equivalent. It does so by iterating through each bit (from the most significant bit to the least significant bit) of a 16-bit integer and checking whether that bit is set in the input number. If it is set, it prints '1', otherwise '0', thus printing the binary representation of the decimal number.

9. program computes the natural logarithm of a given number using a Taylor series approximation
with 7   terms.

1. **Start:** Begin the algorithm.
2. **Input:** Prompt the user to enter the value of `x`.
3. **Initialize Variables:**
   - Declare variables `x`, `i`, and `result`.
   - Set `result` to 0.

4. **Read Input:**
   - Read the value of `x` from the user.

5. **Calculate Logarithm:**
   - Iterate `i` from 1 to 7.
   - If `i` is 1:
      - Calculate the term `pow((x - 1.0) / x, i)` and add it to `result`.

   - Else:
      - Calculate the term `(1.0 / 2) * pow((x - 1.0) / x, i)` and add it to `result`.

6. **Output:**
   - Print the computed natural logarithm using the formula `Log(x) = result`.

7. **End:** End the algorithm.

```c {"id":"01HTFZJ7MBCH5T5MJJWQF9KHEB"}
#include <stdio.h>
#include <math.h>

int main() {
    int x, i;
    float result = 0;

    printf("\nEnter the value of x: ");
    scanf("%d", &x);

    for (i = 1; i <= 7; i++) {
        if (i == 1)
            result = result + pow((x - 1.0) / x, i);
        else
            result = result + (1.0 / 2) * pow((x - 1.0) / x, i);
    }

    printf("Log(%d) = %f", x, result);

    return 0;
}

```

This program computes the natural logarithm of a given number using a Taylor series approximation with 7 terms. It prompts the user to enter the value of `x`, then iterates through the series, accumulating the result. Finally, it prints the natural logarithm of `x`. The accuracy of the result increases with more terms in the series. Adjust the loop termination condition and the number of terms to improve accuracy as needed.
