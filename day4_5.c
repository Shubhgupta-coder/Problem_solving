#include <stdio.h>
int prime(int n, int x)
{
    int i, j;

    for (int i = n + 1; i <= x - 1; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d \n", i);
        }
    }
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    prime(n, x);
}