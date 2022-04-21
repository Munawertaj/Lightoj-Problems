//  https://lightoj.com/problem/a-childhood-game

#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl endl
using namespace std;
int main()
{
    ll t, n, i, res;
    char name[10], ch;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> n;
        scanf("%*c");
        cin >> name;
        ch = name[0];
        if (ch == 'A')
        {
            if (n % 3 == 1)
                res = 2;
            else
                res = 1;
        }
        else
        {
            if (n % 3 == 0)
                res = 1;
            else
                res = 2;
        }
        if (res == 1)
            cout << "Case " << i << ": "
                 << "Alice" << nl;
        else
            cout << "Case " << i << ": "
                 << "Bob" << nl;
    }
    return 0;
}