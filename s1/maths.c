/*
 * maths.c
 *
 * Some simple mathematics
 *
 * Author:  Curtis Millar
 * Date:    18 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {

    char variable = 2;
    int bigger = 0;

    printf("variable: %hhd\n", variable);

    variable = 7 + 12;

    printf("variable: %hhd\n", variable);

    variable = 8 - 120;

    printf("variable: %hhd\n", variable);

    variable -= 40;

    printf("variable: %hhd\n", variable);

    printf("bigger: %d\n", bigger);

    bigger = variable;

    printf("bigger: %d\n", bigger);

    bigger = 8 - 120;

    printf("bigger: %d\n", bigger);

    bigger -= 40;

    printf("bigger: %d\n", bigger);

    return EXIT_SUCCESS;
}
