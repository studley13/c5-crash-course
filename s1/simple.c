/*
 * simple.c
 *
 * Examples of some basic arithmetic that C can perform.
 *
 * Author:  Curtis Millar
 * Date:    18 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {
    // Integer arithmetic
    int iNumber = 13;

    printf("iNumber is currently %d.\n", iNumber);

    // Multiplication
    iNumber = 3 * 4;
    printf("iNumber is currently %d.\n", iNumber);

    // Addition
    iNumber += 7;
    printf("iNumber is currently %d.\n", iNumber);

    // Subtraction
    iNumber -= 6;
    printf("iNumber is currently %d.\n", iNumber);

    // Division
    iNumber /= 2;
    printf("iNumber is currently %d.\n", iNumber);

    // Floating arithmetic
    double fNumber = 12.0;
    printf("fNumber is currently %0.6lf.\n", fNumber);

    fNumber = 12 + 18.3;
    printf("fNumber is currently %0.6lf.\n", fNumber);

    fNumber *= iNumber;
    printf("fNumber is currently %0.6lf.\n", fNumber);

    return EXIT_SUCCESS;
}
