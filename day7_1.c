#include<stdio.h>

int lenght(char *p)
{
    int count=0;
    while (*p!='\0')
    {
        p++;
        count++;
    }
    return count;
}
int main()
{
    char str[100];
    int n;
    printf("enter string \n");
    scanf("%s",str);
    n=lenght(str);
    printf("%d",n);

}