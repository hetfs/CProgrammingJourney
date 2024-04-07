#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    
    // Prompt the user to input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Assume the first number is the largest and the second is the second largest
    int max = num1, second_max = num2;
    
    // Update max and second_max based on the other two numbers
    if (num2 > max) {
        max = num2;
        second_max = num1;
    }
    if (num3 > max) {
        second_max = max;
        max = num3;
    } else if (num3 > second_max) {
        second_max = num3;
    }
    
    // Display the second maximum number
    printf("The second maximum number is: %d\n", second_max);
    
    return 0;
}



// This program prompts the user to input three numbers and then determines the second maximum among them. It iteratively compares each input number with the current maximum and second maximum, updating them accordingly to find the second largest number.

