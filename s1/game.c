/*
 * game.c
 *
 * Simple guessing game.
 *
 * Author:  Curtis Millar
 * Date:    18 July 2016
 */
 
#include <stdlib.h>
#include <stdio.h>

#define FALSE 0
#define TRUE  (!FALSE)

int main (void) {

    int toGuess = 53;
    int guess = 0;
    int guessed = FALSE;
    
    printf("I am thinking of a number.. guess what it is\n");
    
    printf("Enter your guess: ");
    scanf("%d", &guess);
    
    if (guess < toGuess) {
        printf("Higher\n");
    } else if (guess > toGuess) {
        printf("Lower\n");
    } else {
        printf("Correct\n");
        guessed = TRUE;
    }
    
    return EXIT_SUCCESS;
}
