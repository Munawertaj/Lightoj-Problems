//  https://lightoj.com/problem/shadow-sum

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

ll solve()
{
    int n, val, temp;
    cin >> n;
    int arr[20001];

    for (int i = 0; i <= 20000; i++)
        arr[i] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        temp = abs(val);
        if (val < 0)
            arr[temp] = -1;
        else if (val > 0)
            arr[temp] = 1;
        else
            continue;
    }
    ll sum = 0;

    for (int i = 0; i <= 20000; i++)
    {
        sum = sum + i * arr[i];
    }
    cout << sum << nl;
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
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}