# Reading Comprehension

1. What are the main categories of Input/Output (I/O) functions available in the C programming language?
2. How do formatted and unformatted I/O functions differ in C? Provide examples of each.
3. Explain the purpose of printf() and scanf() functions in C. How are they used for output and input operations, respectively?
4. Describe the role of getchar() and putchar() functions in C. Provide examples illustrating their usage.
5. How does the fprintf() function differ from printf() in C? Give a scenario where you would prefer to use fprintf().
6. Discuss the significance of fgets() and fputs() functions in C for handling strings during I/O operations.
7. Explain the potential dangers of using gets() function in C for input and suggest safer alternatives.
8. How do fseek() and ftell() functions contribute to file handling in C? Provide examples demonstrating their usage.
9. What is the purpose of freopen() function in C, and how is it used to redirect I/O streams?
10. Discuss the importance of error handling in C I/O operations. How can perror() and strerror() functions be used for error reporting?

## Reading Comprehension questions answers

1. **Formatted vs. Unformatted I/O Functions in C**:
   - **Formatted I/O functions** are used to perform input and output operations with formatted data. They allow specifying the format of the data being read or written, such as integers, floating-point numbers, or strings. Examples include printf() for output and scanf() for input.
   - **Unformatted I/O functions** deal with raw data without considering any specific format. They are typically used for reading and writing characters or bytes directly, without any formatting applied. Examples include getchar() and putchar().

2. **Purpose of printf() and scanf() Functions**:
   - **printf()** is used to format and print data to the standard output device (usually the console). It allows formatting the output according to specified format specifiers like %d for integers, %f for floats, and %s for strings.
   - **scanf()** is used to read formatted input from the standard input device (usually the keyboard). It reads data from the standard input stream and stores it into specified variables based on the format specifiers provided.

3. **Role of getchar() and putchar() Functions**:
   - **getchar()** reads a single character from the standard input stream (usually the keyboard) and returns it as an integer. It's commonly used in loops to read characters until a certain condition is met.
   - **putchar()** writes a single character to the standard output stream (usually the console). It's often used to display characters, especially in conjunction with getchar() for input/output operations.

4. **Difference between fprintf() and printf()**:
   - **fprintf()** is used to write formatted data to a specified file stream instead of the standard output. It allows directing output to a file, making it suitable for logging or writing data to files.
   - You would prefer to use fprintf() when you need to store the formatted output in a file rather than displaying it on the console, such as when writing data to a log file or generating a report.

5. **Significance of fgets() and fputs() Functions**:
   - **fgets()** is used to read a line of text from a specified file stream, including the newline character. It's useful for reading entire lines of text, especially from text files.
   - **fputs()** is used to write a string to a specified file stream. It's commonly used to write strings to files without formatting.

6. **Dangers of using gets() Function**:
   - The gets() function is unsafe because it doesn't perform any bounds checking on the input, leading to buffer overflow vulnerabilities.
   - Safer alternatives include fgets(), which allows specifying the maximum number of characters to read, preventing buffer overflow.

7. **Contribution of fseek() and ftell() Functions to File Handling**:
   - **fseek()** is used to set the file position indicator for a specified file stream. It allows moving the position to a specific byte offset within the file.
   - **ftell()** returns the current position of the file pointer within the specified file stream. It's often used in conjunction with fseek() to determine the current position within a file.

8. **Purpose of freopen() Function**:
   - freopen() is used to associate a new file stream with an existing file or standard I/O stream. It allows redirecting I/O streams to files or other devices, such as redirecting standard input/output to files for input/output redirection.

9. **Importance of Error Handling in C I/O Operations**:
   - Error handling is crucial in C I/O operations to handle unexpected situations, such as file not found or permission denied errors.
   - perror() and strerror() functions are used for error reporting. perror() prints a descriptive error message to the standard error stream, while strerror() returns a string describing the error code passed to it.

These explanations provide a comprehensive overview of the concepts and functions related to Input/Output operations in C.
