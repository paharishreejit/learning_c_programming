/********************************************************
 * Name: octal_ver1.c                                   *
 * Purpose: Converts a decimal number to octal in O(n)  *
 * but less convoluted than octal.c implementation, but *
 * does not yield expected results for large octal      *
 * equivalent (drawback).                               *
 * Author: Shreejit Pahari                              *
 ********************************************************/


#include <stdio.h>

int main(void) {
    printf("Enter a decimal number: ");
    long decimal;
    scanf("%ld", &decimal);

    long temp = decimal;
    long octal = 0;
    int place = 1;
    
    while (temp != 0) {
        short octalDigit = temp % 8;
        printf("digit = %d\n", octalDigit);
        octal += octalDigit * place;
        
        place *= 10;
        temp /= 8;
    }

    printf("In octal, your number is: %ld.", octal);

    return 0;
}
