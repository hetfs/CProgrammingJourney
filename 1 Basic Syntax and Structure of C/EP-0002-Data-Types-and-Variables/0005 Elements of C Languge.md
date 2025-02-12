# **Elements of C Programming**

C is one of the most influential and widely used programming languages. Its efficiency, low-level capabilities, and portability make it ideal for system programming, embedded systems, and application development. To write efficient and optimized programs in C, it is essential to understand its fundamental elements, including data types, control structures, functions, pointers, memory management, and file handling.

---

## **1. Data Types in C**

C provides a variety of data types to store different kinds of values. These data types define the memory size and the type of operations that can be performed on variables.

### **1.1 Primitive Data Types**

C has four fundamental data types:

- **`int` (Integer):** Used to store whole numbers.
- **`float` (Floating Point):** Used to store decimal numbers with single precision.
- **`double` (Double Precision Floating Point):** Used for higher precision floating-point numbers.
- **`char` (Character):** Used to store single characters.

### **Example:**

```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Pi: %.10lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### **1.2 Derived Data Types**

Derived data types are built from primitive types.

- **Arrays** - Collection of elements of the same type stored in contiguous memory.
- **Structures (`struct`)** - Groups related variables of different types.
- **Unions (`union`)** - Similar to structures, but all members share the same memory.
- **Enumerations (`enum`)** - Defines named integral constants.

### **Example: Using `struct` and `enum`**

```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

enum Gender { MALE, FEMALE, OTHER };

int main() {
    struct Person p1 = {"Alice", 30, 5.6};
    enum Gender g1 = FEMALE;

    printf("Name: %s, Age: %d, Height: %.1f, Gender: %d\n", p1.name, p1.age, p1.height, g1);

    return 0;
}
```

---

## **2. Control Structures**

C provides control structures that dictate the flow of execution in a program.

### **2.1 Conditional Statements**

- **`if` Statement** – Executes a block of code only if a condition is true.
- **`else` Statement** – Provides an alternative if the `if` condition is false.
- **`switch` Statement** – Provides multiple execution paths.

### **Example: `if-else` Statement**

```c
#include <stdio.h>

int main() {
    int age = 18;

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}
```

### **2.2 Looping Constructs**

- **`for` Loop** - Used when the number of iterations is known.
- **`while` Loop** - Used when the number of iterations is unknown.
- **`do-while` Loop** - Executes at least once, even if the condition is false.

### **Example: `for` Loop**

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}
```

---

## **3. Functions in C**

Functions help in modularizing code, making it reusable and maintainable.

### **3.1 Function Definition and Calling**

```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 10);
    printf("Sum: %d\n", sum);
    return 0;
}
```

### **3.2 Recursive Functions**

A function calling itself is called recursion.

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
```

---

## **4. Pointers in C**

Pointers store memory addresses, allowing efficient data manipulation.

### **4.1 Pointer Declaration & Dereferencing**

```c
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value: %d, Address: %p\n", *ptr, ptr);

    return 0;
}
```

### **4.2 Pointer Arithmetic**

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("Value: %d, Address: %p\n", *(ptr + i), (ptr + i));
    }

    return 0;
}
```

---

## **5. Memory Management in C**

C provides dynamic memory allocation functions:

- **`malloc`** - Allocates memory but does not initialize it.
- **`calloc`** - Allocates memory and initializes it to zero.
- **`realloc`** - Resizes previously allocated memory.
- **`free`** - Deallocates dynamically allocated memory.

### **Example: `malloc` and `free`**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;

    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
```

---

## **6. File Handling in C**

C allows reading from and writing to files.

### **6.1 Writing to a File**

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("File opening failed.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fclose(file);

    return 0;
}
```

### **6.2 Reading from a File**

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    char buffer[100];

    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}
```

---

## **Conclusion**

Mastering the elements of C programming provides a strong foundation for advanced topics such as data structures, operating systems, and embedded programming. Understanding data types, control structures, functions, pointers, memory management, and file handling enables efficient and scalable C programming.

---

## **Additional Notes**

### **1. Data Types**

- **Primitive Data Types**: These are the basic data types provided by C, such as `int`, `float`, `double`, and `char`.
- **Derived Data Types**: These are data types derived from primitive types, such as arrays, structures, unions, and enumerations.

### **2. Control Structures**

- **Conditional Statements**: These include `if`, `else`, and `switch` statements, which allow the program to make decisions based on conditions.
- **Looping Constructs**: These include `for`, `while`, and `do-while` loops, which allow the program to repeat a block of code multiple times.

### **3. Functions**

- **Function Definition and Calling**: Functions are defined using the `return_type function_name(parameters)` syntax and can be called from other parts of the program.
- **Recursive Functions**: These are functions that call themselves, often used for solving problems that can be broken down into smaller, similar problems.

### **4. Pointers**

- **Pointer Declaration & Dereferencing**: Pointers are declared using the `*` symbol and can be dereferenced using the same symbol to access the value they point to.
- **Pointer Arithmetic**: Pointers can be incremented or decremented to navigate through arrays or other data structures.

### **5. Memory Management**

- **Dynamic Memory Allocation**: Functions like `malloc`, `calloc`, `realloc`, and `free` allow the program to manage memory dynamically during runtime.
- **Memory Leaks**: It is important to free allocated memory to avoid memory leaks, which can lead to reduced performance and crashes.

### **6. File Handling**

- **File Operations**: C provides functions like `fopen`, `fclose`, `fprintf`, `fscanf`, `fgets`, and `fputs` for reading from and writing to files.
- **Error Handling**: It is important to check if file operations succeed and handle errors appropriately.

---
