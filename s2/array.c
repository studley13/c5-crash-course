/*
 * array.c
 *
 * Demonstrate how an array works
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {
    // Create an array of 10 ints
    int numArray[10] = {21, 22, 23, 24, 25, 26};

    // Display elements
    printf("Element %d is %d\n", 0, numArray[0]);
    printf("Element %d is %d\n", 1, numArray[1]);
    printf("Element %d is %d\n", 3, numArray[3]);
    printf("Element %d is %d\n", 7, numArray[7]);
    printf("Element %d is %d\n", 0, *numArray);
    printf("Element %d is %d\n", 3, *(numArray + 3));
    printf("Size of array is %lu\n", sizeof(numArray));

    // New array
    int smallArray[] = {12, 13, 14, 15};
    printf("Size of array is %lu\n", sizeof(smallArray));

    return EXIT_SUCCESS;
}
