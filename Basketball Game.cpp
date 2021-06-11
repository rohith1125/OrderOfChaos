#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<process.h>

using namespace std;

int main(){
    int t=1;
    cin>>t;
    while(t--){
      int a, b, c;
        cin>>a>>b>>c;
        int total = a*c;
        for(int i=1; ; i++){
            if(c*b >= (total - b*i)){
                cout<<i<<endl;
                break;
            }
        }
    }
}