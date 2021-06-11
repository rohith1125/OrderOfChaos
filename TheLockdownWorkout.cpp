#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n = abs(n);
        int i = 1, sum = 0;
        int ans = 0;
        while (sum < n || (n - sum) % 2)
        {
            ans += 1;
            sum += i;
            i += 1;
        }
        cout << ans << endl;
    }
}