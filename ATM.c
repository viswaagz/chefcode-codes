#include <stdio.h>
int main() 
{
	int i,t,x;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d",&x);
        if(x<=15)
        {
            printf("YES LOW\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}

/*Problem
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US.

Calculate Pooja's account balance after an attempted transaction.

Input
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

Output
Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.

Example - Successful Transaction
Input:
30 120.00

Output:
89.50
*/

