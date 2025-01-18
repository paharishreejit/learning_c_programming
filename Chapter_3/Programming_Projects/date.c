/************************************************************************************
 * Name: date.c                                                                     *
 * Purpose: Accepts a date in form mm/dd/yyyy and displays it in the form yyyymmdd  *
 * Author: Shreejit Pahari                                                          *
 ************************************************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter a date (mm/dd/yyyy): ");
    int months, days, years;
    scanf("%d/%d/%d", &months, &days, &years);
    
    printf("You entered the date %d%d%d", years, months, days);

    return 0;
}
