/********************************************************
 * Name: square.c                                       *
 * Purpose: Prints a table of squares using a statement.*
 * Author: Shreejit Pahari                              *
 ********************************************************/

#include <stdio.h>

int main(void) {
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    int entries;
    scanf("%d", &entries);

    int num = 1;
    while (num <= entries) {
        int square = num * num;
        printf("\t%d\t%d\n", num, square);
        num++;
    }

    return 0;
}