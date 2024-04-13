#include <stdio.h>

/* To obtain the sum of the first and last digits of a four-digit number
input through the keyboard, you can use the following method:
first_digit = num / 1000
last_digit = num % 10
sum = first_digit + last_digit
*/

int main() {
    int num, firstDigit, lastDigit, sum;
    
    // Input a four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    
    // Extract the first digit by dividing by 1000
    firstDigit = num / 1000;
    
    // Extract the last digit by taking the remainder when divided by 10
    lastDigit = num % 10;
    
    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;
    
    // Output the sum
    printf("Sum of the first and last digit is %d\n", sum);
    
    return 0;
}