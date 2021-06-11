#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//Input
		int n;
		int first;
		cin>>n>>first;
		vector<int> encrypted(n);
		for(int i=0;i<n;i++)
			cin>>encrypted[i];
		//Main Logic
		vector<int> ans;
        ans.push_back(first);
        for(int i=0;i<encrypted.size();i++)
            ans.push_back(ans.back()^encrypted[i]);
        
        //Output
        for(int i=0;i<ans.size();i++)
        	cout<<ans[i]<<" ";
        cout<<endl;
	}
}