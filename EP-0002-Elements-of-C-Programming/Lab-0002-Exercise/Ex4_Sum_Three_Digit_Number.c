

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input the three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract and sum the digits
    digit = num % 10; // Extract the units digit
    sum += digit;
    num /= 10; // Remove the units digit

    digit = num % 10; // Extract the tens digit
    sum += digit;
    num /= 10; // Remove the tens digit

    digit = num % 10; // Extract the hundreds digit
    sum += digit;

    // Print the sum of the digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}

// C program to calculate the sum of digits of a three-digit number
// This program reads a three-digit number from the user, extracts its digits, calculates their sum, and prints the result.

// Algorithm:
// 1. Declare variables to store the three-digit number and the sum of its digits.
// 2. Prompt the user to input the three-digit number.
// 3. Read the input number from the user.
// 4. Extract each digit of the number using the modulus operator (%) and integer division (/).
// 5. Add each extracted digit to the sum variable.
// 6. Print the sum of the digits.

