#include <stdio.h>
//Numbers from the keyboard and print their sum.
int main(void){

    int a, b;
    int sum = 0;

    printf("Enter first numeber: ");
    scanf("%d,", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum is %d", sum);

    return 0;
}