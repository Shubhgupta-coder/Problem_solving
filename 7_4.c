#include<stdio.h>

int xstrcmp(char *p , char *q)
{
    while(*p==*q)
    {
        if(*p=='\0')
        {
            return 0;
        }
        p++;
        q++;
    }
    return *p-*q;
}


int palin(char *p)
{
    char *q;
    q=p;
    while(*q!='\0')
    {
        q++;
    }
    q--;
    while(*p==*q && p<q)
    {
        p++;
        q--;
    }
    if(p>=q)
    {
        return 1;
    }
    else{
        return 0;
    }
}

    
void main()
{
    char a[10], b[10];
    printf("enter the firsts tsring \n");
    scanf("%s",a);

     printf("enter the firsts tsring \n");
    scanf("%s",a);
     printf("enter the second  tsring \n");
    scanf("%s",b);

    int l=xstrcmp(a,b);
    if(l==0)
   {
    printf("equal \n");
   }
   else
   {
    printf("not equal");
   }
   
}