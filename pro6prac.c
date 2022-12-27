#include<stdio.h>
int main()
{
   
    for(int i=1;i<=5;i++)
    {
        for(int j=1; j<=i;j++)
        {
            //printf("%d","*");
           //printf("%d",i);
          // printf("%d",j);
           // printf("%c",64+i);
           printf("%c",64+j);

        }
       
        printf("\n");
    }
    return 0;
}