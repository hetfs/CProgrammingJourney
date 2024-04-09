#include <stdio.h>
// input two numbers from the keyboard and print their average

int main() {

    int a, b;

    printf("Enter First number: ");
    scanf("%d", &a);

    printf("Enter Second number:");
    scanf("%d", &b);

    int average = (a + b) / 2;
    printf("The average of %d and %d is %d", a, b, average);
    
    return 0;
}