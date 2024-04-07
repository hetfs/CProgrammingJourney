# Control Statements and Conditions in C Programming

## Introduction

In C programming, effective decision-making is vital for directing program flow. By testing variables, programs can determine which tasks to perform. For instance, if X is greater than Y, execute task 1; otherwise, perform task 2. C offers various tests, with the if-else construct being the simplest. However, more complex conditions may require nested if-else statements. Alternatively, the switch construct is suitable when tasks need selection based on variable values.

## Control Statements Overview

**Selection Statements (Decision Control Structure):**

- if
- if else
- nested if else
- if-else-if

**Types of Control Statements:**

1. **if Statement:**
   - Syntax:

     ```c
     if (condition) {
         // Code to execute if condition is true
     }
     ```

   - Example:

     ```c
     int x = 10;
     if (x > 5) {
         printf("x is greater than 5\n");
     }
     ```

2. **if-else Statement:**
   - Syntax:

     ```c
     if (condition) {
         // Code to execute if condition is true
     } else {
         // Code to execute if condition is false
     }
     ```

   - Example:

     ```c
     int x = 3;
     if (x % 2 == 0) {
         printf("x is even\n");
     } else {
         printf("x is odd\n");
     }
     ```

3. **Nested if-else Statement:**
   - Syntax:

     ```c
     if (condition1) {
         // Code to execute if condition1 is true
         if (condition2) {
             // Code to execute if both condition1 and condition2 are true
         } else {
             // Code to execute if condition1 is true but condition2 is false
         }
     } else {
         // Code to execute if condition1 is false
     }
     ```

   - Example:

     ```c
     int x = 10;
     if (x > 0) {
         if (x < 20) {
             printf("x is between 0 and 20\n");
         } else {
             printf("x is greater than or equal to 20\n");
         }
     } else {
         printf("x is less than or equal to 0\n");
     }
     ```

4. **if-else-if Statement:**
   - Syntax:

     ```c
     if (condition1) {
         // Code to execute if condition1 is true
     } else if (condition2) {
         // Code to execute if condition1 is false but condition2 is true
     } else {
         // Code to execute if both condition1 and condition2 are false
     }
     ```

   - Example:

     ```c
     int x = 15;
     if (x > 10) {
         printf("x is greater than 10\n");
     } else if (x == 10) {
         printf("x is equal to 10\n");
     } else {
         printf("x is less than 10\n");
     }
     ```

## What is Switch Case in C

In C programming, the switch case statement is a control flow statement used to select one choice among multiple options based on the value of a given expression. It provides an efficient way to write code when there are multiple conditions to be tested against a single variable. The switch statement evaluates the expression once and then compares the resulting value to the values of the case labels. If a match is found, the corresponding block of code is executed until a break statement is encountered or until the end of the switch block. If no matching case is found, the default case (if provided) is executed, or the switch block exits. Switch case statements improve code readability and maintainability, especially when there are multiple options to consider.

## Syntax of Switch Case in C

The syntax of a switch case statement in C is as follows:

```c
switch(expression) {
    case constant1:
        // statements to be executed if expression matches constant1
        break;
    case constant2:
        // statements to be executed if expression matches constant2
        break;
    // additional case labels as needed
    default:
        // statements to be executed if expression does not match any constant
}
```

- The `switch` keyword is followed by an expression inside parentheses.
- Inside the switch block, each `case` label represents a constant value that the expression is compared against.
- If the expression matches a `case` label, the corresponding statements are executed until a `break` statement is encountered, which exits the switch block.
- If no `case` label matches the expression, the `default` case (if provided) is executed.
- The `default` case is optional and is executed when none of the `case` labels match the expression.

**Common Programming Errors:**

1. Lack of "then" in the if statement.
2. Missing parentheses around conditions in if statements.
3. Incorrect usage of semicolons after the else keyword.
4. Using a single equal sign (=) for comparison instead of the double equal sign (==).
5. Failure to enclose the integer expression following switch in parentheses.

## Go to Lab to Solved Problems

**Drill Note**:
> Regular practice is essential for mastering programming concepts. Start with simple exercises and progress to more complex tasks. Without consistent practice, programming skills may deteriorate over time.
