//  https://lightoj.com/problem/hex-a-bonacci

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
#define mod 10000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

void solve()
{
    ll hf[10005], n;
    for (int i = 0; i < 6; i++)
    {
        cin >> hf[i];
    }
    cin >> n;
    for (int i = 6; i <= n; i++)
    {
        hf[i] = (hf[i - 1] + hf[i - 2] + hf[i - 3] + hf[i - 4] + hf[i - 5] + hf[i - 6]) % mod;
    }
    cout << hf[n] % mod << nl;
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
}