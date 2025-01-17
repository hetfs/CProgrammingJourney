# Coding Styles and Formatting

Readable and well-structured code is essential for both individual programmers and collaborative teams. Beyond improving debugging and maintenance, a disciplined coding style ensures clarity, correctness, and consistency.

The **Kernighan and Ritchie (K&R) style**, outlined in *The C Programming Language*, provides a solid foundation for structured and readable code. Key principles include consistent indentation, meaningful names, concise functions, and clear commenting. Below are detailed guidelines to improve coding style and readability:

---

## General Coding Style Guidelines

### 1. Names

- Use descriptive names that reflect the variable's purpose or context.
- Avoid single-character names, except for loop variables.
- Stick to a consistent naming convention (e.g., snake_case for variables, PascalCase for types).

### 2. Indentation and Spacing

- Use tabs for indentation and spaces for clarity between elements.
- Maintain consistent spacing (e.g., one space around operators).
- Recommended indentation: 4 spaces per level.

### 3. Comments

- Write comments sparingly to explain non-obvious code or complex logic.

- Avoid redundant comments; let clear code speak for itself.

- Example:
  
  ```c
  // Calculate the sum of two numbers
  int sum = a + b;
  ```

### 4. Functions

- Use concise, single-purpose functions with descriptive names.

- Annotate helper functions as `static` where appropriate.

- Example:
  
  ```c
  static int calculate_sum(int a, int b) {
      return a + b;
  }
  ```

### 5. Loops and Parentheses

- Prefer `for` or `while` loops over `do...while`.

- Use parentheses liberally to improve clarity and avoid ambiguity.
  
  ```c
  while (condition) {
      // code block
  }
  ```

### 6. Data Types and `typedef`

- Use `typedef` to define new types, especially for structures.
  
  ```c
  typedef struct {
      int id;
      char name[50];
  } Person;
  ```

### 7. Global Declarations

- Place global variables at the top of the file, with clear comments.
  
  ```c
  // Maximum array size
  #define MAX_SIZE 100
  ```

### 8. Constants

- Use `#define` or `const` for constants, written in uppercase.
  
  ```c
  #define PI 3.14159
  const int MAX_ITEMS = 50;
  ```

### 9. Static Objects

- Use `static` for internal linkage or to preserve variable state.
  
  ```c
  static int counter = 0;
  ```

### 10. Error Handling

- Always check return values and handle errors.
  
  ```c
  if (file == NULL) {
      perror("File error");
      return -1;
  }
  ```

### 11. Macros

- Use macros sparingly to avoid side effects. Prefer inline functions where possible.
  
  ```c
  #define SQUARE(x) ((x) * (x))
  ```

### 12. Idioms

- Use common programming idioms for clarity.
  
  ```c
  // Swap two variables
  void swap(int *a, int *b) {
      int temp = *a;
      *a = *b;
      *b = temp;
  }
  ```

---

## Writing Clean and Readable Code

### Example: Good vs. Bad Practices

#### **Variable Naming**

- Good:
  
  ```c
  int total_students;
  const int MAX_SCORE = 100;
  ```

- Bad:
  
  ```c
  int ts;  // Unclear abbreviation
  ```

#### **Indentation**

- Good:
  
  ```c
  for (int i = 0; i < n; i++) {
      // logic here
  }
  ```

- Bad:
  
  ```c
  for(int i=0;i<n;i++) { // Cramped formatting
      // logic here
  }
  ```

#### **Function Definition**

- Good:
  
  ```c
  int add(int a, int b) {
      return a + b;
  }
  ```

- Bad:
  
  ```c
  int 
  add(int a, int b) 
  {
      return a+b;
  }
  ```

---

## Formatting Tools

### Tools to Enforce Consistency

1. **ClangFormat**: Automatically formats code per your chosen style.
   
   ```bash
   clang-format -i main.c
   ```
   
   [Clang Format Documentation](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)

2. **GNU Indent**: Offers flexible indentation styles.
   
   ```bash
   sudo apt install indent
   indent -kr main.c  # K&R style
   ```

3. **AStyle**: Another popular C/C++ code formatter.

---

## Common Coding Styles

1. **K&R Style**:
   
   - Braces on the same line as the control statement.
   
   ```c
   int main() {
      // logic
   }
   ```

2. **Allman Style**:
   
   - Braces on the next line.
   
   ```c
   int main()
   {
      // logic
   }
   ```

3. **GNU Style**:
   
   - Spaces around keywords; aligned braces.
   
   ```c
   int main () 
   {
      // logic
   }
   ```

Choose a style that aligns with team/project preferences for consistency.
