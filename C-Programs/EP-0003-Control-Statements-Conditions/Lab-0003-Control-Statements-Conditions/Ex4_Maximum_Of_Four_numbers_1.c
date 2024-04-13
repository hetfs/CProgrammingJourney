 #include <stdio.h>

int main(void) {

    // Declare variables to store the four numbers.
    int A, B, C, D;

    // Prompt the user to input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // Initialize a variable `Max` to store the maximum number
    int Max;
    
    // Check for the maximum number among A, B, C, and D
    if (A >= B && A >= C && A >= D)
        Max = A;
    else if (B >= A && B >= C && B >= D)
        Max = B;
    else if (C >= A && C >= B && C >= D)
        Max = C;
    else
        Max = D;
    
    // Display the maximum number
    printf("The maximum number is %d\n", Max);
    
    return 0;
}

/* Algorithm for which finds the maximum among four numbers input by the user:
1. Start the program.
2. Declare integer variables A, B, C, and D to store the four numbers.
3. Prompt the user to enter four numbers.
4. Read the input numbers and store them in variables A, B, C, and D.
5. Declare an integer variable Max to store the maximum number.
6. Compare A with B, C, and D to find the maximum among them.
7. If A is greater than or equal to B, C, and D, assign A to Max.
8. If not, check if B is greater than or equal to A, C, and D. If true, assign B to Max.
9. If not, check if C is greater than or equal to A, B, and D. If true, assign C to Max.
10. If not, assign D to Max.
11. Print the maximum number stored in Max.
12. End the program.

This algorithm outlines the steps followed by the previous code to determine and display the maximum among the four input numbers. */



