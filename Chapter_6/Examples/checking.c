/********************************************************
 * Name: checking.c                                     *
 * Purpose: Balances a checkbook                        *
 * Author: Shreejit Pahari                              *
 ********************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("*** ACME checkbook-balancing program ***\n");
    
    float balance = 0.0F;
    while (true)
    {
        printf("Commands:-\n0 -> clear\n1 -> credit\n2 -> debit\n3 -> balance\n4 -> exit\n");

        printf("Enter command: ");
        int cmd;
        scanf("%d", &cmd);

        float credit = 0.0F, debit = 0.0F;
        switch (cmd)
        {
        case 0:
            balance = 0.0F;
            break;
        case 1:
            printf("Enter amount of credit: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter amount of debit: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
        case 3:
            printf("Current balance = $%.2f\n", balance);
            break;
        case 4:
            printf("Thank you for using our program!\nExitting...");
            return 0;
        default:
            printf("Are you suffering from LUMBAGO!!\nENTER A VALID COMMAND!!\n");
            break;
        }
    }
}