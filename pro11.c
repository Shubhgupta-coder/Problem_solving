#include <stdio.h>
void main()
{
    int i, j, c;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (int j = 1; j <= 9-2*i; j++)
        {
            printf("  ");
        }
        c = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", c);
            c--;
        }
        c++;
        printf("\n");
    }

    return 0;
}