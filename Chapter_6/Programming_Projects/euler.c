/*******************************************************************
 * Name: euler.c                                                   *
 * Purpose: Calculates the value of euler's number, with the given *
 * precision as entered by the user.              .                *
 * Author: Shreejit Pahari                                         *
 *******************************************************************/

#include <stdio.h>

int main(void) {
    printf("n: ");
    long n;
    scanf("%ld", &n);

    double e = 0.0;
    int factorial;

    for (int i = 0; i <= n; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        e += 1.00 / factorial;
    }

    printf("e = %lf", e);

    return 0;
}