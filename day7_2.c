#include<stdio.h>
int main()
{
    int n;
    char str[20];
    printf("ENTER STRING = ");
    scanf("%s",&str);
    n=length(str);
    printf("LENGTH = %d",n);
}

int length(char *p)
{
    int c=0;
    while (*p!='\0')
    {
        p++;
        c++;
    }
    return(c);
}

