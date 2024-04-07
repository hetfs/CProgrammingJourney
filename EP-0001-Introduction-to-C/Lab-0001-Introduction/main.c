#include<stdio.h>  
#include<conio.h>

int main(){

    int a, b, sum; //Variable Declarations

    printf("enter two numbers: ");   /* Request for Input */
    scanf("%d %d",&a,&b);          /* Input from user */


    sum=a+b;                      /* Adding two numbers */
    printf("sum=%d\n",sum);      /* Output Sum */
    getch();                    /* To hold output screen */


    return 0;
}       