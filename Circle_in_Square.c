//  https://lightoj.com/problem/circle-in-square

#include <stdio.h>
#include <math.h>
int main()
{
    double pi, r, a;
    int t, i;
    pi = 2 * acos(0.0);
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lf", &r);
        a = (4 - pi) * r * r;
        printf("Case %d: %0.2lf\n", i, a);
    }
    return 0;
}