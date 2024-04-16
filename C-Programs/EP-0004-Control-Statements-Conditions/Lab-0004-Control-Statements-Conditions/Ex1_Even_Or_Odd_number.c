#include <stdio.h>

// This program will check Even or Odd number 

int main(void){

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%d is an even number", number);
    }
    else{
        printf("%d is an odd number", number);
    }
    return 0;
}