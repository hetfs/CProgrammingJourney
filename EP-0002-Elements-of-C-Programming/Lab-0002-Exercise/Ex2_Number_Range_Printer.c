#include <stdio.h>

// C program that prints the range of a number



#include <stdio.h>

int main(void){
    int num, lowerBound, upperBound;
    printf("Enter a number: ");
    scanf("%d", &num);

    //  calculate lower bound of range:
    lowerBound = (num / 10) * 10;

    //  calculate upper bound of range:
    upperBound = lowerBound + 9;

    //  Print the range of the number as `lowerBound` to `upperBound`
    printf("The range of number %d is %d and %d", num, lowerBound, upperBound);

    return 0;
}

// Another way to calculate the range of a number

/*
int main() {
    int num, lowerBound, upperBound;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the lower bound of the range
    lowerBound = num - (num % 10);
    
    
    // Calculate the upper range
    upperBound = lowerBound + 10;
    
    
    // Output the range
    printf("The range of %d is %d to %d\n", num, lowerBound, upperBound);
    

    return 0;
}

*/



