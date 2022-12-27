//  1
//  2 3
  // 3 4 5
 //   4 5 6 7





#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j<=(2*i-1);j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}