#include<stdio.h>
int main()
{
    int f=1,i ,s=0,n;
    printf("enter n \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        s=s+f/i;


    }
    printf("%d",s);
   
}