#include<stdio.h>
int main()
{
    int i,j;
    for(int i=1;i<=5;i++)
    {
        if(i<=3)
        {
            for(int j=1;j<=(7-(2*i));j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int k=1;k<=((2*i)-5);k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}