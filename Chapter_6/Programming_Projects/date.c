/****************************************************************
 * Name: date.c                                                 *
 * Purpose: It prompts the user to enter dates and then         *
 * indicates which date comes earlier on the calendar.          *
 * Author: Shreejit Pahari                                      *
 ****************************************************************/

#include <stdio.h>

int main(void) {
    int daysOfTheEarlierDate = 99;
    int monthsOfTheEarlierDate = 99;
    int yearsOfTheEarlierDate = 99;
    int days, months, years;
    
    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &days, &months, &years);
    while (days != 0 && months != 0 && years != 0) {
        if (years < yearsOfTheEarlierDate) {
            yearsOfTheEarlierDate = years;
            monthsOfTheEarlierDate = months;
            daysOfTheEarlierDate = days;
        }
        else if (years == yearsOfTheEarlierDate) {
            if (months < monthsOfTheEarlierDate) {
                monthsOfTheEarlierDate = months;
                daysOfTheEarlierDate = days;
            }
            else if (months == monthsOfTheEarlierDate) {
                if (days < daysOfTheEarlierDate) {
                    yearsOfTheEarlierDate = years;
                    monthsOfTheEarlierDate = months;
                    daysOfTheEarlierDate = days;
                }
            }
        }

        printf("Enter a date (dd/mm/yy): ");
        scanf("%d/%d/%d", &days, &months, &years);
    }
    printf("%.2d/%.2d/%.2d is the earliest date", daysOfTheEarlierDate, monthsOfTheEarlierDate, yearsOfTheEarlierDate);

    return 0;
}