/****************************************************
 * Name: income_tax.c                               *
 * Purpose: Calculates the income tax of a person.  *
 * Author: Shreejit Pahari                          *
 ****************************************************/

#include <stdio.h>

int main(void) {
    printf("Income: ");
    int income;
    scanf("%d", &income);

    double tax = 0;
    if (income < 750.0)
        tax = 0.01 * income;
    else if (income < 2250.0)
        tax = 7.50 + 0.02 * (income - 750.0);
    else if (income < 3750.0)
        tax = 37.50 + 0.03 * (income - 2250.0);
    else if (income < 5250.0)
        tax = 82.50 + 0.04 * (income - 3750.0);
    else if (income < 7000.0)
        tax = 142.50 + 0.05 * (income - 5250.0);
    else
        tax = 230.00 + 0.06 * (income - 7000.0);

    printf("Tax Due = $%.2lf", tax);

    return 0;
}