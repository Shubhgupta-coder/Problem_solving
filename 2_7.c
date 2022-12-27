#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        k=i;
        for(int j=1;j<=i;j++)
        {

            printf("%d",k);
            k--;
        }
            l=2;
        for(int j=i;j<=((2*i)-2);j++)
        {
            
            printf("%d",l);
            l++;
        }
            printf("\n");
    }
  return 0;  
}