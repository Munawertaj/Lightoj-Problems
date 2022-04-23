//  https://lightoj.com/problem/secret-origins

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
    ll num, res = 0;
    cin >> num;
    vector<int> bin;
    ll x = num;
    int modu;

    while (x)
    {
        modu = x % 2;
        bin.pb(modu);
        x = x / 2;
    }
    bin.pb(0);

    int len = bin.size();
    int i;
    int fcount0 = 0, count1 = 0;

    for (i = 0; i < len; i++)
    {
        if (bin[i] == 1)
            break;
        fcount0++;
    }

    for (i = i + 1; i < len; i++)
    {
        if (bin[i] == 0)
            break;
        count1++;
    }
    bin[i] = 1;
    bin[i - 1] = 0;
    if (fcount0 != 0)
    {
        i--;
        int st = 0;
        while (st < i)
        {
            if (bin[i] == 1)
            {
                bin[i] = 0;
                bin[st++] = 1;
            }
            i--;
            if (bin[i] == 0 || bin[st] == 1)
                break;
        }
    }
    for (int j = 0; j < len; j++)
    {
        res = res + bin[j] * pow(2, j);
    }
    return res;
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
        cout << "Case " << i << ": " << solve() << nl;
    }
    return 0;
}