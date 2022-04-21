//  https://lightoj.com/problem/sum-of-factorials

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
    ll fact[21], r = 1, n;
    int i, j, t, res[21], x, k;
    cin >> t;
    fact[0] = 1;
    for (i = 1; i < 21; i++)
    {
        r = r * i;
        fact[i] = r;
    }
    for (i = 1; i <= t; i++)
    {
        k = 0;
        x = 0;
        cin >> n;
        for (j = 20; j >= 0; j--)
        {
            if (n == fact[j])
            {
                res[k++] = j;
                x = 1;
                break;
            }
            else if (n > fact[j])
            {
                res[k++] = j;
                n -= fact[j];
            }
            else
                continue;
        }
        k--;
        cout << "Case " << i << ": ";
        if (x != 1)
            cout << "impossible" << nl;
        else
        {
            while (k > 0)
            {
                cout << res[k] << "!+";
                k--;
            }
            cout << res[0] << "!" << nl;
        }
    }
    return 0;
}
