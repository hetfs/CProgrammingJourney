# **Practical Exercises on Type Casting in C**

Here are some **practical exercises** on **type casting in C**, ranging from basic to advanced levels. These exercises will help you practice both **implicit and explicit type casting** while reinforcing best practices.

---

## **Beginner-Level Exercises**

### **Exercise 1: Implicit Type Casting**

**Task:** 
Write a C program that demonstrates **implicit type casting** by performing arithmetic operations between different data types.

**Requirements:**

- Declare an `int`, `float`, and `double` variable.
- Assign values and perform an arithmetic operation.
- Print the result to observe automatic type conversion.

**Example Output:**

```txt
int: 5
float: 3.50
double result: 8.500000
```

---

### **Exercise 2: Explicit Type Casting (Truncation Effect)**

**Task:** 
Write a program that:

- Declares a `double` variable with a decimal value.
- Uses **explicit casting** to convert it into an `int`.
- Prints both values to observe the effect of truncation.

**Example Output:**

```txt
Original double value: 9.876543
After explicit casting to int: 9
```

---

### **Exercise 3: Character to Integer Conversion**

**Task:** 
Write a program that:

- Accepts a character input from the user.
- Prints its ASCII integer value using type casting.

**Example Input & Output:**

```txt
Enter a character: A
ASCII value: 65
```

---

## **Intermediate-Level Exercises**

### **Exercise 4: Casting Between Integer Types**

**Task:** 
Write a C program that:

- Declares a `long` variable with a large number.
- Casts it to an `int`, and checks for **data loss**.
- Displays a warning message if the value is out of range.

**Example Output:**

```txt
Warning: Data loss detected! Cannot safely cast long to int.
```

---

### **Exercise 5: Floating-Point Precision Loss**

**Task:** 
Write a program that:

- Declares a `double` variable with a large value.
- Casts it to a `float` and prints both values.
- Checks whether **precision loss** occurs.

**Example Output:**

```txt
Original double: 123456789.987654321
Converted float: 123456792.000000
Warning: Precision loss occurred!
```

---

### **Exercise 6: Safe Type Conversion for User Input**

**Task:**

- Accept an **integer** input from the user.
- Convert it to a **character** and print the result.
- Ensure it is within the valid ASCII range before casting.

**Example Input & Output:**

```txt
Enter an integer (0-255): 65
Character representation: A
```

---

## **Advanced-Level Exercises**

### **Exercise 7: Preventing Data Loss When Converting from Float to Int**

**Task:**

- Accept a **floating-point number** from the user.
- Convert it to an `int` only if it is within the valid range.
- Print a warning message if the value is too large or too small.

**Example Output:**

```txt
Enter a floating-point number: 3.99
Converted integer: 3
```

or

```txt
Enter a floating-point number: 1.5e20
Warning: Cannot safely convert float to int due to overflow.
```

---

### **Exercise 8: Pointer Type Casting and Void Pointers**

**Task:**

- Declare an `int` variable and store its address in a `void*` pointer.
- Use **explicit pointer casting** to retrieve and print its value.

**Example Output:**

```txt
Original value: 100
Retrieved value using void pointer: 100
```

---

### **Exercise 9: Casting Structures Using Pointers (Advanced)**

**Task:**

- Define a `struct Student` with `id` (int) and `grade` (float).
- Store a pointer to it as a `void*`.
- Cast it back to the correct type and print the values.

**Example Output:**

```txt
Student ID: 101
Student Grade: 85.50
```

---

### **Exercise 10: Safe Type Casting in Function Arguments**

**Task:**

- Write a function that accepts a `double` as a parameter.
- Inside the function, cast it to an `int` and return it.
- Print both values before and after casting.

**Example Output:**

```txt
Original double: 45.89
Converted int: 45
```

---

### **Bonus Challenge: Preventing Integer Overflow**

**Task:**

- Write a program that multiplies two `int` values.
- Check whether the result **exceeds INT_MAX** before performing the multiplication.
- If overflow occurs, print a warning instead of computing the result.

**Example Output:**

```txt
Warning: Integer overflow detected! Cannot perform multiplication.
```

---

## **Conclusion**

These exercises will help you **understand type casting deeply** and apply it in real-world C programming. They cover **basic conversions, precision loss, integer overflow, pointer casting, and safe casting techniques**.

---

# 
