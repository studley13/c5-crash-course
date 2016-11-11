/*
 * fun3.c
 *
 * Demonstration of arguments copying
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * change changes the value of a number, displaying
 * it before and after changing it.
 */
void change (int);

/*
 * Show that copied values don't get changed
 */
int main (void) {
    int number = 32;

    printf("number is %d\n", number);
    change(number);
    printf("number is %d\n", number);

    return EXIT_SUCCESS;
}

void change (int num) {
    printf("num is %d\n", num);
    num = 64;
    printf("num is %d\n", num);
}
