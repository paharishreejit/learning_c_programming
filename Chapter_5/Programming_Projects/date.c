/****************************************************************
 * Name: date.c                                                 *
 * Purpose: It prompts the user to enter two dates and then     *
 * indicates which date comes earlier on the calendar.          *
 * Author: Shreejit Pahari                                      *
 ****************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("Enter first date (dd/mm/yy): ");
    int days1, months1, years1;
    scanf("%d/%d/%d", &days1, &months1, &years1);

    printf("Enter first date (dd/mm/yy): ");
    int days2, months2, years2;
    scanf("%d/%d/%d", &days2, &months2, &years2);

    bool isGreater = false;

    if (years1 > years2)
        isGreater = true;
    else if ( years2 > years1)
        isGreater = false;
    else {
        if (months1 > months2)
            isGreater = true;
        else if (months2 < months1)
            isGreater = false;
        else {
            if (days1 > days2)
                isGreater = true;
            else isGreater = false;
        }
    }

    if (!isGreater) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",
               days1, months1, years1, days2, months2, years2);
    } else {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",
               days2, months2, years2, days1, months1, years1);
    }

    return 0;
}