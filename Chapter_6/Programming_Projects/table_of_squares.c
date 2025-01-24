/**********************************************************
 * Name: square2.c                                        *
 * Purpose: Prints a table of squares using an odd method.*
 * Author: Shreejit Pahari                                *
 **********************************************************/

#include <stdio.h>

int main(void) {
    int n, odd, square = 1;

    printf("This program printis a table of squares . \n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    odd = 3;
    for (int i = 1; i <= n; odd += 2, ++i) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}