#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for(int j=i;j<=(2*i-1);j++)
        {
            printf("%d",j);
        }
        for(int j=(2*i-2);j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}