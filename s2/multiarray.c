/*
 * multiarray.c
 *
 * Multi-dimensional array example
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {

    // This array has multiple dimensions
    int multiArray [][3] = {{0, 1, 2},
                            {3, 4, 5},
                            {6, 7, 8}};

    // Display array sizes
    printf("Outer array size: %lu\n", sizeof(multiArray));
    printf("Inner array size: %lu\n", sizeof(multiArray[0]));

    // Display array values
    printf("Array[0][0]: %d\n", multiArray[0][0]);
    printf("Array[1][1]: %d\n", multiArray[1][1]);
    printf("Array[2][2]: %d\n", multiArray[2][2]);
    return EXIT_SUCCESS;
}
