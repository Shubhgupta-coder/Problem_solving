#include <stdio.h>

//     int r, sum = 0;
//     int temp = x;
//     while (x > 0)
//     {
//         r = x % 10;
//         sum = (sum * 10) + r;
//         x = x / 10;
//     }
//     x = temp;
//     if (x == sum)
//     {
//         printf("palindrome");
//     }
//     else
//     {
//         printf(" not palindrome");
//     }
int palindrome(int x, int y)
{
    if (y == 0)
    {
        // if (x == z)
        // {
        //     printf("palindrome");
        // }
        // else
        // {
        //     printf("not palindrome");
        // }
        return x;
    }
    palindrome(x * 10 + y % 10, y / 10);
}

int main()
{
    int c;
    int n;
    scanf("%d", &n);
    c = palindrome(0, n);
    printf("%d", c);
}