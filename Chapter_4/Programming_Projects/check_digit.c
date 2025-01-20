/****************************************************
 * Name: check_digit.c                              *
 * Purpose: Calculates the check digit of any EAN.  *
 * Author: Shreejit Pahari                          *
 ****************************************************/


#include <stdio.h>

void scanEAN(int* EAN) {
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
            &EAN[0], &EAN[1], &EAN[2], &EAN[3], &EAN[4], &EAN[5],
            &EAN[6], &EAN[7], &EAN[8], &EAN[9], &EAN[10], &EAN[11]);
}

int calculateCheckDigit(const int* EAN) {
    int sumOfOddPlaces = EAN[1] + EAN[3] + EAN[5] + EAN[7] + EAN[9] + EAN[11];
    int sumOfEvenPlaces = EAN[0] + EAN[2] + EAN[4] + EAN[6] + EAN[8] + EAN[10];

    int total = sumOfOddPlaces * 3 + sumOfEvenPlaces;
    int checkDigit = 9 - ((total - 1) % 10);

    return checkDigit;
}

int main(void) {
    printf("Enter the first 12 digits of an EAN: ");
    int EAN[12];
    scanEAN(EAN);
    
    printf("Check digit: %d.", calculateCheckDigit(EAN));

    return 0;
}
