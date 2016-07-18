/*
 * typeDouble.c
 *
 * A program that doubles the values of different types.
 *
 * Author:  Curtis Millar
 * Date:    18 July 2016
 */

#include <stdlib.h>
#include <stdio.h>

int main (void) {

    char     smallest =                 64;
    short    small    =              16384;
    int      normal   =         0x40000000;
    long int large    = 0x4000000000000000;
    
    // Look at the smallest type
    printf("The smallest is a     char, with size of %lu.\n", sizeof(smallest));
    printf("It has a decimal value of %+20hhd and a hexadecimal value of %16hhX\n", smallest, smallest);
    
    printf("Now we double it...\n");
    
    smallest *= 2;
    printf("It has a decimal value of %+20hhd and a hexadecimal value of %16hhX\n", smallest, smallest);
    printf("Now we double it again...\n");
    
    smallest *= 2;
    printf("It has a decimal value of %+20hhd and a hexadecimal value of %16hhX\n\n", smallest, smallest);

    
    // Look at the small    type
    printf("The small    is a    short, with size of %lu.\n", sizeof(small));
    printf("It has a decimal value of %+20hd and a hexadecimal value of %16hX\n", small   , small   );
    
    printf("Now we double it...\n");
    
    small    *= 2;
    printf("It has a decimal value of %+20hd and a hexadecimal value of %16hX\n", small   , small   );
    printf("Now we double it again...\n");
    
    small    *= 2;
    printf("It has a decimal value of %+20hd and a hexadecimal value of %16hX\n\n", small   , small   );
    
    // Look at the normal   type
    printf("The normal   is a      int, with size of %lu.\n", sizeof(normal));
    printf("It has a decimal value of %+20d and a hexadecimal value of %16X\n", normal  , normal  );
    
    printf("Now we double it...\n");
    
    normal   *= 2;
    printf("It has a decimal value of %+20d and a hexadecimal value of %16X\n", normal  , normal  );
    printf("Now we double it again...\n");
    
    normal   *= 2;
    printf("It has a decimal value of %+20d and a hexadecimal value of %16X\n\n", normal  , normal  );
    
    // Look at the large    type
    printf("The large    is a long int, with size of %lu.\n", sizeof(large));
    printf("It has a decimal value of %+20ld and a hexadecimal value of %16lX\n", large   , large   );
    
    printf("Now we double it...\n");
    
    large    *= 2;
    printf("It has a decimal value of %+20ld and a hexadecimal value of %16lX\n", large   , large   );
    printf("Now we double it again...\n");
    
    large    *= 2;
    printf("It has a decimal value of %+20ld and a hexadecimal value of %16lX\n\n", large   , large   );

    return EXIT_SUCCESS;
}
