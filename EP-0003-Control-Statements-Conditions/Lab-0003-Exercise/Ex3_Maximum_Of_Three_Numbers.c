#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Comparison to find the maximum number
    if (num1 >= num2 && num1 >= num3) {
        printf("Maximum number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Maximum number is: %d\n", num2);
    } else {
        printf("Maximum number is: %d\n", num3);
    }

    return 0;
}

//  https://www.geeksforgeeks.org/c-program-to-find-the-largest-number-among-three-numbers/

