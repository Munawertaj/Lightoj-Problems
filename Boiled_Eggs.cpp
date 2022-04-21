//  https://lightoj.com/problem/boiled-eggs

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, egg[31], i, p, q, res, j;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        res = 0;
        cin >> n >> p >> q;
        for (j = 0; j < n; j++)
            cin >> egg[j];

        j = 0;
        for (j = 0; j < n; j++)
        {
            res = res + egg[j];
            if (res > q || j >= p)
                break;
        }
        cout << "Case " << i << ": " << j << endl;
    }
    return 0;
}