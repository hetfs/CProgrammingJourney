#include <stdio.h>

// Function to calculate the sum of two integers
int sum(int a, int b) {
  return a + b;
}

// Main function
    int main() {

    // Declare and initialize two integer variables
    int x = 10;
    int y = 20;

    // Call the sum function and store the result
    int result = sum(x, y);

    // Print the result using printf function
    printf("The sum of %d and %d is %d\n", x, y, result);

    // Return 0 to indicate successful completion of the program
return 0;
}