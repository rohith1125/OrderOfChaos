#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    ll j, n, m, i;
    cin >> n >> m;
    ll A[n], B[m];
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < m; i++)
        cin >> B[i];
    sort(B, B + m);
    sort(A, A + n);
    ll ans = 0;
    for (i = 0, j = 0; i < n; i++)
    {
        while (j < m && B[j] <= A[i])
            j++;
        if (j > 0)
            j--;
        if (B[j] > A[i] && ans < abs(A[i] - B[j]))
            ans = abs(A[i] - B[j]);
        else if (j < m - 1 && ans < min(abs(A[i] - B[j]), abs(A[i] - B[j + 1])))
            ans = min(abs(A[i] - B[j]), abs(A[i] - B[j + 1]));
        else if (j == m - 1 && ans < abs(A[i] - B[j]))
            ans = abs(A[i] - B[j]);
    }
    cout << ans << endl;
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