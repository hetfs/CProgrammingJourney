// Read a three-digit number from the user and store it in a variable.
// - Extract the digits by dividing the number by 10 and taking the remainder.
// - Reconstruct the number in reverse order.
// - Print the reversed number
#include <stdio.h>

int main(void){
    int number, originalNumber, remainder, reversedNumber = 0;

    // Read a three-digit number from the user
    printf("Enter three-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    // print the original numbr
    printf("Original number: %d\n", originalNumber);

    // Extract the digits, reverse, and reconstruct the number

    while(number > 0){
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

//  https://www.shiksha.com/online-courses/articles/reverse-a-number-in-c/