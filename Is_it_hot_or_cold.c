#include <stdio.h>
int main() 
{
	int i,t,x;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d",&x);
        if(x>20)
        {
            printf("HOT\n");
        }
        else
        {
            printf("COLD\n");
        }
    }
	return 0;
}
/* Problem
Chef considers the climate HOT if the temperature is above 2020, otherwise he considers it COLD. You are given the temperature CC, find whether the climate is HOT or COLD.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains a single integer, the temperature CC.
Output Format
For each test case, print on a new line whether the climate is HOT or COLD.

You may print each character of the string in either uppercase or lowercase (for example, the strings hOt, hot, Hot, and HOT will all be treated as identical).
*/
