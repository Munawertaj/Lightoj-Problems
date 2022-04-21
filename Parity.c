//  https://lightoj.com/problem/parity

#include <stdio.h>
int bin(long long int n)
{
    long long int r = 0, i = 1;
    int x, c = 0;
    while (n != 0)
    {
        x = n % 2;
        if (x == 1)
            c++;
        n = n / 2;
        r = r + x * i;
        i = i * 10;
    }
    return c;
}
int main()
{
    long long int t;
    int j, m, k;
    scanf("%d", &m);
    for (j = 1; j <= m; j++)
    {
        scanf("%lld", &t);
        k = bin(t);
        if (k % 2 == 0)
            printf("Case %d: even\n", j);
        else
            printf("Case %d: odd\n", j);
    }
    return 0;
}