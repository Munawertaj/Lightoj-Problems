//  https://lightoj.com/problem/double-ended-queue

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
    deque<int> dq;
    int n, m;
    cin >> n >> m;
    string opr;
    int num;
    while (m--)
    {
        cin >> opr;
        if (opr[1] == 'u')
        {
            cin >> num;
            if (dq.size() < n)
            {
                if (opr[4] == 'L')
                {
                    dq.push_front(num);
                    cout << "Pushed in left: " << num << nl;
                }
                else
                {
                    dq.push_back(num);
                    cout << "Pushed in right: " << num << nl;
                }
            }
            else
                cout << "The queue is full" << nl;
        }
        else
        {
            if (dq.size() > 0)
            {
                if (opr[3] == 'L')
                {
                    int x = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << x << nl;
                }
                else
                {
                    int x = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << x << nl;
                }
            }
            else
                cout << "The queue is empty" << nl;
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