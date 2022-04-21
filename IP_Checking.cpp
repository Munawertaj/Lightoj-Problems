//  https://lightoj.com/problem/ip-checking

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
using namespace std;
char conv(int x)
{
    return ('0' + (x % 2));
}
int main()
{
    int num[4], i, t, j, k, x, c, res;
    char s[40], ch[1000];
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d %*c", &num[j]);
        }
        scanf("%d", &num[3]);
        cin >> s;
        j = 0;
        for (k = 0; k < 4; k++)
        {
            x = num[k];
            j = 7 + 9 * k;
            c = 9 * k;
            for (j; j >= c; j--)
            {
                ch[j] = conv(x);
                x = x / 2;
            }

            ch[j++] = '.';
        }

        ch[c + 8] = '\0';
        res = strcmp(s, ch);
        if (res == 0)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}