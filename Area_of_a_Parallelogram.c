//  https://lightoj.com/problem/area-of-a-parallelogram

#include <stdio.h>
#include <math.h>
long int area(int a[9])
{
    long int r, i, x = 0, y = 0;
    i = 1;
    while (i < 6)
    {
        x = x + a[i] * a[i + 3];
        y = y + a[i + 2] * a[i + 1];
        i = i + 2;
    }
    x = x + a[7] * a[2];
    y = y + a[1] * a[8];
    r = abs((x - y) / 2);
    return r;
}
int main()
{
    int a[9], t, x, y, i, j = 1;
    long int ar;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        j = 1;
        while (j < 7)
        {
            scanf("%d", &a[j]);
            j++;
        }
        a[7] = a[1] - a[3] + a[5];
        a[8] = a[2] - a[4] + a[6];
        ar = area(a);
        printf("Case %d: %d %d %ld\n", i, a[7], a[8], ar);
    }
    return 0;
}