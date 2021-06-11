#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<process.h>
#define ll long long int
using namespace std;


int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        if(n==0 && m!=0){
            cout<<"ERR\n";
            continue;
        }
        if(m==0){
            cout<<n<<" "<<n<<endl;
            continue;
        }
        cout<<(n+ max(m-n, 0))<<" "<<(n+m-1)<<endl;
    }
}