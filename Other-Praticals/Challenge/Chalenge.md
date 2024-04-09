# Lab Exercise

**NOTE:**
> WAP means to write a program

1. WAP to input two numbers from the keyboard and print their sum.
2. WAP to input two numbers from the keyboard and print their average3.
3. WAP to calculate the area of a circle.
4. WAP to print the total seconds in a given time (hrs, min, sec’s).
5. WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9
6. WAP to SWAP (interchange) two numbers.
7. WAP to SWAP (interchange) 2 numbers without using third variable.
8. WAP to SWAP (interchange) three numbers.
9. WAP to SWAP three numbers without using fourth variable.
10. WAP to calculate the remainder of 2 numbers without using % operator.
11. Wap calculates the number of hours, minutes, and remaining seconds given a total number of seconds.

> **Check the `Lab-0001-Introduction` folder for the solutions(source code)**

## Ex1_Sum_Two_Number

***Algorithm***

1. **Start**: Begin the execution of the program.
2. **Declare Variables**: Declare integer variables `a`, `b`, and `sum`.
3. **Initialize sum**: Initialize the variable `sum` to 0.
4. **Input First Number**: Display a prompt to the user to enter the first number.
5. **Read First Number**: Read the first number entered by the user and store it in the variable `a`.
6. **Input Second Number**: Display a prompt to the user to enter the second number.
7. **Read Second Number**: Read the second number entered by the user and store it in the variable `b`.
8. **Calculate Sum**: Calculate the sum of the two numbers by adding `a` and `b` and store the result in the variable `sum`.
9. **Output Sum**: Display the sum of the two numbers.
10. **End**: End the execution of the program.

***Source code***

```c
#include <stdio.h>
//numbers from the keyboard and print their sum.
int main(void){

    int a, b;
    int sum = 0;

    printf("Enter first numeber: ");
    scanf("%d,", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum is %d", sum);

    return 0;
}
```

## Ex2_Average_Number

***Algorithm***  

1. **Start**: Begin the execution of the program.
2. **Declare Variables**: Declare two integer variables `a` and `b` to store the input numbers and an integer variable `average` to store their average.
3. **Input First Number**: Display a prompt to the user to enter the first number.
4. **Read First Number**: Read the first number entered by the user and store it in the variable `a`.
5. **Input Second Number**: Display a prompt to the user to enter the second number.
6. **Read Second Number**: Read the second number entered by the user and store it in the variable `b`.
7. **Calculate Average**: Calculate the average of the two numbers by adding `a` and `b` and dividing the sum by 2. Store the result in the variable `average`.
8. **Output Average**: Display the average of the two numbers.
9. **End**: End the execution of the program.

***Source code***

```c
 #include <stdio.h>
// input two numbers from the keyboard and print their average

int main() {

    int a, b;

    printf("Enter First number: ");
    scanf("%d", &a);

    printf("Enter Second number:");
    scanf("%d", &b);

    int average = (a + b) / 2;
    printf("The average of %d and %d is %d", a, b, average);
    
    return 0;
}
```

## Ex3_Area_of_a_Circle

***Algorithm***

1. **Start**: Begin the execution of the program.
2. **Declare Variables**: Declare two float variables `radius` and `area` to store the radius and the calculated area of the circle, respectively.
3. **Input Radius**: Display a prompt to the user to enter the radius of the circle.
4. **Read Radius**: Read the radius entered by the user and store it in the variable `radius`.
5. **Calculate Area**: Calculate the area of the circle using the formula `area = PI * radius * radius`, where `PI` is a constant defined as 3.14159.
6. **Output Area**: Display the calculated area of the circle.
7. **End**: End the execution of the program.

***Source code***

```c
#include <stdio.h>

// simple program in C to calculate the area of a circle.
// formula: area = PI * radius * radius;

#define PI 3.14159

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
```

## Ex4_Total_Sconds_in_given_Time

***Algorithm***  

1. Start the program.
2. Declare integer variables `hours`, `minutes`, `seconds`, and `totalSeconds`.
3. Prompt the user to enter the number of hours.
4. Read the input for hours using `scanf` and store it in the `hours` variable.
5. Prompt the user to enter the number of minutes.
6. Read the input for minutes using `scanf` and store it in the `minutes` variable.
7. Prompt the user to enter the number of seconds.
8. Read the input for seconds using `scanf` and store it in the `seconds` variable.
9. Calculate the total number of seconds by multiplying `hours` by 3600 (number of seconds in an hour), `minutes` by 60 (number of seconds in a minute), and adding `seconds`.
10. Store the result in the `totalSeconds` variable.
11. Display the total number of seconds calculated using `printf`.
12. End the program.

***Source code***

```c
#include <stdio.h>

// simple C program that calculates the total seconds in a given time (hours, minutes, seconds)

int main() {
    int hours, minutes, seconds, totalSeconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
```

## Ex5_Converting_Fahrenheit_to_centigrade

***Algorithm***

1. Start the program.
2. Declare two float variables `fahrenheit` and `celsius`.
3. Ask the user to input the temperature in Fahrenheit.
4. Read the input temperature in Fahrenheit using `scanf` and store it in the variable `fahrenheit`.
5. Convert the temperature from Fahrenheit to Celsius using the formula: Celsius = (Fahrenheit - 32) * 5 / 9.
6. Store the result in the variable `celsius`.
7. Display the converted temperature in Celsius with two decimal places using `printf`.
8. End the program.

***Source code***

```c
#include <stdio.h>

// convert temperature from Fahrenheit to Celsius using the formula: 
// Celsius = (Fahrenheit - 32) * 5 / 9;

int main() {
    float fahrenheit, celsius;

    // Ask user to input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
```

## Ex6_Swap_Interchange_Two_Numbers

***Algorithm***  

1. Start the program.
2. Declare three integer variables `a`, `b`, and `temp`.
3. Prompt the user to enter two numbers to swap.
4. Read the input numbers using `scanf` and store them in variables `a` and `b`.
5. Display the values of `a` and `b` before swapping.
6. Store the value of `a` in `temp`.
7. Assign the value of `b` to `a`.
8. Assign the value of `temp` to `b`, effectively swapping the values.
9. Display the values of `a` and `b` after swapping.
10. End the program.

***Source code***

```c
#include <stdio.h>

int main() {
    int a, b, temp;
  
    printf("Enter two numbers to swap:\n");
    scanf("%d %d", &a, &b);
  
    printf("Before swapping: a = %d, b = %d\n", a, b);
  
    temp = a;
    a = b;
    b = temp;
  
    printf("After swapping: a = %d, b = %d\n", a, b);
  
    return 0;
}
```

## Ex7_Swap_Two_Numbers_without_Using_Third_variable

***Algorithm***

1. Start the program.
2. Declare two integer variables `a` and `b`.
3. Prompt the user to enter two numbers to swap.
4. Read the input numbers using `scanf` and store them in variables `a` and `b`.
5. Display the values of `a` and `b` before swapping.
6. Swap the values of `a` and `b` without using a third variable:
   - Add `a` and `b` and store the result in `a`.
   - Subtract the original value of `b` from the new value of `a` and store the result in `b`.
   - Subtract the original value of `b` from the new value of `a` and store the result in `a`.
7. Display the values of `a` and `b` after swapping.
8. End the program.

***Source code***

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers to swap:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
```

## Ex8_Swap_Interchange_Three_Numbers

***Algorithm***

1. Start the program.
2. Declare three integer variables `a`, `b`, and `c`.
3. Prompt the user to enter three numbers to swap.
4. Read the input numbers using `scanf` and store them in variables `a`, `b`, and `c`.
5. Display the values of `a`, `b`, and `c` before swapping.
6. Swap the values of `a`, `b`, and `c` using the interchange method:
   - Store the value of `a` in a temporary variable `temp`.
   - Assign the value of `b` to `a`.
   - Assign the value of `c` to `b`.
   - Assign the value of `temp` to `c`.
7. Display the values of `a`, `b`, and `c` after swapping.
8. End the program.

***Source code**

```c
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers to swap:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    // Swapping using interchange method
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
```

## Ex9_Swap_Three_Numbers_without_Using_Fourth_variable

***Algorithm***

1. Start the program.
2. Declare three integer variables `a`, `b`, and `c`.
3. Prompt the user to enter three numbers to swap.
4. Read the input numbers using `scanf` and store them in variables `a`, `b`, and `c`.
5. Display the values of `a`, `b`, and `c` before swapping.
6. Swap the values of `a`, `b`, and `c` without using a fourth variable:
   - Add `a`, `b`, and `c`, and store the sum in `a`.
   - Subtract the sum of `b` and `c` from `a` and store the result in `b`.
   - Subtract the sum of `b` and `c` from `a` and store the result in `c`.
   - Subtract the sum of `b` and `c` from `a` and store the result in `a`.
7. Display the values of `a`, `b`, and `c` after swapping.
8. End the program.

***Source code***

```c
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers to swap:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    // Swapping without using a fourth variable
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
```

## Ex10_Remainder_calculator

***Algorithm***  

1. Declare four integer variables: `dividend`, `divisor`, `quotient`, and `remainder`.
2. Prompt the user to enter the value of the dividend.
3. Read and store the value of the dividend entered by the user in the variable `dividend`.
4. Prompt the user to enter the value of the divisor.
5. Read and store the value of the divisor entered by the user in the variable `divisor`.
6. Calculate the quotient by dividing the dividend by the divisor and store it in the variable `quotient`.
7. Calculate the remainder without using the modulo operator by subtracting the product of `quotient` and `divisor` from `dividend`, and store it in the variable `remainder`.
8. Display the calculated remainder.
9. End the program.

***Source code***

```c
#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    // Input the dividend and divisor
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate quotient and remainder without using modulo operator
    quotient = dividend / divisor;
    remainder = dividend - (quotient * divisor);

    // Display the remainder
    printf("Remainder: %d\n", remainder);

    return 0;
}
```

## Ex11_calculates_number_of_hours

***Algorithm***

1. Declare integer variables `totalSeconds`, `hours`, `minutes`, `seconds`, and `remainingSeconds`.
2. Prompt the user to enter the total number of seconds.
3. Read and store the inputted value in the variable `seconds`.
4. Calculate the number of hours by dividing `seconds` by 3600 (the number of seconds in an hour) and store it in the variable `hours`.
5. Calculate the number of minutes by subtracting the hours converted to seconds from `seconds`, then dividing the result by 60 (the number of seconds in a minute), and store it in the variable `minutes`.
6. Calculate the remaining seconds by finding the remainder of dividing `seconds` by 3600, then finding the remainder of dividing the result by 60, and store it in the variable `remainingSeconds`.
7. Display the result in the format "You have: [hours] H : [minutes] M : [remainingSeconds] S".
8. End the program.

***Source code***

```c
#include <stdio.h>

int main(void) {
    int totalSeconds, hours, minutes, seconds, remainingSeconds;
    
     
   

    printf("Enter Seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60;
    remainingSeconds = (seconds - hours * 3600) % 60;

    printf("You have: %d H : %d M : %d S\n", hours, minutes, remainingSeconds);

    return 0;
} 
```

> **Dirty your Hands!!!    Dirty your Hands!!!    Dirty your Hand!!!s**
