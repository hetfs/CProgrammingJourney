# range of basic data type

Problem Description
Write a C Program to find the range of basic data types.

Problem Solution

1. Convert the bytes into bits.
2. For signed data types, use formula -2(n-1) to (2(n-1)) – 1.
3. For unsigned data types, use formula 0 to (2n) – 1. Where n is the number of bits in both the cases.

There are two ways to write a C program to find the fundamentals of basic data types:
Find the Range of Datatype without using C Library
Find the Range of Datatype using C Library

**Method 1: (Without using C Library)**
In this approach, we find the range of basic data types manually without using C library.

```c
#include <stdio.h>
#define SIZE(x) sizeof(x)*8

//  C Program to Print the Range of Datatypes
 
void signed_one(int);
void unsigned_one(int);
 
void main()
{
    printf("range of int");
    signed_one(SIZE(int));
 
    printf("\nrange of unsigned int");
    unsigned_one(SIZE(unsigned int));
 
    printf("\n\nrange of char");
    signed_one(SIZE(char));
 
    printf("\nrange of unsigned char");
    unsigned_one(SIZE(unsigned char));
 
    printf("\n\nrange of short");
    signed_one(SIZE(short));
 
    printf("\nrange of unsigned short");
    unsigned_one(SIZE(unsigned short));
}
 
/* RETURNS THE RANGE SIGNED*/
void signed_one(int count)
{
    int min, max, pro;
    pro = 1;
    while (count != 1)
    {
        pro = pro << 1;
        count--;
    }
    min = ~pro;
    min = min + 1;
    max = pro - 1;
    printf("\n%d to %d", min, max);
}
 
/* RETURNS THE RANGE UNSIGNED */
void unsigned_one(int count)
{
    unsigned int min, max, pro = 1;
 
    while (count != 0)
    {
        pro = pro << 1;
        count--;
    }
    min = 0;
    max = pro - 1;
    printf("\n%d to %d", min, max);
}

1. Convert the number of bytes into bits by multiplying the bytes with 8.
2. Use two functions namely signed_one() and unsigned_one() for calculating the range of signed and unsigned data types respectively.
3. Value got at step 1 is sent as a parameter to both the functions. In both the function, it is received by variable count.
4. Initialize the variable pro to 1 in both the functions.
5. In the function signed_one() using while loop with the condition (count != 1), shift the variable pro to its left by 1 position and decrement the variable count by 1 consecutively.
6. When the loop terminates, assign the complement of pro to the variable min and increment the min by 1. Decrement the variable pro and assign it to the variable max. Print min and max as output.
7. In the function unsigned_one() using while loop with the condition (count !=0), shift the variable pro to its left by 1 position and decrement the variable count by 1 consecutively.
8. When the loop terminates, assign zero to the variable min. Decrement the variable pro and assign it to the variable max. Print min and max as output.

Example:
Consider, the range of signed char data type. For signed range, signed_one function will be called. Size of char is 1 byte = 8 bits. So, the value of count = 8. Run the while loop until count becomes 1. Initially the value of pro variable is set to 1. Enter the while loop and left shift the value of pro at each iteration. As the value of count initially is 8 and loop terminates at count = 1. So, left shift will occur 7 times, the decimal value of which is equal to 128. Store complement of pro variable in min variable and increment it’s value by 1 i.e., min = -128. In the max variable store the value of (pro-1) i.e., max = 127. Print the value of min and max as range of char data type.


// Method 2: (Using C Library)
// C Program to Print the Range of Datatypes using C library
// In this approach, we find the range of basic data types using C library.
//  The header file “limits.h”

```c
#include <stdio.h>
#include <limits.h>

void main()
{
    printf("Range of signed int \n%d to %d", INT_MIN, INT_MAX);
    printf("\nRange of unsigned int \n0 to %u\n\n", UINT_MAX);
 
    printf("Range of signed char \n%d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char \n0 to %d\n\n", UCHAR_MAX);
 
    printf("Range of signed short int \n%d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int \n0 to %d\n\n", USHRT_MAX);
 
    printf("Range of signed long int \n%ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int \n0 to %lu\n\n", ULONG_MAX);
}
```

In this approach we are directly using inbuilt C Libraries. The header file “limits.h” is used to find minimum and maximum constants of integer and character data type.

All the C library used in the above program are called macros.

INT_MIN = represents minimum integer value i.e. (-2147483648)
INT_MAX = represents maximum integer value i.e. (2147483647)
UNIT_MAX = represents maximum integer value of unsigned numbers i.e. (0 to 4294967295)
SCHAR_MIN = represents minimum character value i.e. (-128)
SCHAR_MAX = represents maximum character value i.e. (127)
UCHAR_MAX = represents maximum character value of unsigned characters i.e. (0 to 255)
SHRT_MIN = represents minimum value for an object of type short int i.e (-32768)
SHRT_MAX = represents maximum value for an object of type short int i.e. (32767)
USHRT_MAX = SHRT_MIN = represents maximum value for an object of type unsigned short int i.e. (0 to 65535)
LONG_MIN = represents minimum value for an object of type long int i.e. (-2147483648)
LONG_MAX = represents maximum value for an object of type long int i.e. (2147483647)
ULONG_MAX = SHRT_MIN = represents maximum value for an object of type unsigned long int i.e. (0 to 4294967295)

[C Program](https://www.sanfoundry.com/c-program-print-range/#:~:text=For%20signed%20data%20types%2C%20use,bits%20in%20both%20the%20cases.)
