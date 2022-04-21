//  https://lightoj.com/problem/old-sorting

#include <stdio.h>
int main()
{
    int n, a[101], i, k, count, te, result, y, j, x;
    scanf("%d", &te);
    for (k = 1; k <= te; k++)
    {
        count = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i <= n; i++)
        {
            if (a[i] != i)
            {
                y = a[i];
                for (j = i + 1; j <= n; j++)
                {
                    if (a[j] == i)
                        break;
                }
                a[j] = y;
                count++;
            }
        }
        printf("Case %d: %d\n", k, count);
    }
    return 0;
}