#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        vector<long long int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long int total=0;
        for(int i=0;i<n;i++)
        {
            int right=a[i]+k;
            int index=lower_bound(a.begin(),a.end(),right)-a.begin();
            if(index==n || a[index]!=right)
                index--;
            long long between = index-i-1;
            total+=((between)*(between+1))/(long long)2;
        }
         cout<<total<<endl;
    }
}