/************************************************
 * Name: simplify_fractions.c                   *
 * Purpose: Reduces a fraction to lowest terms. *
 * Author: Shreejit Pahari                      *
 ************************************************/

#include <stdio.h>

int GCD(int m, int n) {
    while(n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    
    return m;
}

int main(void) {
    printf("Enter a fraction: ");
    int num, denom;
    scanf("%d/%d", &num, &denom);

    int hcf = GCD(num, denom);
    num /= hcf;
    denom /= hcf;

    printf("In lowest terms: %d/%d", num, denom);

    return 0;
}