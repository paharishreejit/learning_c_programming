/********************************************************************
 * Name: find_max.c                                                 *
 * Purpose: Find the greatest of four integers entered by the user. *
 * Author: Shreejit Pahari                                          *
 ********************************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter four integers: ");
    int numbers[4];
    scanf("%d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);

    int min = numbers[0];
    int max = numbers[0];

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}