// Simple C program that calculates the number of hours, minutes, and remaining seconds given a total number of seconds.

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

/*
Here's a breakdown of how it works:

1. **Variable Declaration**: It declares four integer variables: `hours`, `minutes`, `seconds`, and `remainingSeconds`. These variables will store the calculated values.

2. **Input**: The program prompts the user to enter the total number of seconds.

3. **Calculation**: It calculates the number of hours, minutes, and remaining seconds from the input seconds using basic arithmetic operations:
   - `hours = seconds / 3600`: Calculates the number of hours by dividing the total seconds by 3600 (number of seconds in an hour).
   - `minutes = (seconds - hours * 3600) / 60`: Calculates the number of minutes by subtracting the seconds contributed by hours and then dividing by 60 (number of seconds in a minute).
   - `remainingSeconds = (seconds - hours * 3600) % 60`: Calculates the remaining seconds by finding the modulus of the seconds contributed by hours, giving the remainder after dividing by 60.

4. **Output**: It then prints the calculated values of hours, minutes, and remaining seconds in the format "H M S" (hours minutes seconds).

5. **Return**: Finally, the program returns 0, indicating successful execution.
*/