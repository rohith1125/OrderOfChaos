#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<process.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a%b); }

int main(){
    int t=1;
    cin>>t;
    while(t--){
      int n;
        cin>>n;
        int arr[n], maxi=0;
        int g;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i==1){
              g = gcd(arr[0], arr[1]);
            }
            else if(i>1){
                g = gcd(g, arr[i]);
            }
            maxi=max(maxi, arr[i]);
        }
        if((maxi/g - n)%2){
            cout<<"Amanda\n";
        }
        else{
            cout<<"Michael\n";
        }
    }
}