/***********************************************************
 * Name: numdigits.c                                       *
 * Purpose: Calculates the number of digits on an integer. *
 * Author: Shreejit Pahari                                 *
 ***********************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter a non-negative integer: ");
    int number;
    scanf("%d", &number);

    int digits = 0;
    int copyOfNumber = number;

    while (copyOfNumber > 0) {
        copyOfNumber /= 10;
        digits++;
    }

    printf("The number has %d digit(s).\n", digits);

    return 0;
}