#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> points(n);
        for(int i=0;i<n;i++)
        {
            cin>>points[i];
        }
        int mx=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+points[i];
            mx=max(mx,sum);
        }
        cout<<mx<<endl;
    }
}