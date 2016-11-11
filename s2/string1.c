/*
 * string1.c
 *
 * Example of how strings work in C
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {
    // Create an array of characters ending with 0
    char string[] = {'T', 'o', 'a', 's', 't', '!', 0};

    // Display the size of the array
    printf("Size of character array is %lu\n", sizeof(string));

    // Get the length of the array as number of chars
    int length = sizeof(string) / sizeof(char);
    int c;

    // Loop through array displaying each value
    for (c = 0; c < length; c++) {
        printf("[%2d] = %3hhd %02x %c\n", c,
            string[c], string[c], string[c]);
    }

    // Display the string
    printf("The string is %s\n", string);

    return EXIT_SUCCESS;
}
