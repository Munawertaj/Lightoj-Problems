//  https://lightoj.com/problem/trapezium

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

double sq(double x)
{
    return x * x;
}

void solve()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < c)
        swap(a, c);

    double x, height, area;

    x = (sq(b) - sq(d) - sq(a - c)) / (2 * (c - a));

    height = sqrt(sq(d) - sq(x));

    area = 0.5 * (a + c) * height;

    cout << fixed << setprecision(7) << area << nl;
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