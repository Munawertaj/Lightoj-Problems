//  https://lightoj.com/problem/discover-the-web

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vss vector<string>
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
#define PI (2 * acos(0.0))
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

void solve()
{
    string opr, link, temp;
    stack<string> url, forw;

    url.push("http://www.lightoj.com/");

    while (1)
    {
        cin >> opr;
        if (opr == "QUIT")
            break;
        else if (opr == "VISIT")
        {
            cin >> link;
            url.push(link);
            cout << link << nl;

            while (forw.size() > 0)
            {
                forw.pop();
            }
            forw.push(link);
        }
        else if (opr == "BACK")
        {
            if (url.size() <= 1)
            {
                cout << "Ignored" << nl;
            }
            else
            {
                temp = url.top();
                forw.push(temp);
                url.pop();
                cout << url.top() << nl;
            }
        }
        else
        {
            if (forw.size() <= 1)
            {
                cout << "Ignored" << nl;
            }
            else
            {
                temp = forw.top();
                url.push(temp);
                forw.pop();
                cout << temp << nl;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {

        cout << "Case " << i << ":" << nl;
        solve();
    }
    return 0;
}