//  https://lightoj.com/problem/knights-in-chessboard

#include <stdio.h>
int main()
{
    int t, m, n, i;
    long long int result, y, x;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &m);
        x = n * m;
        if (m == 1 || n == 1)
            result = x;
        else if (m == 2 || n == 2)
        {
            y = x % 8;
            if (y == 6)
                result = (x + 2) / 2;
            else
                result = y + (x - y) / 2;
        }
        else if (x % 2 == 0)
            result = x / 2;
        else
            result = 1 + (x / 2);
        printf("Case %d: %lld\n", i, result);
    }
    return 0;
}