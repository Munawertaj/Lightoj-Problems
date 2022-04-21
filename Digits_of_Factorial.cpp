//  https://lightoj.com/problem/digits-of-factorial

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    double arr[1000009];
    int num, base, res, i, t;
    cin >> t;
    arr[0] = 0;
    for (i = 1; i <= 1000005; i++)
    {
        arr[i] = arr[i - 1] + log(i);
    }
    for (i = 1; i <= t; i++)
    {
        res = 0;
        cin >> num >> base;
        res = arr[num] / log(base);
        res += 1;
        cout << "Case " << i << ": " << res << endl;
    }
    return 0;
}