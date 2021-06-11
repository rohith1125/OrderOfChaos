#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long i, m, n, s;
	cin >> n >> m;
	n /= m;
	for (i = s = 0; i++ < 10;)
		s += m * i % 10;
	s *= n / 10;
	for (i = 0; i++ < n % 10;)
		s += m * i % 10;
	cout << s << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long q;
	cin>>q;
	while(q--)
	{
		solve();
	}
}
