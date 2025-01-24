/********************************************************
 * Name: sum.c                                          *
 * Purpose: Sums a series of numbers.                   *
 * Author: Shreejit Pahari                              *
 ********************************************************/

#include <stdio.h>

int main(void) {
    printf("This program sums a series of integers.\n");
    
    int sum = 0;
    int number;
    printf("Enter integers (0 to terminate): ");
    do {
        scanf("%d", &number);

        sum += number;
    } while (number != 0);

    printf("The sum is = %d", sum);
    
    return 0;
}