/**********************************************************
 * Name: square3.c                                        *
 * Purpose: Prints a table of squares using an odd method.*
 * Author: KN King                                        *
 **********************************************************/

#include <stdio.h>

int main(void) {
    int i, n, odd, square;

    printf("This program printis a table of squares . \n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }

    return 0;
}