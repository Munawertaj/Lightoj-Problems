//  https://lightoj.com/problem/higher-math

#include <stdio.h>
void rightangle(int a[4])
{
    long long int x, y;
    int i, j, t;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    x = a[0] * a[0] + a[1] * a[1];
    y = a[2] * a[2];
    if (x == y)
        printf("yes\n");
    else
        printf("no\n");
}
int main()
{
    int t, i, a[4], j, big = 0;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[j]);
        printf("Case %d: ", i);
        rightangle(a);
    }
    return 0;
}