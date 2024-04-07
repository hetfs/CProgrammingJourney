#include <stdio.h>

int main(void) {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  if (year % 400 == 0 || (year % 100!= 0 && year % 4 == 0)) {
    printf("%d is a leap year\n", year);
  } else {
    printf("%d is not a leap year\n", year);
  }

  return 0;
}

// Algorithm to determine if a given year is a leap year:

// 1. Start the program.
// 2. Prompt the user to enter a year.
// 3. Read the input year from the user.
// 4. Check if the input year is divisible by 400 without any remainder.
// 5. If step 4 is true, print that the year is a leap year.
// 6. If step 4 is false, check if the input year is not divisible by 100 and is divisible by 4 without any remainder.
// 7. If step 6 is true, print that the year is a leap year.
// 8. If step 6 is false, print that the year is not a leap year.
// 9. End the program.

// What is a Leap Year?
// A leap year is a year that occurs once every four years. Based on the Gregorian calendar, the theory is that a year is around 365.25 days long. But since we consider a year to be 365 days, the additional 0.25 days are added to the next calendar year, which brings the total to 1 day in the fourth year. Hence, instead of 365 days, a leap year is 366 days long. The additional day is added as the 29th of February.

// How to Find a Leap Year Using C?
// To find whether a year is a leap year or not using a leap year C program, all you need to do is enter some conditions (mathematical) in the program code with the help of If… Else statement; Following are the conditions to check if the given year is a leap year or not:

// The entered year must be divisible by 4
// The entered year must be divisible by 400 but not by 100
// The second condition is used to segregate the century years from leap years. Century years are the ones with the ’00s in the end, for instance, 1300, 1500, 1400 and likewise. A century year is considered to be a leap year only if it is evenly divisible by 400. For example, the years 1200, 1600, and 2000 are all century leap years since these numbers are perfectly divisible by 400.


#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}

// The given code is a set of conditional statements that determine whether a given year is a leap year or not. A leap year is a year that is divisible by 4, but not by 100, or is divisible by 400.

// The code first checks if the year is divisible by 4. If it is, then it is a leap year. If it is not divisible by 4, then the code checks if the year is divisible by 100. If it is, then it is not a leap year. If it is not divisible by 100, then the code checks if the year is divisible by 400. If it is, then it is a leap year. If it is not divisible by 400, then it is not a leap year.

// Here is a more detailed explanation of the code:

// ```
// if (year is not divisible by 4) then it is a common year
// ```

// This statement checks if the year is not divisible by 4. If it is not, then the year is a common year.

// ```
// else if (year is not divisible by 100) then it is a leap year
// ```

// This statement checks if the year is not divisible by 100. If it is not, then the year is a leap year.

// ```
// else if (year is not divisible by 400) then it is a common year
// ```

// This statement checks if the year is not divisible by 400. If it is not, then the year is a common year.

// ```
// else it is a leap year
// ```

// This statement is the default case. If the year is divisible by 4 and 100, but not by 400, then the year is a leap year.
