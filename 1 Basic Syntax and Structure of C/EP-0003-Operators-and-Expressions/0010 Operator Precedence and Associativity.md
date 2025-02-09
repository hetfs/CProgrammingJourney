# **Operator Precedence and Associativity in C**

Understanding **operator precedence** and **associativity** in C is essential for evaluating expressions correctly, especially when multiple operators are involved. By knowing which operators take precedence over others, developers can write **clearer, more predictable**, and **efficient** code without excessive parentheses.

---

## **What is Operator Precedence?**

**Operator precedence** determines the order in which different operators are evaluated in an expression. Operators with **higher precedence** are executed **before** those with lower precedence.

### **Example: Operator Precedence in Action**

```c
#include <stdio.h>

int main() {
    int result = 3 + 4 * 5;
    printf("Result: %d\n", result);  // Output: 23
    return 0;
}
```

### **Explanation**:

1. **Multiplication (`*`) has a higher precedence** than addition (`+`), so `4 * 5` is evaluated first (`20`).
2. Then, `3 + 20` is computed, resulting in `23`.

---

## **What is Operator Associativity?**

When multiple operators with the **same precedence** appear in an expression, **associativity** defines the **evaluation direction**:

- **Left-to-Right Associativity** → Operators are evaluated **from left to right**.
- **Right-to-Left Associativity** → Operators are evaluated **from right to left**.

### **Example: Left-to-Right Associativity**

```c
#include <stdio.h>

int main() {
    int a = 5, b = 10, c;
    c = a + b - 2;  // Both + and - have the same precedence (evaluated from left to right)
    printf("c: %d\n", c);  // Output: 13
    return 0;
}
```

**Breakdown**:

- `(a + b)` is evaluated first → `5 + 10 = 15`.
- Then, `15 - 2 = 13`.

---

## **Operator Precedence and Associativity Table**

Here’s a structured **precedence table** (from **highest to lowest**) along with their **associativity**:

| **Precedence** | **Operators**                     | **Description**                                          | **Associativity**    |
| -------------- | --------------------------------- | -------------------------------------------------------- | -------------------- |
| **1**          | `() [] -> . ++ --`                | Function calls, array subscripts, structure operators    | **Left-to-Right**    |
| **2**          | `++ -- + - ! ~ * & sizeof (type)` | Unary operations (increment, negation, address-of, etc.) | **Right-to-Left**    |
| **3**          | `* / %`                           | Multiplication, division, modulus                        | **Left-to-Right**    |
| **4**          | `+ -`                             | Addition, subtraction                                    | **Left-to-Right**    |
| **5**          | `<< >>`                           | Bitwise shift left/right                                 | **Left-to-Right**    |
| **6**          | `< <= > >=`                       | Relational comparisons                                   | **Left-to-Right**    |
| **7**          | `== !=`                           | Equality comparisons                                     | **Left-to-Right**    |
| **8**          | `&`                               | Bitwise AND                                              | **Left-to-Right**    |
| **9**          | `^`                               | Bitwise XOR                                              | **Left-to-Right**    |
| **10**         | `                                 | `                                                        | Bitwise OR           |
| **11**         | `&&`                              | Logical AND                                              | **Left-to-Right**    |
| **12**         | `                                 |                                                          | `                    |
| **13**         | `?:`                              | Ternary (conditional) operator                           | **Right-to-Left**    |
| **14**         | `= += -= *= /= %= &= ^=           | = <<= >>=`                                               | Assignment operators |
| **15**         | `,`                               | Comma operator (expression separator)                    | **Left-to-Right**    |

---

## **Understanding Operator Evaluation with Examples**

### **1. Multiplication vs. Addition (`*` vs. `+`)**

```c
#include <stdio.h>

int main() {
    int result = 5 + 3 * 2;
    printf("Result: %d\n", result);  // Output: 11
    return 0;
}
```

**Explanation**:

- `3 * 2` is computed first (`6`), since `*` has a higher precedence.
- Then, `5 + 6 = 11`.

### **2. Assignment (`=`) is Right-to-Left Associative**

```c
#include <stdio.h>

int main() {
    int a, b, c;
    a = b = c = 10;  // Assignment is right-to-left
    printf("a: %d, b: %d, c: %d\n", a, b, c);  // Output: 10 10 10
    return 0;
}
```

**Explanation**:

- `c = 10` is evaluated first.
- Then `b = c` (so `b` becomes `10`).
- Finally, `a = b` (so `a` becomes `10`).

### **3. Ternary Operator (`?:`) Precedence**

```c
#include <stdio.h>

int main() {
    int x = 10, y = 20, min;
    min = (x < y) ? x : y;
    printf("Minimum: %d\n", min);  // Output: 10
    return 0;
}
```

**Explanation**:

- The condition `(x < y)` is evaluated first (`10 < 20` → true).
- Since true, `x` is assigned to `min`.

---

## **Mnemonic for Remembering Operator Precedence**

To help recall precedence easily, use the mnemonic:

### **"PUMA’S REBL TAC"**

1. **P** - **Parentheses & Postfix** (`() [] . -> ++ --`)
2. **U** - **Unary Operators** (`+ - ! ~ * & sizeof`)
3. **M** - **Multiplicative Operators** (`* / %`)
4. **A** - **Additive Operators** (`+ -`)
5. **S** - **Shift Operators** (`<< >>`)
6. **R** - **Relational Operators** (`< <= > >=`)
7. **E** - **Equality Operators** (`== !=`)
8. **B** - **Bitwise Operators** (`& ^ |`)
9. **L** - **Logical Operators** (`&& ||`)
10. **T** - **Ternary Operator** (`?:`)
11. **A** - **Assignment Operators** (`= += -= *= /= %= &= ^= |= <<= >>=`)
12. **C** - **Comma Operator** (`,`)

By remembering **"PUMA'S REBL TAC"**, you can quickly recall operator precedence when writing or debugging C code.

---

## **Key Takeaways**

✅ **Operator precedence** determines which operations are performed **first** in an expression.  
✅ **Associativity** decides the **evaluation direction** when operators have **the same precedence**.  
✅ **Use parentheses (`()`) to ensure clarity** when operator precedence is unclear.  
✅ **The assignment operator (`=`) and ternary operator (`?:`) are right-to-left associative.**  
✅ **Memorizing precedence rules (e.g., "PUMA’S REBL TAC") can be helpful in debugging and coding faster.**

 
