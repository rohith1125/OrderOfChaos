#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    ll n, s, i;
    cin >> n >> s;
    ll A[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll idx = 0;
    bool flag = true;
    for (i = 0; i < n - 1; i++)
    {
        if (A[i + 1] - A[i] > s)
        {
            idx = i;
            flag = false;
        }
    }
    if (flag)
    {
        cout << n << endl;
        return;
    }
    cout << n - idx - 1 << endl;
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