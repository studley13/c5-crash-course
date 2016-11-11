#include <stdio.h>

int main (void) {
int array[] = {5, 6, 7, 8, 9, 10, 12, 13, 14};

// Set the first index to check
int index = 0;
int items = sizeof(array) / sizeof(int);

printf("array has %d items\n", items);

while (index < items) {
    printf("array[%d] is %d\n", index, array[index]);
    index++;
}
return 0;
}
