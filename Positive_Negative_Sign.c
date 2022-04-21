//  https://lightoj.com/problem/positive-negative-sign

#include <stdio.h>
int main()
{
    int t, i;
    long long int n, m, r;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lld %lld", &n, &m);
        r = (m * n) / 2;
        printf("Case %d: %lld\n", i, r);
    }
    return 0;
}