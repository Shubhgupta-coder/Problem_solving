#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter the no. of row \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
        printf(" ");
    }
    return 0;
}