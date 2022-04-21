//  https://lightoj.com/problem/february-29

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define ll long long
#define nl endl
using namespace std;
int leap(ll y)
{
    if (y % 400 == 0)
        return 1;
    else if (y % 100 == 0)
        return 0;
    else if (y % 4 == 0)
        return 1;
    else
        return 0;
}
long long int count(ll y1, ll y2)
{
    ll d, i, c = 0, res;
    if (y1 % 100 == 0)
        y1 = y1 / 100;
    else
        y1 = (y1 / 100) + 1;

    y2 = y2 / 100;
    d = y2 - y1;
    if (d < 4)
    {
        for (i = y1; i <= y2; i++)
        {
            if (i % 4 != 0)
                c++;
        }
        res = c;
    }
    else
    {
        while (1)
        {
            if (y1 % 4 == 0)
                break;
            y1++;
            c++;
        }
        while (1)
        {
            if (y2 % 4 == 0)
                break;
            y2--;
            c++;
        }

        res = 0.75 * (y2 - y1) + c;
    }
    return res;
}

int main()
{
    ll y1, y2, res, dif;
    int d1, d2, t, i, j, x, y;
    char m1[15], m2[15];
    cin >> t;
    scanf("%*c");
    for (i = 1; i <= t; i++)
    {
        scanf("%s  %d %*c  %lld", m1, &d1, &y1);
        scanf("%s  %d %*c  %lld", m2, &d2, &y2);
        if (m1[0] == 'F')
            y1 = y1;
        else if (m1[0] == 'J')
        {
            if (m1[1] != 'a')
                y1++;
        }
        else
            y1++;

        if (m2[0] == 'J')
        {
            if (m2[1] == 'a')
                y2--;
        }
        else if (m2[0] == 'F')
        {
            if (d2 < 29)
                y2--;
        }
        else
            y2 = y2;

        while (1)
        {
            x = leap(y1);
            if (x == 1)
                break;
            y1++;
        }
        while (1)
        {
            y = leap(y2);
            if (y == 1)
                break;
            y2--;
        }

        dif = y2 - y1;

        if (dif < 0)
            res = 0;
        else if (dif == 0)
            res = 1;
        else
            res = (dif / 4) + 1 - count(y1, y2);

        cout << "Case " << i << ": " << res << nl;
    }
    return 0;
}