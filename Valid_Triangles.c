#include <stdio.h>
int main() 
{
    int i,t,x,h,z,j,k;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d%d%d",&x,&h,&z);
        j=x+h;
        k=j+z;
        if(k==180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}
/*
Problem
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three angles A, B and C, of the triangle separated by space.

Output
For each test case, display 'YES' if the triangle is valid, and 'NO', if it is not, in a new line.
Input
3
40 40 100
45 45 90
180 1 1

Output


YES
YES
NO
*/
