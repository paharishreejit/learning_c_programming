/********************************************************
 * Name: product_info_formatter.c                       *
 * Purpose: Formats product info entered by the user.   *
 * Author: Shreejit Pahari                              *
 ********************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter item number: ");
    int itemNumber;
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    float price;
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    char date[10];
    scanf("%s", &date);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%-5d $%12.2f \t%s", itemNumber, price, date);

    return 0;
}
