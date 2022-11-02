#include <stdio.h>
int main() 
{
    int i,t,x,h;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d%d",&x,&h);
        if(x==h && x>0&&h>0)
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


