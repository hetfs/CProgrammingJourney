# Comparison Operators

Comparing Values Using Relational Operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
Comparison operators, also known as relational operators, are used to compare two values or expressions.
These operators return a boolean value (`true` or `false`) based on whether the comparison is true or not.
They are fundamental in decision-making processes within a program.

1. **Equal to (`==`)**: Checks if two values are equal.
   
   - **Example**:
     
          ```c
          if (a == b) {
              // Code to execute if a is equal to b
          }
          ```

2. **Not equal to (`!=`)**: Checks if two values are not equal.
   
   - **Example**:
     
          ```c
          if (a != b) {
              // Code to execute if a is not equal to b
          }
          ```

3. **Less than (`<`)**: Checks if the left operand is less than the right operand.
   
   - **Example**:
     
          ```c
          if (a < b) {
              // Code to execute if a is less than b
          }
          ```

4. **Greater than (`>`)**: Checks if the left operand is greater than the right operand.
   
   - **Example**:
     
          ```c
          if (a > b) {
              // Code to execute if a is greater than b
          }
          ```

5. **Less than or equal to (`<=`)**: Checks if the left operand is less than or equal to the right operand.
   
   - **Example**:
     
          ```c
          if (a <= b) {
              // Code to execute if a is less than or equal to b
          }
          ```

6. **Greater than or equal to (`>=`)**: Checks if the left operand is greater than or equal to the right operand.
   
   - **Example**:
     
          ```c
          if (a >= b) {
              // Code to execute if a is greater than or equal to b
          }
          ```

These operators are crucial in controlling the flow of a program by making decisions based on comparisons.
They are commonly used in conditional statements (`if`, `else if`, `switch`) and loops (`while`, `for`).

### Bitwise Operators

Bitwise Operations on Integer Operands
Bitwise operations manipulate individual bits within an integer.
They are essential for low-level programming tasks and efficient data processing.
Here's an overview of the main bitwise operators and how to use them:

    **Key Bitwise Operators**

1. **Bitwise AND (`&`)**: Compares each bit of two integers. The result is `1` if both bits are `1`, otherwise `0`.
   
   - **Example**:
     
          ```c
          int result = a & b; // result has bits set to 1 where both a and b have bits set to 1
          ```

2. **Bitwise OR (`|`)**: Compares each bit of two integers. The result is `1` if at least one of the bits is `1`.
   
   - **Example**:
     
          ```c
          int result = a | b; // result has bits set to 1 where either a or b has bits set to 1
          ```

3. **Bitwise XOR (`^`)**: Compares each bit of two integers. The result is `1` if the bits are different, otherwise `0`.
   
   - **Example**:
     
          ```c
          int result = a ^ b; // result has bits set to 1 where a and b have different bits
          ```

4. **Left Shift (`<<`)**: Shifts the bits of the first operand left by the number of positions specified by the second operand. Bits shifted out on the left are discarded, and zeros are shifted in from the right.
   
   - **Example**:
     
          ```c
          int result = a << 2; // shifts the bits of a left by 2 positions
          ```

5. **Right Shift (`>>`)**: Shifts the bits of the first operand right by the number of positions specified by the second operand. For signed integers, the sign bit is shifted in from the left.
   
   - **Example**:
     
          ```c
          int result = a >> 2; // shifts the bits of a right by 2 positions
          ```
     
     **Understanding Binary Representation**

Each integer is represented in binary form, a sequence of bits (`0`s and `1`s).
Understanding binary representation is crucial for bitwise operations:

- **Example**:
  
      ```c
      int a = 5;  // Binary: 0101
      int b = 3;  // Binary: 0011
      ```

Bitwise operations are often used in low-level programming tasks such as:

- **Setting a specific bit**:
  
      ```c
      int mask = 1 << bit_position;
      int result = a | mask; // Sets the bit at bit_position
      ```

- **Clearing a specific bit**:
  
      ```c
      int mask = ~(1 << bit_position);
      int result = a & mask; // Clears the bit at bit_position
      ```

- **Toggling a specific bit**:
  
      ```c
      int mask = 1 << bit_position;
      int result = a ^ mask; // Toggles the bit at bit_position
      ```

- **Checking if a specific bit is set**:
  
      ```c
      int mask = 1 << bit_position;
      bool isSet = a & mask; // Checks if the bit at bit_position is set
      ```

Understanding and utilizing these operators allows for efficient data manipulation and control at the bit level, which is critical in performance-sensitive applications.

**Precedence and Associativity of Bitwise Operators in C**:
This is crucial for understanding and predicting the behavior of complex expressions involving multiple operators.

**Precedence of Bitwise Operators**:

Precedence defines the order in which operators are applied when evaluating an expression. In C, bitwise operators have the following precedence (from highest to lowest):

1. Bitwise NOT (`~`)
2. Bitwise AND (`&`)
3. Bitwise XOR (`^`)
4. Bitwise OR (`|`)

**Associativity of Bitwise Operators**:

Associativity determines the direction in which operators of the same precedence are processed. Bitwise operators in C generally have left-to-right associativity. This means that operators are evaluated from left to right when they appear in an expression.

Consider the following expression:

    ```c
    int result = a & b | c ^ d;
    ```

Based on the precedence and associativity rules:

1. The bitwise AND (`&`) is evaluated first.
2. Then, the bitwise XOR (`^`) is evaluated.
3. Finally, the bitwise OR (`|`) is evaluated.

*Practical Example*:

    ```c
    #include <stdio.h>
    
    int main() {
        int a = 5;  // Binary: 0101
        int b = 3;  // Binary: 0011
        int c = 12; // Binary: 1100
        int d = 10; // Binary: 1010
    
        int result = a & b | c ^ d;
        // Step by step evaluation:
        // a & b = 0101 & 0011 = 0001
        // c ^ d = 1100 ^ 1010 = 0110
        // 0001 | 0110 = 0111 (result = 7)
    
        printf("Result: %d\n", result); // Output: Result: 7
        return 0;
    }
    ```

Understanding the precedence and associativity of bitwise operators is essential for writing and debugging complex expressions in C effectively.

### Special Miscellaneous Operators in C

In C programming, there are several special or miscellaneous operators that provide additional functionality beyond the common arithmetic, logical, and relational operations.

These include:

1. **sizeof Operator**:
   
   - Returns the size (in bytes) of a data type or variable.
   - Example: `sizeof(int)` returns the size of an integer, typically 4 bytes.

2. **Ternary (Conditional) Operator**:
   
   - Provides a shorthand for `if-else` statements.
   - Syntax: `condition ? expression1 : expression2`.
   - Example: `int a = (x > y) ? x : y;` assigns the greater value of `x` or `y` to `a`.

3. **Comma Operator**:
   
   - Allows multiple expressions to be evaluated in a single statement.
   - Returns the value of the last expression.
   - Example: `int a = (x = 1, y = 2, x + y);` sets `a` to 3.

4. **Member Selection Operator (->)**: Used to access the members of a structure or union through a pointer.

These operators help perform specific tasks efficiently and concisely, enhancing the expressiveness and functionality of C code.

## Ternary Operator

The ternary conditional operator (`?:`) in C offers a succinct method for crafting conditional expressions.
It operates with three operands and functions similarly to an `if-else` statement compacted into a single line.
This operator is particularly advantageous for simplifying straightforward conditional assignments that could otherwise result in verbose `if-else` constructs. By consolidating conditional expressions into a single line, the ternary operator significantly improves code readability.

**Example:**

    ```c
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // max is 20
    ```

- `(a > b)` is the condition to evaluate.
- `a` is the value returned if the condition is true.
- `b` is the value returned if the condition is false.

## Precedence and Associativity in C

The idea of operator precedence and associativity in C is important for determining the priority of operators when there are multiple operators in an expression. In the C language, it is common to have multiple operators, and the compiler evaluates the operator with higher precedence first. This helps to clarify the expression and avoid unnecessary use of parentheses.

**Precedence** determines the order in which different operators are evaluated in an expression.
Operators with higher precedence are evaluated before operators with lower precedence.

**Associativity** defines the direction of evaluation for operators with the same precedence level.
It can be either left-to-right or right-to-left.

The following table outlines the operator precedence and associativity in C programming, listed from highest to lowest precedence:

| Precedence | Operator | Description                                       | Associativity |
| ---------- | -------- | ------------------------------------------------- | ------------- |
| 1          | ()       | Parentheses (function call)                       | Left-to-Right |
|            | []       | Array Subscript (Square Brackets)                 |               |
|            | .        | Dot Operator                                      |               |
|            | ->       | Structure Pointer Operator                        |               |
|            | ++ , --  | Postfix increment, decrement                      |               |
| 2          | ++ / --  | Prefix increment, decrement                       | Right-to-Left |
|            | + / -    | Unary plus, minus                                 |               |
|            | ! , ~    | Logical NOT, Bitwise complement                   |               |
|            | (type)   | Cast Operator                                     |               |
|            | *        | Dereference Operator (indirection)                |               |
|            | &        | Addressof Operator                                |               |
|            | sizeof   | Determine size in bytes                           |               |
| 3          | *, /, %  | Multiplication, division, modulus                 | Left-to-Right |
| 4          | +, -     | Addition, subtraction                             | Left-to-Right |
| 5          | << , >>  | Bitwise shift left, shift right                   | Left-to-Right |
| 6          | < , <=   | Relational less than, less than or equal to       | Left-to-Right |
|            | > , >=   | Relational greater than, greater than or equal to |               |
| 7          | == , !=  | Relational is equal to, is not equal to           | Left-to-Right |
| 8          | &        | Bitwise AND                                       | Left-to-Right |
| 9          | ^        | Bitwise exclusive OR                              | Left-to-Right |
| 10         | \|       | Bitwise inclusive OR                              | Left-to-Right |
| 11         | &&       | Logical AND                                       | Left-to-Right |
| 12         | \|\|     | Logical OR                                        | Left-to-Right |
| 13         | ?:       | Ternary conditional                               | Right-to-Left |
| 14         | =        | Assignment                                        | Right-to-Left |
|            | += , -=  | Addition, subtraction assignment                  |               |
|            | *= , /=  | Multiplication, division assignment               |               |
|            | %= , &=  | Modulus, bitwise AND assignment                   |               |
|            | ^= , \|= | Bitwise exclusive, inclusive OR assignment        |               |
|            | <<=, >>= | Bitwise shift left, right assignment              |               |
| 15         | ,        | Comma (expression separator)                      | Left-to-Right |

Easy Trick to Remember Operator Precedence and Associativity: PUMA’S REBL TAC
PUMA’S REBL TAC is a mnemonic to remember the precedence and associativity of operators in C.
Here’s what each letter stands for:

1. **P** - Postfix operators
2. **U** - Unary operators
3. **M** - Multiplicative operators
4. **A** - Additive operators
5. **S** - Shift operators
6. **R** - Relational operators
7. **E** - Equality operators
8. **B** - Bitwise operators
9. **L** - Logical operators
10. **T** - Ternary operator
11. **A** - Assignment operators
12. **C** - Comma operator

## Operator Classes in C

C operators are categorized into nine main classes, each serving distinct purposes:

1. **Arithmetic Operators**: Perform basic mathematical operations.
   
   - Addition (`+`)
   - Subtraction (`-`)
   - Multiplication (`*`)
   - Division (`/`)
   - Modulus (`%`)

2. **Unary Operators**: Operate on a single operand to return a new value.
   
   - Unary plus (`+`)
   - Unary minus (`-`)
   - Increment (`++`)
   - Decrement (`--`)
   - Logical NOT (`!`)
   - Bitwise NOT (`~`)
   - Dereference (`*`)
   - Address-of (`&`)
   - `sizeof`
   - Type casting (`(type)`)

3. **Relational Operators**: Compare two operands.
   
   - Less than (`<`)
   - Greater than (`>`)
   - Less than or equal to (`<=`)
   - Greater than or equal to (`>=`)

4. **Assignment Operators**: Assign values to variables, sometimes combining with arithmetic operations.
   
   - Basic assignment (`=`)
   - Compound assignments (`+=`, `-=`, `*=`, `/=`, `%=`)

5. **Equality Operators**: Compare two operands for equality or inequality.
   
   - Equal to (`==`)
   - Not equal to (`!=`)

6. **Logical Operators**: Perform logical operations.
   
   - Logical AND (`&&`)
   - Logical OR (`||`)
   - Logical NOT (`!`)

7. **Conditional Operator**: Also known as the ternary operator, used for conditional expressions.
   
   - Ternary (`?:`)

8. **Bitwise Operators**: Perform operations on bits.
   
   - Bitwise NOT (`~`)
   - Bitwise AND (`&`)
   - Bitwise XOR (`^`)
   - Bitwise OR (`|`)
   - Left shift (`<<`)
   - Right shift (`>>`)

9. **Comma Operator**: Evaluates multiple expressions and returns the value of the last expression.
   
   - Comma (`,`)

These operator classes help manage various operations within C programs, enabling efficient and effective coding.
