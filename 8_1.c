#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2,realpart,imaginarypart;
    printf("enter the cofficient of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;

    if (discriminant>0)
    {
        root1= ((-b)+ sqrt(discriminant))/(2*a);
        root2= ((-b)-sqrt(discriminant))/(2*a);
        printf("root1= %.2f and root2= %.2f",root1,root2);
     }

     // condition for real and equal roots
     else if(discriminant==0)
     {
         root1=root2=-b/(2*a);
         printf("root1=root2=%.2f %.2f,root1");
     }
     // condition for imaginary roots
     else{
            realpart=-b/(2*a);
            imaginarypart=sqrt(-discriminant)/(2*a);
            printf("root1=%.2f+%.2fi and root2=%.2f-%.2fi",realpart,imaginarypart,realpart,imaginarypart);
     }
     return 0;
}

    #include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    float x1, x2;
    float im;
    float re;
    printf("enter the cofficient of the quadratic equation:");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = ((-b) - sqrt(d)) / 2 * a;
        x2 = ((-b) + sqrt(d)) / 2 * a;
        printf("the roots are real and differnt whose values are %f and %f", x1, x2);
    }
    else if (d == 0)
    {
        x1 = ((-b) - sqrt(d)) / 2 * a;
        x2 = ((-b) + sqrt(d)) / 2 * a;
        printf("the roots are real and equal whose values are %f and %f", x1, x2);
    }
    else if (d < 0)
    {
        im = (sqrt(-d)) / 2;
        re = -(float)b / 2;
        printf("The roots are imaginary whole values are %f + i%f and %f - i%f", re, im, re, im);
    }
    return 0;
}