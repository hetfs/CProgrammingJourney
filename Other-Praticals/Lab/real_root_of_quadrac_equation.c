#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (both roots are equal)
        root1 = root2 = -b / (2 * a);
        printf("Roots are: %.2f and %.2f\n", root1, root2);
    } else {
        // No real roots (roots are complex)
        printf("No real roots exist.\n");
    }

    return 0;
}
