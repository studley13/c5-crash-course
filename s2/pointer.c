/*
 * pointer.c
 *
 * An example of how pointers work in C
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {
    // This stores the data for an int in memory
    int actualData = 42;

    // This stores the location of the data
    int *pointerData = &actualData;

    // Display the data
    printf("Actual data is:        %d\n", actualData);
    printf("Pointer data leads to: %d\n", *pointerData);

    // Modify the data
    *pointerData = 56;

    // Display the data
    printf("Actual data is:        %d\n", actualData);
    printf("Pointer data leads to: %d\n", *pointerData);

    // See the memory address
    printf("Actual data is at: %18p\n", &actualData);
    printf("Pointer data is:   %18p\n", pointerData);

    return EXIT_SUCCESS;
}
