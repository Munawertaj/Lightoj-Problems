//  https://lightoj.com/problem/how-cow

#include <stdio.h>
int main()
{
    int t, m, x1, x2, y1, y2, a, b, j, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &m);
        printf("Case %d:\n", i);

        for (j = 0; j < m; j++)
        {
            scanf("%d %d", &a, &b);
            if (a >= x1 && a <= x2)
            {
                if (b >= y1 && b <= y2)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}