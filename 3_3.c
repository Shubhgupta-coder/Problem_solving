#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,f=1,s=1,p=1;
    printf("enter n \n");
    scanf("%d",&n);
    
    printf("enter x \n");
    scanf("%d",&x);
    for(int i=1;i<n;i++)
    {
       p= p*x;
       f=f*i;
       s=s+p/f;
    }
    printf("%d",s);
    return 0;
}