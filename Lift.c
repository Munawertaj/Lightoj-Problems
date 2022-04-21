//  https://lightoj.com/problem/lift

#include <stdio.h>
int main()
{
    int t, i, x, y, a;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &x, &y);
        if (x <= y)
            a = 19 + 4 * y;
        else
            a = 19 + 8 * x - 4 * y;
        printf("Case %d: %d\n", i, a);
    }
    return 0;
}