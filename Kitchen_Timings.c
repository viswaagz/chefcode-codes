#include <stdio.h>
int main() {
    int a,x,y;
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        scanf("%d%d",&x,&y);
        int z = y-x;
        printf("%d\n",z);
    }

return 0;
}
/* Problem
The working hours of Chef’s kitchen are from XX pm to YY pm (1 \le X \lt Y \le 12)(1≤X<Y≤12).

Find the number of hours Chef works.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two space-separated integers XX and YY — the starting and ending time of working hours respectively.
Output Format
For each test case, output on a new line, the number of hours Chef works.
input 
4
1 2
3 7
9 11
2 10
output
1
4
2
8
*/
