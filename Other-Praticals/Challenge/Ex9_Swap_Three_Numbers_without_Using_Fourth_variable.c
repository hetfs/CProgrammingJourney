#include <stdio.h>

// To swap three numbers without using a temporary variable, you can utilize arithmetic operations and bitwise XOR operations. Here's the approach:

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

      printf("Numbers before swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    // Method 1: Using Arithmetic Operations
    num1 = num1 + num2 + num3;
    num2 = num1 - num2 - num3;
    num3 = num1 - num2 - num3;
    num1 = num1 - num2 - num3;

    // Method 2: Using Bitwise XOR Operator
    num1 = num1 ^ num2 ^ num3;
    num2 = num1 ^ num2 ^ num3;
    num3 = num1 ^ num2 ^ num3;
    num1 = num1 ^ num2 ^ num3;

    printf("Numbers after swapping (Arithmetic Operations): num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    printf("Numbers after swapping (Bitwise XOR Operator): num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}

// Using Arithmetic Operations:

// Add all three numbers and store the sum in one of the variables.
// Subtract each original number from the sum and store the results in the other variables.

// Using Bitwise XOR Operator:

// The bitwise XOR operator can be used to swap two variables without using a temporary variable. By applying this operator between two numbers, the bits are flipped if they are different, resulting in the swap.