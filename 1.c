#include<stdio.h>
int main()
{
    float basic,hra,da,allow,pf,total;
    char c;
    printf("enter the basic salary");
    scanf("%f",&basic);
    fflush(stdin); //to clear the input buffer//
    printf("enter the grade");
    scanf("%c",&c);
    hra=0.2*basic;
    da=0.5*basic;

    if(c=='A')
    {
        allow=1700;
    }
   else if(c=='B')
   {
    allow=1500;
   }
    else{
       allow=1300;
    }
    pf=0.11*basic;
    total=basic+hra+da+allow-pf;
    printf("%f",total);
    return 0;

}