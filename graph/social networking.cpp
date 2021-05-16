
//no nodes at a distance 



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e,x,y;
    cin>>n>>e;
    vector<vector<int>> g(n+1);
    while(e--){
     cin>>x>>y;
     g[x].push_back(y);
     g[y].push_back(x);
    }
    int t;
    cin>>t;
    while(t--){
        cin>>x>>y;
        queue<int> q;
        vector<bool> vis(n+1,false);
        q.push(x);
        vis[x]=true;
        while(y--){
            int l=q.size();
            for(int i=0;i<l;i++){
          int cur=q.front();
          q.pop();
          for(int x:g[cur]){
              if(!vis[x]){
                  vis[x]=true;
                  q.push(x);
              }
          }
        }
        }
        cout<<q.size()<<"\n";
    }
}
