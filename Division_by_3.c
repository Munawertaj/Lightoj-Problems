//  https://lightoj.com/problem/division-by-3

#include <stdio.h>
int main()
{
    int t;
    long long int a, b, j, i, k, count, m;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        count = 0;
        scanf("%lld %lld", &a, &b);
        k = b - a + 1;
        m = k % 3;
        count = 2 * (k / 3);
        if (m % 3 == 1)
        {
            if (b % 3 != 1)
                count++;
        }
        if (m % 3 == 2)
        {
            if (b % 3 != 1)
                count++;
            if ((b - 1) % 3 != 1)
                count++;
        }
        printf("Case %lld: %lld\n", i, count);
    }
    return 0;
}