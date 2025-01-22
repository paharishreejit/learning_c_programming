/****************************************************
 * Name: time_converter.c                           *
 * Purpose: Converts 24-hour time to 12-hour form.  *
 * Author: Shreejit Pahari                          *
 ****************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter a 24-hour time: ");
    int hours;
    int minutes;
    scanf("%d:%d", &hours, &minutes);

    if (hours > 12) {
        hours -= 12;
        printf("Eqivalent 12-hour time: %.2d:%.2d P.M.", hours, minutes);
    } 
    else if (hours == 0) {
        hours += 12;
        printf("Equivalent 12-hour time: %.2d:%.2d A.M.", hours, minutes);
    }
    else {
        printf("Equivalent 12-hour time: %.2d:%.2d A.M.", hours, minutes);
    }

    return 0;
}