#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    ll n, i;
    cin >> n;
    ll x, sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    sum % n == 0 ? n : n--;
    cout << n << endl;
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