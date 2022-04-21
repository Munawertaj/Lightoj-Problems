//  https://lightoj.com/problem/bishops

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, i, res, a, b, c, d;
    cin >> t;
    long long int row1, col1, row2, col2, x, y;
    for (i = 1; i <= t; i++)
    {
        cin >> row1 >> col1 >> row2 >> col2;
        x = abs(row1 - row2);
        y = abs(col1 - col2);
        if (x % 2 == y % 2)
        {
            if (x == y)
                res = 1;
            else if ((row1 + col1) == (row2 + col2))
                res = 1;
            else
                res = 2;
            cout << "Case " << i << ": " << res << endl;
        }
        else
            cout << "Case " << i << ": impossible" << endl;
    }
    return 0;
}