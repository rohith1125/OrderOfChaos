#include <bits/stdc++.h>
using namespace std;

const int maxN = 5008;


void solve() {
    int n;
    int dp[maxN][maxN]={0}; 
    vector<int> a(1), b;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x != a.back()) a.push_back(x);
	}
	n = a.size() - 1;

	b = a;
	reverse(b.begin() + 1, b.end());

    for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i] == b[j]) {dp[i][j] = dp[i-1][j-1] + 1;}
			else {dp[i][j] = max(dp[i-1][j], dp[i][j-1]);}
		}
	}
    
    cout << n - (dp[n][n] + 1)/2 << '\n';
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	    solve();
    }	
	return 0;
}