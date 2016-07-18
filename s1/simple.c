/*
 * simple.c
 *
 * Some simple arithmetic with C.
 *
 * Author:  Curtis Millar
 * Date:    18 July 2016
 */
 
#include <stdlib.h>
#include <stdio.h>

int main (void) {

    char variable = 2;
    
    printf("variable: %hhd\n", variable);
    
    variable = 7 + 12;

    printf("variable: %hhd\n", variable);

    variable = 8 - 120;
    
    printf("variable: %hhd\n", variable);
    
    variable -= 40;
    
    printf("variable: %hhd\n", variable);
    
    return EXIT_SUCCESS;
}
