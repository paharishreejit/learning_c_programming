/********************************************************************************
 * Name: gcd.c                                                                  *
 * Purpose: Asks the user to enter two integers, then calculates and displays   *
 * their greatest common divisor (GCD).                                         *
 * Author: Shreejit Pahari                                                      *
 ********************************************************************************/

#include <stdio.h>

// Euclid's algorithm --> K.N. King prescribed
int GCD(int m, int n) {
    while(n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    
    return m;
}

int main(void) {
    printf("Enter two integers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    /* My own application */
    // int highestCommonFactor;
    // for (int i = 1; i <= num1; i++) {
    //     if (num1 % i == 0 && num2 % i == 0)
    //         highestCommonFactor = i;
    // }

    int highestCommonFactor = GCD(num1, num2);
    printf("Greatest Common Divisor: %d\n", highestCommonFactor);

    return 0;
}