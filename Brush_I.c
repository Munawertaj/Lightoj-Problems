//  https://lightoj.com/problem/brush-1

#include <stdio.h>
int main()
{
    int t, n, a[1001], i, j, sum;
    scanf("%d", &t);
    for (j = 1; j <= t; j++)
    {
        sum = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < 0)
                a[i] = 0;
            sum = sum + a[i];
        }
        printf("Case %d: %d\n", j, sum);
    }
    return 0;
}