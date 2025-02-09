# Operator Classes in C

C operators are categorized into nine primary classes, each serving a specific purpose in programming. A solid understanding of these operator classes enables efficient and effective coding in C. Below is an in-depth look at each category.

---

## 1. **Arithmetic Operators**

Arithmetic operators perform fundamental mathematical operations on numerical values.

- **Addition (`+`)**: Computes the sum of two operands.
- **Subtraction (`-`)**: Calculates the difference between two operands.
- **Multiplication (`*`)**: Multiplies two operands.
- **Division (`/`)**: Divides one operand by another (integer division truncates decimal values).
- **Modulus (`%`)**: Returns the remainder of a division operation (useful for checking divisibility).

### Example

```c
int a = 10, b = 3;
int sum = a + b;        // 13
int difference = a - b; // 7
int product = a * b;    // 30
int quotient = a / b;   // 3 (integer division)
int remainder = a % b;  // 1
```

---

## 2. **Unary Operators**

Unary operators operate on a single operand, modifying or querying its value.

- **Unary Plus (`+`)**: Indicates a positive value (often redundant).
- **Unary Minus (`-`)**: Negates the operand.
- **Increment (`++`)**: Increases the operand by one.
- **Decrement (`--`)**: Decreases the operand by one.
- **Logical NOT (`!`)**: Inverts the truth value of a boolean expression.
- **Bitwise NOT (`~`)**: Inverts all bits of the operand.
- **Dereference (`*`)**: Accesses the value at a pointer's address.
- **Address-of (`&`)**: Retrieves a variable’s memory address.
- **`sizeof`**: Returns the size (in bytes) of a data type or variable.
- **Type Casting (`(type)`)**: Converts a variable’s data type.

### Example

```c
int x = 5;
int incremented = ++x; // x becomes 6
int decremented = --x; // x becomes 5 again
int negated = -x;      // -5
int *ptr = &x;         // Stores address of x
```

---

## 3. **Relational Operators**

Relational operators compare two values, returning a boolean result (`true` or `false`).

- **Less Than (`<`)**: Checks if the left operand is smaller than the right.
- **Greater Than (`>`)**: Checks if the left operand is larger than the right.
- **Less Than or Equal (`<=`)**: Determines if the left operand is smaller or equal.
- **Greater Than or Equal (`>=`)**: Determines if the left operand is larger or equal.

### Example

```c
int a = 5, b = 10;
bool isLess = a < b;         // true
bool isGreater = a > b;      // false
bool isEqualOrLess = a <= b; // true
```

---

## 4. **Assignment Operators**

Assignment operators assign or modify values of variables.

- **Basic Assignment (`=`)**: Assigns a value.
- **Compound Assignments**: Combines an arithmetic operation with assignment:
  - Addition (`+=`)
  - Subtraction (`-=`)
  - Multiplication (`*=`)
  - Division (`/=`)
  - Modulus (`%=`)

### Example

```c
int x = 5;
x += 3; // x is now 8
x *= 2; // x is now 16
```

---

## 5. **Equality Operators**

Equality operators compare two values for equality or inequality, returning a boolean result.

- **Equal To (`==`)**: Checks if two operands are equal.
- **Not Equal To (`!=`)**: Checks if two operands are not equal.

### Example

```c
int a = 5, b = 10;
bool isEqual = (a == b);   // false
bool isNotEqual = (a != b); // true
```

---

## 6. **Logical Operators**

Logical operators are used in conditional statements for evaluating boolean expressions.

- **Logical AND (`&&`)**: Returns true if both operands are true.
- **Logical OR (`||`)**: Returns true if at least one operand is true.
- **Logical NOT (`!`)**: Inverts the truth value of an operand.

### Example

```c
bool p = true, q = false;
bool andResult = p && q; // false
bool orResult = p || q;  // true
bool notResult = !p;      // false
```

---

## 7. **Conditional Operator**

The ternary (`?:`) operator simplifies conditional expressions by returning one of two values based on a condition.

### Example

```c
int a = 5, b = 10;
int max = (a > b) ? a : b; // max is 10
```

---

## 8. **Bitwise Operators**

Bitwise operators manipulate bits at the binary level, often used in low-level programming.

- **Bitwise NOT (`~`)**: Inverts the bits of its operand.
- **Bitwise AND (`&`)**: Performs a bitwise AND operation.
- **Bitwise OR (`|`)**: Performs a bitwise OR operation.
- **Bitwise XOR (`^`)**: Performs a bitwise XOR operation.
- **Left Shift (`<<`)**: Shifts bits left, filling with zeros.
- **Right Shift (`>>`)**: Shifts bits right, preserving the sign bit for signed types.

### Example

```c
int a = 5; // 0101 in binary
int b = 3; // 0011 in binary
int andResult = a & b; // 0001 (1 in decimal)
int orResult = a | b;  // 0111 (7 in decimal)
```

---

## 9. **Comma Operator**

The comma operator allows multiple expressions to be evaluated in a single statement, returning the last expression’s value.

### Example

```c
int a = (1, 2, 3); // a is 3
```

---

## **Conclusion**

These nine classes of operators form the foundation of C programming, enabling everything from basic arithmetic to complex logical evaluations. Mastering their use leads to efficient, optimized, and maintainable code.
