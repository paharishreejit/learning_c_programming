/****************************************************************
 * Name: alpha_digit                                            *
 * Purpose: Asks the user for a 2-digit no., then prints the    *
 * English word for the number                                  *
 * Author: Shreejit Pahari                                      *
 ****************************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter a two-digit number: ");
    int number;
    scanf("%d", &number);

    int tensDigit = number / 10;
    int onesDigit = number % 10;

    printf("You entered the number ");
    switch (tensDigit) {
        case 1:
            switch (onesDigit) {
                case 1: printf("eleven."); return 0;
                case 2: printf("twelve."); return 0;
                case 3: printf("thirteen."); return 0;
                case 4: printf("fourteen."); return 0;
                case 5: printf("fifteen."); return 0;
                case 6: printf("sixteen."); return 0;
                case 7: printf("seventeen."); return 0;
                case 8: printf("eighteen."); return 0;
                case 9: printf("nineteen."); return 0;
            }
            break;
        case 2: printf("twenty-"); break;
        case 3: printf("thirty-"); break;
        case 4: printf("fourty-"); break;
        case 5: printf("fifty-"); break;
        case 6: printf("sixty-"); break;
        case 7: printf("seventy-"); break;
        case 8: printf("eighty-"); break;
        case 9: printf("ninety-"); break;
        default: return 1;
    }
    
    switch (onesDigit) {
        case 1: printf("one.\n"); break;
        case 2: printf("two.\n"); break;
        case 3: printf("three.\n"); break;
        case 4: printf("four.\n"); break;
        case 5: printf("five.\n"); break;
        case 6: printf("six.\n"); break;
        case 7: printf("seven.\n"); break;
        case 8: printf("eight.\n"); break;
        case 9: printf("nine.\n"); break;
        default: return 1;
    }

    return 0;
}