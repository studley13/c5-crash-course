/*
 * guessing.c
 *
 * A simple guessing game.
 *
 * Author: Curtis Millar
 * Date:    18 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

#define FALSE 0
#define TRUE (!FALSE)

int main (void) {
    int toGuess = 169;
    int guess = 0;
    int guessed = FALSE;

    printf("I am thinking of a number... guess what it is\n");

    // Guess one
    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess < toGuess) {
        printf("Higher\n\n");
    } else if (guess > toGuess) {
        printf("Lower\n\n");
    } else {
        printf("Correct!\n\n");
        guessed = TRUE;
    }

    // Guess two
    if (!guessed) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < toGuess) {
            printf("Higher\n\n");
        } else if (guess > toGuess) {
            printf("Lower\n\n");
        } else {
            printf("Correct!\n\n");
            guessed = TRUE;
        }
    }

    // Guess three
    if (!guessed) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess != toGuess) {
            printf("Incorrect. Better luck next time.\n\n");
        } else {
            printf("Correct!\n\n");
            guessed = TRUE;
        }
    }

    return EXIT_SUCCESS;
}
