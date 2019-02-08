#include<stdio.h>
int main()
{
    int n,mul,d=1,i;
    scanf("%d%d",&mul,&n);
    for(i=1;i<=n;i++)
    {
        d=d*mul;
    }
     printf("%d",d);
    return 0;
}
