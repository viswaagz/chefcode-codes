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
Chef's phone shows a Battery Low notification if the battery level is 15 \%15% or less.

Given that the battery level of Chef's phone is X \%X%, determine whether it would show a Battery low notification.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains a single line of input, an integer XX, denoting the battery level of the phone.
Output Format
For each test case, output in a single line \texttt{Yes}Yes, if the battery level is 15 \%15% or below. Otherwise, print \text{No}No.

You may print each character of \texttt{Yes}Yes and \text{No}No in uppercase or lowercase (for example, \texttt{YeS}YeS, \texttt{YES}YES, \texttt{yes}yes will be considered identical).
*/

