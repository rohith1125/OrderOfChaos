/* Code By @santhanch*/
#include <iostream>
#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    lli t,n,m,i,j,a[10000001],b[10000001],k;
    char str[1000000];
    cin>>t;
    while(t--){

    string s;
    cin>>s;
    int flag=0;
    for(i=0;i<s.length();i++)
    {
        if(flag==0 &&s[i]=='c')
        flag=1;
        if(flag==1 &&s[i]=='h')
        flag=2;
        if(flag==2 &&s[i]=='a')
        flag=3;
        if(flag==3 &&s[i]=='o')
        flag=4;
        if(flag==4 &&s[i]=='s')
        flag=5;
    }
    if(flag==5)
    cout<<"YES\n";
    else
    cout<<"NO\n";

    }
    return 0;
}