#include <stdio.h>
int main()
{
    int i, j;
    char c;
    for (int i = 1; i <= 5; i++)
    {
        c= 70 - i;
        for (int j = 1; j <= i; j++)
        {
            printf(" %c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
