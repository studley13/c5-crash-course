/*
 * struct.c
 *
 * An example of how structs work in C
 *
 * Author:  Curtis Millar
 * Date:    19 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

struct color {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
};

int main (void) {
    // Create struct and set initial values
    struct color myColor = {
                        .red   = 0x99,
                        .green = 0x42,
                        .blue  = 0xEF, 
                        .alpha = 0xFF
        };

    // Print color as hex
    printf("My color is #%02hhX%02hhX%02hhX%02hhX\n",
        myColor.red, myColor.green, myColor.blue,
        myColor.alpha);

    // Create a pointer to the struct
    struct color *colorPointer = &myColor;

    // Change colour using "stab" operator
    colorPointer->red = 0x26;
    colorPointer->green = 0x07;
    colorPointer->blue = 0x44;

    // Display color again
    printf("My color is #%02hhX%02hhX%02hhX%02hhX\n",
        myColor.red, myColor.green, myColor.blue,
        myColor.alpha);

    return EXIT_SUCCESS;
}
