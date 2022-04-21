//  https://lightoj.com/problem/chocolate-thief

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define ll long long
#define nl endl
using namespace std;

int main()
{

    char s[101][21];
    int a, b, x, t, n, i, k, f, g, h, j;
    ll c[101], big, small;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> n;
        scanf("%*c");
        for (j = 0; j < n; j++)
        {
            x = 1;
            scanf("%s", s[j]);

            cin >> a >> b >> x;
            c[j] = a * b * x;
        }

        big = c[0];
        small = c[0];
        g = 0;
        h = 0;
        for (j = 1; j < n; j++)
        {
            if (c[j] > big)
            {
                big = c[j];
                g = j;
            }
            else if (c[j] < small)
            {
                small = c[j];
                h = j;
            }
        }
        if (big == small)
            cout << "Case " << i << ": no thief" << nl;
        else
            cout << "Case " << i << ": " << s[g] << " took chocolate from " << s[h] << nl;
    }
    return 0;
}