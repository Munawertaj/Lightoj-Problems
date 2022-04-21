//  https://lightoj.com/problem/greetings-from-lightoj

#include <stdio.h>
int main()
{
    int a[126][2], i, j, b[126], n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        b[i] = a[i][0] + a[i][1];
    }
    for (i = 1; i <= n; i++)
    {
        printf("Case %d: %d\n", i, b[i]);
    }
    return 0;
}