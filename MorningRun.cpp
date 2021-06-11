#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<process.h>

using namespace std;

void bfs(int i, vector<vector<int>> &v, bool visited[], int dist[]){
    queue<int> q;
    int front;
    q.push(i);
    while(!q.empty()){
        front = q.front();
        q.pop();
        if(visited[front]) continue;
        visited[front]=true;
        for(int j=0; j<v[front].size(); j++){
            if(!visited[ v[front][j] ]){
                q.push(v[front][j]);
                dist[ v[front][j] ] = min( dist[v[front][j] ], dist[front] + 1 );
            }
        }
    }
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
      int n, m, s, t, i, j, x, y, res=0;
      cin>>n>>m>>s>>t;
      vector<int> p;
      vector<vector<int>> v(n+1, p);
      bool visited[n+1];
      int dists[n+1];
      int distt[n+1];
      for(i=0; i<=n; i++) {
            visited[i]=false;
            dists[i]=10000;
            distt[i]=10000;
      }
      dists[s]=0;
      distt[t]=0;
      for(i=0; i<m; i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
      }
      /*if(v[0].size()){
        cout<<"0 NODE NOT EMPTY!\n";
      }
      for(i=1; i<=n; i++){
        if(v[i].size()==0){
            cout<<i<<" is empty\n";
        }
        unordered_set<int> dupCheck;
        for(j=0; j<v[i].size(); j++){
            if(dupCheck.find(v[i][j])!=dupCheck.end()){
                cout<<"DUPLICATE FOUND\n";
                cout<<"NODE = "<<i<<endl;
            for(int k=0; k<v[i].size(); k++){
                cout<<v[i][k]<<" ";
            }
            cout<<endl;
            }
            dupCheck.insert(v[i][j]);

        }
      }*/
      bfs(s, v, visited, dists);
      for(i=0; i<=n; i++) visited[i]=false;
      bfs(t, v, visited, distt);
      for(i=1;i<=n; i++ ){
        for(j=i+1; j<=n; j++){
            bool f=0;
            for(int k=0; k<v[i].size(); k++){
                if(v[i][k]==j){
                    f=1; break;
                }
            }
            if(f) continue;
            if(dists[i] + distt[j] + 1 >= dists[t] && dists[j] + distt[i] + 1 >= dists[t]){
              res++;
            }
        }
      }
      cout<<res<<endl;
    }
}
