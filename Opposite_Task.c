//  https://lightoj.com/problem/opposite-task

#include <stdio.h>
int main()
{
    int t, n, a, b, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n <= 10)
        {
            a = n;
            b = 0;
        }
        else
        {
            a = 10;
            b = n - 10;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}