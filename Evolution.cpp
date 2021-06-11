#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void dfs(vector<vector<int>> &v, int height[], bool visited[], int i){
    visited[i]=true;
    for(int j=0; j<v[i].size(); j++){
        dfs(v, height, visited, v[i][j]);
        height[i] = max(height[i], 1+ height[ v[i][j] ]);
    }
}

int main(){
        int n, i, x;
        cin>>n;
        vector<int> c;
        vector<vector<int>> v(n, c);
        int height[n];
        bool  visited[n];
        for(i=0; i<n; i++) {
            cin>>x;
            height[i]=1;
            visited[i]=false;
            if(x==-1) continue;
            v[--x].push_back(i);
        }
        for(i=0; i<n; i++){
            if(!visited[i]){
                dfs(v, height, visited, i);
            }
        }
        int res=0;
        for(i=0; i<n; i++){
            res = max(res, height[i]);
        }
        cout<<res<<endl;
}
