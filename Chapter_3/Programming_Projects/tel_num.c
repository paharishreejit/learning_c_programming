/****************************************************************************************
 * Name: tel_num.c                                                                      *
 * Purpose: Formats the telephone number in the form (xxx) xxx-xxxx to xxx.xxx.xxxx     *
 * Author: Shreejit Pahari                                                              *
 ****************************************************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int chunk1, chunk2, chunk3;
    scanf("(%d) %d-%d", &chunk1, &chunk2, &chunk3);

    printf("You entered %d.%d.%d\n", chunk1, chunk2, chunk3);

    return 0;
}
