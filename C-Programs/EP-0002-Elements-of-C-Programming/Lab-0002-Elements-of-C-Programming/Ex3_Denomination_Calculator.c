#include <stdio.h>


int main() {
    // Declare variables
    int amount, denomination;
    
    // Array to hold various rupee denominations
    int denominations[] = {500, 100, 50, 20, 10, 5, 2, 1};
    
    // Prompt user to input the amount in rupees
    printf("Enter the amount in rupees: ");
    
    // Read the input amount
    scanf("%d", &amount);
    
    // Iterate through each denomination
    for (int i = 0; i < sizeof(denominations) / sizeof(denominations[0]); i++) {
        // Calculate number of notes of the current denomination
        int notes = amount / denominations[i];
        
        // Update the amount by subtracting the product of notes and denomination
        amount -= notes * denominations[i];
        
        // Print denomination, number of notes, and subtotal
        printf("%d x %d = %d\n", denominations[i], notes, notes * denominations[i]);
    }
    
    return 0;
}


 
 

// This code takes an input amount in rupees, calculates the number of each denomination of rupee notes required to represent the given amount, and prints them along with their respective subtotals. It iterates through each denomination, calculates the number of notes using integer division, updates the amount, and prints the denomination, number of notes, and subtotal.

// This algorithm calculates and prints the number of each denomination of rupee notes required to represent the given amount, along with their respective subtotals.
// 1. Start the main function.
// 2. Declare integer variables `amount` and denominations of various rupee notes (e.g., 500, 100, 50, 20, 10, 5, 2, 1).
// 3. Prompt the user to input the amount in rupees.
// 4. Read the input amount and store it in the variable `amount`.
// 5. Iterate through each denomination:
//    - Calculate the number of notes of the current denomination using integer division.
//    - Update the amount by subtracting the product of the number of notes and denomination.
//    - Print the denomination, the number of notes, and the subtotal (number of notes * denomination).
// 6. End the iteration.
// 7. End the main function.


