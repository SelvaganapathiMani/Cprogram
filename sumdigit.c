#include<stdio.h>
int main()
{
    int d,i,sum=0;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
