# roots of a quadratic equation

The real roots of a quadratic equation are the values of \( x \) that satisfy the equation and are real numbers. A quadratic equation is in the form \( ax^2 + bx + c = 0 \), where \( a \), \( b \), and \( c \) are constants with \( a \neq 0 \). The number of real roots and their nature depend on the discriminant \( D = b^2 - 4ac \):

1. **Two Real and Distinct Roots**: If \( D > 0 \), the quadratic equation has two real and distinct roots. This happens when the graph of the quadratic equation intersects the x-axis at two distinct points.

2. **One Real Root**: If \( D = 0 \), the quadratic equation has one real root, where both roots are equal. In this case, the graph of the quadratic equation touches the x-axis at one point.

3. **No Real Roots**: If \( D < 0 \), the quadratic equation has no real roots. Instead, the roots are complex numbers. In this case, the graph of the quadratic equation does not intersect the x-axis.

Understanding the discriminant helps determine the number and nature of the roots of a quadratic equation[[1](https://www.mytutor.co.uk/answers/801/A-Level/Maths/Discriminants-and-determining-the-number-of-real-roots-of-a-quadratic-equation/)][[2](https://www.toppr.com/guides/maths/quadratic-equations/nature-of-roots/)].

To calculate the real roots of a quadratic equation \( ax^2 + bx + c = 0 \), you can use the following algorithm in C:

1. **Input Coefficients**: Prompt the user to input the coefficients \( a \), \( b \), and \( c \).

2. **Calculate Discriminant**: Calculate the discriminant \( D \) using the formula \( D = b^2 - 4ac \).

3. **Check Discriminant**:
   - If \( D > 0 \), there are two real and distinct roots.
   - If \( D = 0 \), there is one real root (both roots are equal).
   - If \( D < 0 \), there are no real roots (roots are complex).

4. **Calculate Roots**:
   - If \( D > 0 \), calculate the roots using the formulas \( x1 = \frac{{-b + \sqrt{D}}}{{2a}} \) and \( x2 = \frac{{-b - \sqrt{D}}}{{2a}} \).
   - If \( D = 0 \), calculate the root using the formula \( x = \frac{{-b}}{{2a}} \).

5. **Display Roots**: Output the real roots of the quadratic equation.

**Calculating real roots of a quadratic equation.**

Here is a sample implementation of the algorithm in C:

```c
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
```

This program prompts the user to input coefficients, calculates the discriminant, determines the type of
roots, calculates the roots accordingly, and then displays the roots.
