#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    for (int i = n; i > 0; i--)
    {
        if ((m - (ll)pow(2, i - 1)) % (ll)pow(2, i - 1) == 0)
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}