#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the points \n");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
    {
        printf("points lie in first quadrant \n");
    }
    if(y>0 && x<0)
    {
        printf("points lie in second quadrant \n");
    }
     if(y<0 && x<0)
    {
        printf("points lie in third quadrant \n");
    }

    if(y<0 && x>0)
    {
        printf("points lie in fourth quadrant \n");
    }
    return 0;
}