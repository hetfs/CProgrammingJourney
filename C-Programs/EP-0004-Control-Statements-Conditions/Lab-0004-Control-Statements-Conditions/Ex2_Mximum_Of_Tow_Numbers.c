#include <stdio.h>

// Find Maximum of Two Numbers

int main(void){
    int firstNumber, secondNumber;
    printf("Enter First Number: ");
    scanf("%d", &firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);
    if(firstNumber > secondNumber){
        printf("First Number is greater than Second Number\n");
    }
    else if(secondNumber > firstNumber){
        printf("Second Number is greater than First Number\n");
    }
    return 0;
}