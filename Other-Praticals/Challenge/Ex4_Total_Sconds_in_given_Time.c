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


