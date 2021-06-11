#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    ll i, p, q, r;
    cin >> p >> q >> r;
    for (i = p; i >= 0; i--)
    {
        if (2 * i <= q && 4 * i <= r)
            break;
    }
    cout << 7 * i << endl;
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