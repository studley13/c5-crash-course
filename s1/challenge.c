/*
 * challenge.c
 *
 * Some challenges.
 *
 * Make a guess as to what the outcomes of each of the
 * tests here will be. Then, run and compile the
 * program. See if you can figure out why the tests did
 * or didn't do what you expected, then fix them to all
 * pass as TRUE.
 *
 * Author:  Curtis Millar
 * Date:    18 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {

    /*
     * Test 1: This should be obvious
     */

    printf("Test  1: ");

    if (2 >= 1) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    /*
     * Test 2: Mixed Types I
     */

    int      test2_a = 12;
    long int test2_b = 32;

    printf("Test  2: ");

    if (test2_a < test2_b) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    /*
     * Test 3: Mixed Types II
     */

    int      test3_a =  12;
    long int test3_b = -32;

    printf("Test  3: ");

    if (test3_a > test3_b) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    /*
     * Test 4: Mixed Types III
     */

    unsigned int test4_a =  12;
    long int     test4_b = -32;

    printf("Test  4: ");

    if (test4_a > test4_b) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    /*
     * Test 5: Mixed Types IV
     */

    int               test5_a = -12;
    unsigned long int test5_b =  32;

    printf("Test  5: ");

    if (test5_a < test5_b) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    /*
     * Test 6: Mixed Types V
     */

    char           test6_a = -32;
    unsigned short test6_b =  12;

    printf("Test  6: ");

    if (test6_a < test6_b) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    /*
     * Test 7: Mixed Constants I
     */

    int test7_a = -32;

    printf("Test  7: ");

    if (test7_a < 2) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    
    /*
     * Test 8: Mixed Constants II
     */

    unsigned long test8_a = -32;

    printf("Test  8: ");

    if (test8_a < 2) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    
    /*
     * Test 9: Mixed Constants III
     */

    unsigned char test9_a = 32;

    printf("Test  9: ");

    if ((test9_a - 48) < 2) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    /*
     * Test 10: sizeof
     */

    long int test10_a = 64;

    printf("Test 10: ");

    if (test10_a > (sizeof(char) - 12)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }


    return EXIT_SUCCESS;
}
