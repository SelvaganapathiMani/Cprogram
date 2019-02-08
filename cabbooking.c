#include <stdio.h>

int main()
{
    int s,d,p,r,t;
    printf("Enter the Source:");
    scanf("%d",&s);
    
    printf("Enter the Destination:");
    scanf("%d",&d);
    r=d-s;
    if(r>0)
    {
        printf("1.Mini\n2.Micro\n3.Praime\nEnter The Travel type:");
        scanf("%d",&t);
        switch(t)
        {
         case 1:
            p=r*2;
            printf("amount:%d",p);
            break;
         case 2:
            p=r*5;
            printf("amount:%d",p);
            break;
         case 3:
            p=r*7;
            printf("amount:%d",p);
            break;


        }
    }
    else
    {
        printf("Enter Valied Source and Destination");
    }

    return 0;
}
