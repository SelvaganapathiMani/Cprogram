#include <stdio.h>
int main()
{
    int c[2],max=0,i;
    for(i=0;i<=2;i++)
    {
        scanf("%d",&c[i]);
    }
     for(i=0;i<=2;i++){
        if(max<c[i])
        {
            max=c[i];
        }
    }
    printf("%d",max);

    return 0;
}
