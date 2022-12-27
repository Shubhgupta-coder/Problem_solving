#include <stdio.h>
int main()
{
    int i, j;
    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    for (int i = 1; i <= 6; i++)
    {
        if (i == 1 || i == 2)
        {
            for (int j = 5; j >= 1; j--)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        else
        {
            for(int j=1;j<=(i-2);j++)
            {
                printf(" ");
            }
            int k=5-i+2;
            
            for (int j = 1; j <= (7 - i); j++)
            {
                printf("%d",k);
                k--;
            }
            
            printf("\n");
        }
    }
}