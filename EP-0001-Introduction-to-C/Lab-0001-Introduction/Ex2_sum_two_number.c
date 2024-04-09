#include<stdio.h>
#include<conio.h>

/*sum of two numbers*/

int main(){

    //Variable Declarations
    int a, b, sum;

    /* Request for Input */
    printf("enter two numbers: "); 

    /* Input from user */
    scanf("%d %d",&a,&b);   
    
    /* Adding two numbers */
    sum=a+b;                      

    /* Output Sum */
    printf("sum = %d\n",sum);      

    /* To hold output screen */
    getch(); 

    return 0;

}     /* End of main */