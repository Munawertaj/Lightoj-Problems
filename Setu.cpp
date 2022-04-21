//  https://lightoj.com/problem/setu

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#define ll long long
#define nl endl
using namespace std;
int main()
{
    int i, t, j, k, l, q;
    ll res, am;
    char s[40], ch[10];
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << nl;
        res = 0;
        cin >> q;
        scanf("%*c");
        while (q--)
        {
            k = 0;
            fgets(s, 35, stdin);
            if (s[0] == 'd')
            {
                l = strlen(s);
                for (j = 7; j < l; j++)
                    ch[k++] = s[j];

                ch[k] = '\0';

                am = atoi(ch);
                res = res + am;
            }
            if (s[0] == 'r')
                cout << res << nl;
        }
    }
    return 0;
}