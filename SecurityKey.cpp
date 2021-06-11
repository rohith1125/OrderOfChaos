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
      int n, x, i;
      cin>>n;
      bool f =0;
      for(i=0; i<n; i++){
        cin>>x;
        if(x==1){
            f=1;
        }
      }
      if(f){
        cout<<-1<<endl;
      }
      else{
        cout<<1<<endl;
      }
    }
}
