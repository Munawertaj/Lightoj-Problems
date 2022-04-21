//  https://lightoj.com/problem/agent-j

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
double area(double a, double b, double c)
{
    double s, res;
    s = (a + b + c) / 2;
    res = sqrt(s * (s - a) * (s - b) * (s - c));
    return res;
}
double angle(double x, double y, double m)
{
    double res;
    res = acos((x * x + y * y - m * m) / (2 * x * y));
    return res;
}
double circle(double ang, double r)
{
    double ans;
    ans = (ang * r * r) / 2;
    return ans;
}
int main()
{
    double r1, r2, r3, s, a1, a2, a3, x1, x2, x3, tri, cir, res;
    int t, i;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> r1 >> r2 >> r3;
        a1 = r2 + r3;
        a2 = r1 + r3;
        a3 = r2 + r1;
        tri = area(a1, a2, a3);
        x1 = angle(a2, a3, a1);
        x2 = angle(a1, a3, a2);
        x3 = angle(a2, a1, a3);
        cir = circle(x1, r1) + circle(x2, r2) + circle(x3, r3);
        res = tri - cir;
        printf("Case %d: %0.8lf\n", i, res);
    }
    return 0;
}