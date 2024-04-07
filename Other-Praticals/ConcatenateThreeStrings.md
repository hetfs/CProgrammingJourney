# concatenates the strings

```c
#include <stdio.h>

int main() {
    int a, b, c;

    // Accept three integer inputs from the user
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    // Convert each integer to a string
    char str_a[20], str_b[20], str_c[20];
    sprintf(str_a, "%d", a);
    sprintf(str_b, "%d", b);
    sprintf(str_c, "%d", c);

    // Concatenate the three strings
    char merged_str[60];
    sprintf(merged_str, "%s%s%s", str_a, str_b, str_c);

    // Convert the concatenated string back to an integer
    int merged_number;
    sscanf(merged_str, "%d", &merged_number);

    // Print the merged number
    printf("Merged number: %d\n", merged_number);

    return 0;
}

This code prompts the user to enter three integers, converts each integer to a string using `sprintf()`, concatenates the strings together, converts the concatenated string back to an integer using `sscanf()`, and finally prints the merged number.

what is sprintf in C

`sprintf()` is a standard C library function used to format a series of characters and store them as a string in a buffer. Unlike `printf()`, which outputs to the standard output stream (usually the console), `sprintf()` writes its output to a string buffer. It stands for "String print" [[1](https://www.geeksforgeeks.org/sprintf-in-c/)].

The basic syntax of `sprintf()` is:

```c
int sprintf(char *str, const char *format, ...);
```

Where:

- `str` is the buffer where the formatted string will be stored.
- `format` is a string that contains format specifiers.
- The ellipsis `...` represents the additional arguments that correspond to the format specifiers in the format string.

For example:

```c
char buffer[20];
int num = 123;
sprintf(buffer, "The number is: %d", num);
```

This will store "The number is: 123" in the `buffer`.
