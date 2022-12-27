#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter no. of row \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            printf("*");
        }
        else
        {
                for(i=1;i<=n;i++)
                {
                    printf(" ");
                }
                 for(i=1;i<=n;i++)
                {
                    printf("*");
                }
        }
    }
} 