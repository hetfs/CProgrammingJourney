#include <stdio.h>

int main() {
    int a, b, c;

    // Read three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    // Merge the three numbers
    int merged_number = a * 100 + b * 10 + c;

    // Print the merged number
    printf("Merged number: %d\n", merged_number);

    return 0;
}


