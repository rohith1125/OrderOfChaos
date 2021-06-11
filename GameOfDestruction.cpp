#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t=1;
    cin>>t;
    while(t--){
      int p, q;
      cin>>p>>q;
      if(min(p, q)%2){
        cout<<"Arnav\n";
      }
      else{
        cout<<"Manya\n";
      }
    }

}
