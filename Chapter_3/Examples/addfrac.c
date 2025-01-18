/* **************************************
 * Name: addfrac.c                      *
 * Purpose: Adds two fractions          *
 * Author: Shreejit Pahari              *
 ****************************************/


#include <stdio.h>

int main(void) {
    printf("Enter two fractions separated by a plus sign: ");
    int numerator1, numerator2;
    int denominator1, denominator2;
    scanf("%d/%d+%d/%d", &numerator1, &denominator1, &numerator2, &denominator2);

    int result_numerator = numerator1 * denominator2 
                     + numerator2 * denominator1;
    int result_denominator = denominator1 * denominator2;
    printf("The sum is %d/%d.\n", result_numerator, result_denominator);

    return 0;
}
