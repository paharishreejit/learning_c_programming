/************************************************************
 * Name: palindrome.c                                       *
 * Purpose: Reverses the digits entered by the user.        *
 * Author: Shreejit Pahari                                  *
 ************************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    
    int temp = number;
    int reverse = 0;
    while (temp > 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    
    printf("The reversal is %d.", reverse);
    return 0;
}
