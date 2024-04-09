#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    // Input the dividend and divisor
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate quotient and remainder without using modulo operator
    quotient = dividend / divisor;
    remainder = dividend - (quotient * divisor);

    // Display the remainder
    printf("Remainder: %d\n", remainder);

    return 0;
}
