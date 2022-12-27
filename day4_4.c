#include<stdio.h>
int perfect(int x, int y)
{
    int k,sum,j;
    for(k=x;k<=y;k++)
    {
        sum=0;
        for(j=1;j<=k/2;j++)
        {
            if(k%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==k)
        {
            printf("%d \n",k);
        }
    }
}
void main()
{
    int m,n;
    scanf("%d %d",& m ,& n);
    perfect(m,n);
}