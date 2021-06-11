#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, y;
		cin >> n >> x >> y;
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			int cur;
			cin >> cur;
			if (cur <= x) {
				++cnt;
			}
		}
		if (x > y) {
			cout << n << endl;
		} else {
			cout << (cnt + 1) / 2 << endl;
		}	
	}
}