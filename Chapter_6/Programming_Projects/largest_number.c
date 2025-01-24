/********************************************************************************
 * Name: largest_number.c                                                       *
 * Purpose: Finds the largest number in series of numbers entered by the user.  *
 * Author: Shreejit Pahari                                                      *
 ********************************************************************************/

#include <stdio.h>

int main(void) {
    float number;
    float largestNumber = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (largestNumber < number)
            largestNumber = number;
    } while (number > 0.0f);

    printf("Ther largest number entered was %f", largestNumber);

    return 0;
}