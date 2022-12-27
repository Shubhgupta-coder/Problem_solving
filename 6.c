#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 sides of a triangle \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&a==c)
    {
        printf("equilateral  triangle \n");
    }
    else if(a==b || a==c)
    {
        printf("isosceles triangle \n");
    }
    else {
        printf("scalene triangle ");
    }
    return 0;
}