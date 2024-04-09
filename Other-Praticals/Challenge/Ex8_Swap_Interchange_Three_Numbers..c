#include <stdio.h>

// SWAP (Interchange) Three Numbers Using a Temporary Variable

int main() {
    int num1, num2, num3, temp;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Numbers before  swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    // Swap numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = temp;

    // Output swapped numbers
    printf("Numbers after swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}

// To swap three numbers using a temporary variable in C, follow these steps:
// 1. Assign the value of the first number to the temporary variable.
// 2. Assign the value of the second number to the first number.
// 3. Assign the value of the temporary variable (which holds the original value of the first number) to the second number.
// 4. Repeat the process for the third number.
