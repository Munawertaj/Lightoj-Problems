//  https://lightoj.com/problem/array-simulation

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int t, n, m, i, a[101], j, d, y, z, tem, k;
    char ch;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> n >> m;
        for (j = 0; j < n; j++)
            cin >> a[j];
        for (j = 0; j < m; j++)
        {
            cin >> ch;
            if (ch == 'R')
            {
                reverse(a, a + n);
            }
            else if (ch == 'P')
            {
                cin >> y >> z;
                tem = a[y];
                a[y] = a[z];
                a[z] = tem;
            }
            else
            {
                cin >> d;
                if (ch == 'S')
                {
                    for (k = 0; k < n; k++)
                        a[k] = a[k] + d;
                }
                else if (ch == 'M')
                {
                    for (k = 0; k < n; k++)
                        a[k] = a[k] * d;
                }
                else
                {
                    for (k = 0; k < n; k++)
                        a[k] = a[k] / d;
                }
            }
        }
        cout << "Case " << i << ":" << endl;
        for (k = 0; k < n - 1; k++)
            cout << a[k] << " ";
        cout << a[n - 1] << endl;
    }
    return 0;
}