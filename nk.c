#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,k;
    scanf("%d%d",&n,&k);
     for(i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
     }
     
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
    }
     for(i=1;i<=n;i++)
     {
         if(a[i]==sum)
         {
              printf("%d",sum);
         }
     }
    return 0;
}
