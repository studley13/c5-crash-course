/*
 * fun4.c
 *
 * Demonstration of copying pointers to arrays
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * change changes the value of a string, displaying
 * it before and after changing it.
 */
void change (char *);

/*
 * Show that copied array pointers allow for change
 */
int main (void) {
    char word[] = "Happy";

    printf("word is %s\n", word);
    change(word);
    printf("word is %s\n", word);

    return EXIT_SUCCESS;
}

void change (char *text) {
    printf("text is %s\n", text);
    text[0] = 'S';
    printf("text is %s\n", text);
}
