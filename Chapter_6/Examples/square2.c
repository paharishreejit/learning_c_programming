/********************************************************
 * Name: square2.c                                      *
 * Purpose: Prints a table of squares using a statement.*
 * Author: Shreejit Pahari                              *
 ********************************************************/

#include <stdio.h>

int main(void) {
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    int entries;
    scanf("%d", &entries);

    for (int number = 1; number <= entries; number++) {
        printf("\t%d\t%d\n", number, number * number);
    }

    return 0;
}