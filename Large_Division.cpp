//  https://lightoj.com/problem/large-division

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define ll long long
#define ull unsigned long long
#define nl endl
using namespace std;
double pi = acos(-1);
int main()
{
    ll mod, b;
    int x, t, i, j, l;
    char a[205];
    cin >> t;
    scanf("%*c");
    for (i = 1; i <= t; i++)
    {
        mod = 0;
        j = 0;
        scanf("%s", a);
        cin >> b;

        l = strlen(a);

        if (a[0] == '-')
            j = 1;
        for (; j < l; j++)
        {
            x = a[j] - '0';
            mod = mod * 10 + x;
            mod = mod % b;
        }
        if (mod == 0)
            cout << "Case " << i << ": "
                 << "divisible" << nl;
        else
            cout << "Case " << i << ": "
                 << "not divisible" << nl;
    }
    return 0;
}