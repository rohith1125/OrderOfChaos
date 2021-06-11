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
        int k, i, j, n;
    string s;
    map<char, int> m;
    cin>>k>>s;
    n=s.size();
    for(i=0; i<n; i++){
        m[s[i]]++;
    }
    string res;
    bool f=1;
    for(auto itr = m.begin(); itr!=m.end(); itr++){
        if(itr->second % k ==0){
            for(j=0; j<itr->second / k; j++){
                res += itr->first;
            }
        }
        else{
           cout<<-1<<endl;
            f=0;
            break;
        }
    }
    if(!f){
        continue;
    }
    for(i=0; i<k; i++){
        cout<<res;
    }
    cout<<endl;
    }
}

