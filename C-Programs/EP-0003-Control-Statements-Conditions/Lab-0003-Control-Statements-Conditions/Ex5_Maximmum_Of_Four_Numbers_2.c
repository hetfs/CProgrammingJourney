#include <stdio.h>

// Program to Find Maximum of Four Numbers (Short Logic)

int main() {
    // Declare variables to store the four numbers.
    int A, B, C, D;
    
    // Prompt the user to input four numbers.
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // Initialize a variable `max` to store the maximum number.
    int max = A; // Assume A is the maximum
    
    // Compare with B, C, and D to find the maximum.
    if (B > max) max = B;
    if (C > max) max = C;
    if (D > max) max = D;
    
    // Display the maximum number.
    printf("The maximum number is %d\n", max);
    
    return 0;
}



// This program prompts the user to input four numbers, then iteratively compares each input with the current maximum to find the largest number among them. It uses a concise approach with a single variable to store the maximum and a series of conditional statements to update it accordingly.
