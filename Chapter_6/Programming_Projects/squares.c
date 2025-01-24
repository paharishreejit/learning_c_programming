/************************************************
 * Name: squares.c                              *
 * Purpose: Prints squares upto the given limit.*
 * Author: Shreejit Pahari                      *
 ************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter the limit: ");
    int limit;
    scanf("%d", &limit);

    int square = 1;
    for (int num = 1; square < limit; num++) {
        square = num * num;
        printf("%d\n", square);
    }

    return 0;
}
