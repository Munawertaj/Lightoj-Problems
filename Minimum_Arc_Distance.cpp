//  https://lightoj.com/problem/minimum-arc-distance

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define ll long long
#define nl endl
using namespace std;
double dis(double x1, double y1, double x2, double y2)
{
    double res;
    res = pow((x1 - x2), 2) + pow((y1 - y2), 2);
    res = sqrt(res);
    return res;
}
double ang(double a, double b)
{
    double res;
    res = 1 - (0.5 * pow((b / a), 2));
    res = acos(res);
    return res;
}

int main()
{
    double ox, oy, ax, ay, bx, by, res, angle, r, d;
    int i, t;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        r = dis(ox, oy, ax, ay);
        d = dis(ax, ay, bx, by);
        angle = ang(r, d);
        res = r * angle;
        printf("Case %d: %0.8lf\n", i, res);
    }
    return 0;
}