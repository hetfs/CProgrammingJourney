#include <stdio.h>

int main() {
    int a, b, c;

    // Accept three integer inputs from the user
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    // Convert each integer to a string
    char str_a[20], str_b[20], str_c[20];
    sprintf(str_a, "%d", a);
    sprintf(str_b, "%d", b);
    sprintf(str_c, "%d", c);

    // Concatenate the three strings
    char merged_str[60];
    sprintf(merged_str, "%s%s%s", str_a, str_b, str_c);

    // Convert the concatenated string back to an integer
    int merged_number;
    sscanf(merged_str, "%d", &merged_number);

    // Print the merged number
    printf("Merged number: %d\n", merged_number);

    return 0;
}
