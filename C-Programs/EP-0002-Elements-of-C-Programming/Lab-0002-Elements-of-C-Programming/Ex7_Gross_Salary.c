#include <stdio.h>

int main() {
    float basicSalary, da, hra, grossSalary;

    // Input basic salary
    printf("Enter Mr. Harish's basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate DA (40% of basic salary)
    da = 0.4 * basicSalary;

    // Calculate HRA (20% of basic salary)
    hra = 0.2 * basicSalary;

    // Compute gross salary
    grossSalary = basicSalary + da + hra;

    // Output the gross salary
    printf("Mr. Harish's gross salary is: %.2f\n", grossSalary);

    return 0;
}
