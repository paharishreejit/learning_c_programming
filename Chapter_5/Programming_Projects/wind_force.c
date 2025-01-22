/************************************************************************
 * Name: wind_force.c                                                   *
 * Purpose: Estimates the wind force by using a Simplified version of   *
 * Beaufort scale                                                       *
 * Author: Shreejit Pahari                                              *
 ************************************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter wind speed (in knots): ");
    short speed;
    scanf("%hd", &speed);

    if (speed < 1)
        printf("Calm\n");
    else if (speed < 3)
        printf("Light air\n");
    else if (speed < 27)
        printf("Breeze\n");
    else if (speed < 47)
        printf("Gale\n");
    else if (speed < 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");
    
    return 0;
}