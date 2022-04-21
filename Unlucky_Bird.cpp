//  https://lightoj.com/problem/unlucky-bird

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int t, i;
    double v1, v2, v3, a1, a2, d, dis, t1, t2;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        d = ((a2 * v1 * v1) + (a1 * v2 * v2)) / (2 * a1 * a2);
        t1 = v1 / a1;
        t2 = v2 / a2;
        if (t1 > t2)
            dis = t1 * v3;
        else
            dis = t2 * v3;
        printf("Case %d: %.8lf %.8lf\n", i, d, dis);
    }
    return 0;
}