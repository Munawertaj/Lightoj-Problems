//  https://lightoj.com/problem/pinocchio

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define ll long long
#define nl endl
using namespace std;
double pi = acos(-1);
int main()
{
    int t, i, j, a[11], count, n, dif;
    cin >> t;
    a[0] = 2;
    for (i = 1; i <= t; i++)
    {
        count = 0;
        cin >> n;
        for (j = 1; j <= n; j++)
        {
            cin >> a[j];
        }
        for (j = 1; j <= n; j++)
        {
            dif = a[j] - a[j - 1];
            if (dif > 0 && dif < 6)
                count++;
            else if (dif > 5)
            {
                if (dif % 5 == 0)
                    count = count + (dif / 5);
                else
                    count = 1 + count + (dif / 5);
            }
            else
                continue;
        }
        printf("Case %d: %d\n", i, count);
    }
    return 0;
}