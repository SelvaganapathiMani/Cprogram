#include<stdio.h>
int main()
{
    int n,flag=1,i;
   scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {   flag=0;
            printf("Not Prime");
        }
    }
    if(flag==1)
    {
        printf("Prime");
    }
}
