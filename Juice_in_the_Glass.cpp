//  https://lightoj.com/problem/juice-in-the-glass

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define ll long long
#define nl endl
using namespace std;
double pi = acos(-1);
double rad(double r1, double r2, double h, double p)
{
    double x;
    x = (1 - p / h) * (r1 - r2);
    return r1 - x;
}
double vol(double h, double r1, double r2)
{

    double x;
    x = (pi * h) * ((r1 * r1) + (r2 * r2) + (r1 * r2));
    return x / 3;
}
int main()
{
    int t, i;
    double r, x, res, r1, r2, h, p;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> r1 >> r2 >> h >> p;
        r = rad(r1, r2, h, p);
        res = vol(p, r2, r);
        printf("Case %d: %0.8lf\n", i, res);
    }
    return 0;
}