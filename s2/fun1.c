/*
 * fun1.c
 *
 * Demonstration of an example function
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * stringLength returns the length of a string.
 */
int stringLength (char string[]) {
    // Calculate based on space in memory
    int length = sizeof(string) / sizeof(char);

    return length;
}

/*
 * Find the lengths of three strings.
 */
int main (void) {
    // String as an array
    char string1[] = "firstString";
    // String as a pointer to array
    char *string2 = "secondString";

    printf("Size of \"%s\" is %d\n", string1, stringLength(string1));
    printf("Size of \"%s\" is %d\n", string2, stringLength(string2));
    // Length of string literal
    printf("Size of \"%s\" is %d\n", "thirdString", stringLength("thirdString"));

    return EXIT_SUCCESS;
}
