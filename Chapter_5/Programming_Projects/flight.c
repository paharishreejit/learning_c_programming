/********************************************************************
 * Name: flight.c                                                   *
 * Purpose: Shows the departure time and arrival time of            *
 * flight closest to the departure time that is entered by the user.*
 * Author: Shreejit Pahari                                          *
 ********************************************************************/

#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int departureTimes[] = {480, 583, 679, 767, 840, 945, 1140, 1035};
    int arrivalTimes[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    const int numFlights = sizeof(departureTimes) / sizeof(departureTimes[0]);

    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    int userTime = hours * 60 + minutes;

    int closestFlight = 0; 
    int minDifference = abs(departureTimes[0] - userTime); 

    for (int i = 1; i < numFlights; i++) {
        int diff = abs(departureTimes[i] - userTime);
        if (diff < minDifference) {
            minDifference = diff;
            closestFlight = i;
        }
    }

    int depHours = departureTimes[closestFlight] / 60;
    int depMins = departureTimes[closestFlight] % 60;
    char depMeridiem = (depHours >= 12) ? 'P' : 'A';
    depHours = (depHours > 12) ? depHours - 12 : depHours; 
    depHours = (depHours == 0) ? 12 : depHours; 

    int arrHours = arrivalTimes[closestFlight] / 60;
    int arrMins = arrivalTimes[closestFlight] % 60;
    char arrMeridiem = (arrHours >= 12) ? 'P' : 'A';
    arrHours = (arrHours > 12) ? arrHours - 12 : arrHours; 
    arrHours = (arrHours == 0) ? 12 : arrHours; 

    printf("Closest departure time is %d:%.2d %cM, arriving at %d:%.2d %cM\n", 
           depHours, depMins, depMeridiem, arrHours, arrMins, arrMeridiem);

    return 0;
}