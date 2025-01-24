/************************************************
 * Name: broker.c                               *
 * Purpose: Calculates a broker's commission    *
 * Author: Shreejit Pahari                      *
 ************************************************/

#include <stdio.h>

int main(void) {
    float value;
    
    do {
        printf("Enter the value of trade: ");
        scanf("%f", &value);

        if (value == 0) continue;
        
        float commission = 39.00f;
        
        if (value < 2500.00f)
            commission = 30.00f + 0.017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + 0.0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + 0.0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + 0.0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + 0.0011f * value;
        else
            commission = 255.00f + 0.0009f * value;

        printf("Commission: $%.2f\n", commission);
    } while (value != 0);
    
    return 0;
}