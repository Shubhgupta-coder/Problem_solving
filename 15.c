#include <stdio.h>
int main()
{
    int i, j, n, l, h, m, A[100][100];
    printf("enter the value of n \n");
    scanf("%d", &n);
    m=n;
    l = 0;
    h = 2 * n - 1;
      
    while (n > 0)
    {
        for (i = l; i < h; i++)
        {
            for (j = l; j < h; j++)
            {
                if (i == l || i == h - 1 || j == l || j == h-1)
                {
                    A[i][j] = n;
                }
            }
        }
            l++;
            n--;
            h--;
        
    }
    n=m;
        for (i = 0; i < ((2 * n) - 1); i++)
        {
            for (j = 0; j < ((2 * n) - 1); j++)
            {
                printf(" %d", A[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
