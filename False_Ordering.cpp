//  https://lightoj.com/problem/false-ordering

#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cmath>
#define ll long long
#define nl endl
using namespace std;
int div(int n)
{
    int i, count = 0, x;
    x = sqrt(n);
    for (i = 1; i <= x; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}
int main()
{
    int t, i, arr[1001], j, k = 2, x, nm;
    arr[1] = 1;
    for (j = 2; j < 33; j++)
    {
        for (i = 1000; i > 1; i--)
        {
            x = div(i);
            if (x == j)
                arr[k++] = i;
        }
    }
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> nm;
        cout << "Case " << i << ": " << arr[nm] << nl;
    }
    return 0;
}