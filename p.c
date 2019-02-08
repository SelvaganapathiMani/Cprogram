#include<stdio.h>
int main()
{
    int n,mul,d=0,i;
    scanf("%d",&n);
    int m=n;
    while(n>0)
    {   mul=n%10;
        d=d*10+mul;
        n=n/10;
    }
    if(m==d)
    {
     printf("yes");
    }
    else
    {
     printf("no");
     }
     return 0;
}
