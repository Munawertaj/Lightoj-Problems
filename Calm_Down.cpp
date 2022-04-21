//  https://lightoj.com/problem/calm-down

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
    double R, r, ang, x;
    int t, i, n;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> R >> n;
        ang = (pi / n);
        x = sin(ang);
        r = (R * x / (1 + x));
        printf("Case %d: %0.8lf\n", i, r);
    }

    return 0;
}