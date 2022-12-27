// Temp < 0 then Freezing weather	
// 13
// Temp 0-10 then Very Cold weather	
// 14
// Temp 10-20 then Cold weather	
// 15
// Temp 20-30 then Normal in Temp	
// 16
// Temp 30-40 then Its Hot	
// 17
// Temp >=40 then Its Very Hot
#include<stdio.h>
int main()
{
    int temp;
    printf("enter the temp \n");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("freezing weather \n");
    }
    if(temp>=0 && temp<10)
    {
        printf("very cold weather \n");
    }
    if(temp>=10 && temp<20)
    {
        printf(" cold weather \n");
    }
    if(temp>=20 && temp<30)
    {
        printf("Normal weather \n");
    }
    if(temp>=30 && temp<40)
    {
        printf("Hot weather \n");
    }
    if(temp>=40)
    {
        printf("very hot");
    }
return 0;
}