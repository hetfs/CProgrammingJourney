// Determining profit or loss based on cost price and selling price

// This C code calculates profit or loss based on the cost price and selling price input by the user. If the selling price is greater than the cost price, it calculates the profit and its percentage. If the selling price is less than the cost price, it calculates the loss and its percentage. If the selling price equals the cost price, it indicates that there is neither profit nor loss.

#include <stdio.h>

int main() {
    float cost_price, selling_price, profit, loss, profit_percentage, loss_percentage;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;

        // Output profit
        printf("Profit amount: %.2f\n", profit);
        printf("Profit percentage: %.2f%%\n", profit_percentage);
    } else if (selling_price < cost_price) {
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;

        // Output loss
        printf("Loss amount: %.2f\n", loss);
        printf("Loss percentage: %.2f%%\n", loss_percentage);
    } else {
        // Output if neither profit nor loss
        printf("No profit or loss.\n");
    }

    return 0;
}


// Algorithm for the code provided earlier in C:

// 1. **Input**: Prompt the user to enter the cost price and selling price.
// 2. **Read Input**: Accept the cost price and selling price entered by the user.
// 3. **Calculate Profit or Loss**:
//    - If the selling price is greater than the cost price, calculate the profit as the difference between the selling price and the cost price.
//    - If the selling price is less than the cost price, calculate the loss as the difference between the cost price and the selling price.
//    - If the selling price equals the cost price, there is neither profit nor loss.
// 4. **Output**:
//    - If there's a profit, display the profit amount and the profit percentage.
//    - If there's a loss, display the loss amount and the loss percentage.
//    - If there's neither profit nor loss, indicate it.
// 5. **End**
// This algorithm outlines the steps to determine profit or loss based on the cost price and selling price provided by the user in C.

