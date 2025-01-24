/**********************************************************
 * Name: calendar.c                                       *
 * Purpose: Prints a calendar based on user input.        *
 * Author: Shreejit Pahari                                *
 **********************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("Enter number of days in month: ");
    int days;
    scanf("%d", &days);

    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    int startingDay;
    scanf("%d", &startingDay);

    for (int i = 1; i < startingDay; i++) printf("\t");

    int absoluteDayCount = startingDay;    
    for (int day = 1; day <= days; day++) {
        printf("%d\t", day);
        if (absoluteDayCount++ % 7 == 0)
            printf("\n");
    }

    return 0;
}