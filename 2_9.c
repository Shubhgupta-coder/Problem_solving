#include<stdio.h>
int main()
{
    int i,j;
    for(int i=1;i<=5;i++)
    {
        if(i<=3)
        {

            for(j=1;j<=(2*i)-1;j++)
            {
                printf("*");
            }
        }
        
        else{
            int k=i;
                
            for(int l=1;l<=(11-2*k);l++)
            {

                printf("*");
            }
            
           
        }
        printf("\n");
    }
    return 0;
}