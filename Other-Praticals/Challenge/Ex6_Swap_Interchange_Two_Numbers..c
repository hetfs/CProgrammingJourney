#include <stdio.h>

// C Program to Swap Two Numbers
// swap two numbers using a temporary variable

int main() {
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}


// This program prompts the user to enter two numbers, then swaps them using a temporary variable and prints the result before and after swapping. 

 