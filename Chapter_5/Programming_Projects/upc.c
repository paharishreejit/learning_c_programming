/************************************************************
 * Name: upc.c                                              *
 * Purpose: Computes a Universal Prodect Code check digit   *
 * Author: Shreejit Pahari                                  *
 ************************************************************/

#include <stdio.h>
#include <stdbool.h>

void acceptFiveDigits(const char* prompt, short* nums)
{
    printf("%s ", prompt);
    scanf("%1hd%1hd%1hd%1hd%1hd", (nums), (nums + 1), (nums + 2),
                                  (nums + 3), (nums + 4));
}

bool isValid(short checkDigit, short unverifiedCheckDigit)
{
    if (checkDigit == unverifiedCheckDigit)
        return true;
    else
        return false;
}

int main(void)
{
    printf("Enter the first(single) digit: ");
    short digit1;
    scanf("%hd", &digit1);

    short group1[5];
    acceptFiveDigits("Enter the first group of five digits: ", group1);

    short group2[5];
    acceptFiveDigits("Enter the second group of five digits: " , group2);

    printf("Enter the last digit: ");
    short uncheckedCheckDigit;
    scanf("%hd", &uncheckedCheckDigit);

    int sumOfDigitsAtOddPlaces = digit1 + group1[1] + group1[3] + group2[0] + group2[2] + group2[4];
    int sumOfDigitsAtEvenPlaces = group1[0] + group1[2] + group1[4] + group2[1] + group2[3];

    int total = sumOfDigitsAtOddPlaces * 3 + sumOfDigitsAtEvenPlaces;

    short checkDigit = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", checkDigit);

    if (isValid(checkDigit, uncheckedCheckDigit))
        printf("VALID\n");
    else
        printf("INVALID\n");
        
    return 0;
}
