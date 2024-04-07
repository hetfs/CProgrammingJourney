#include <stdio.h>

// convert temperature from Fahrenheit to Celsius using the formula: 
// Celsius = (Fahrenheit - 32) * 5 / 9;

int main() {
    float fahrenheit, celsius;

    // Ask user to input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}



#include <stdio.h>

// simple C program that converts temperature from Fahrenheit to Celsius

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output temperature in Celsius
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

/*
Explanation of the code snippet:
1. Include the necessary header file `stdio.h` for input/output operations.
2. In the `main` function:
   - Declare variables `fahrenheit` and `celsius` to store the input temperature in Fahrenheit and the converted temperature in Celsius, respectively.
   - Prompt the user to enter the temperature in Fahrenheit using `printf`.
   - Read the temperature value entered by the user using `scanf`.
   - Convert the temperature from Fahrenheit to Celsius using the formula celsius = (fahrenheit - 32) * 5 / 9
   - Print the converted temperature in Celsius using `printf`.
3. Return 0 to indicate successful execution of the program.

When you run this program, it will ask the user to input the temperature in Fahrenheit, convert it to Celsius using the provided formula, and then display the converted temperature in Celsius on the console.
*/