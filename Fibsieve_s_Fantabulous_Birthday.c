//  https://lightoj.com/problem/fibsieves-fantabulous-birthday

#include <stdio.h>
#include <math.h>
int main()
{
    long long int num, n, t, middle, x, y, d, i, p;
    scanf("%lld", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lld", &num);
        p = sqrt(num);
        if ((p * p) != num)
            p = p + 1;
        middle = p * (p - 1) + 1;
        d = abs(num - middle);
        d = abs(p - d);
        if (p % 2 == 0)
        {
            if (num >= middle)
            {
                x = p;
                y = d;
            }
            else
            {
                x = d;
                y = p;
            }
        }
        else
        {
            if (num >= middle)
            {
                y = p;
                x = d;
            }
            else
            {
                y = d;
                x = p;
            }
        }
        printf("Case %lld: %lld %lld\n", i, x, y);
    }
    return 0;
}