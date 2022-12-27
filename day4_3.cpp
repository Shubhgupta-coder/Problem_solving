#include<stdio.h>
// int fact(int x)
// {
//     if(x==1 || x== 0)
//     {
//         return 1;
//     }
//     else{
//         return x*fact(x-1);
//     }
// }
int fact (int a , int b)
{
    if (b==0 || b==1 )
    {
            return a;
    }
    else{
      fact(a*b,b-1);
    }
}


int main()
{
    int c;
    int n;
    scanf("%d",&n);
    c=fact(1,n);
    printf("%d",c);
}