#include <stdio.h>
#include <time.h>

int main() {
    // Declare a variable to store the system time
    time_t currentTime;

    // Get the current time
    time(&currentTime);

    // Print the current time
    printf("Current time: %s", ctime(&currentTime));

    return 0;
}

// To get the system time in C programming language, you can use the `time()` function from the standard library `<time.h>`. Here's a basic example of how to use it:

// In this example, `time(&currentTime)` retrieves the current system time and stores it in the `currentTime` variable as a `time_t` type. Then, `ctime(&currentTime)` converts this time to a human-readable string format, which is printed using `printf()`. 

// This method provides the current system time, including both the date and time. You can format the output as needed using other time-related functions available in C.  




 

 
