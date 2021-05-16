// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/waves-b18625d7/

            4 4 4 4 4 4 4 4 4 
            4 3 3 3 3 3 3 3 4 
            4 3 2 2 2 2 2 3 4 
            4 3 2 1 1 1 2 3 4 
            4 3 2 1 0 1 2 3 4 
            4 3 2 1 1 1 2 3 4 
            4 3 2 2 2 2 2 3 4 
            4 3 3 3 3 3 3 3 4 
            4 4 4 4 4 4 4 4 4
              
              
              
      #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    vector<vector<int>> ans(n,vector<int>(m,-1));
    queue<pair<int,int>> q;
    
    q.push({a,b});
    ans[a][b]=0;
    while(q.size()){
        auto p=q.front();
        q.pop();
        int x=p.first;
        int y=p.second;
       for(int i=-1;i<=1;i++){
           for(int j=-1;j<=1;j++){
               if(i+x<0 or j+y<0 or j+y>=m or i+x>=n or ans[i+x][j+y]!=-1)
               continue;
               ans[i+x][j+y]=ans[x][y]+1;
               q.push({i+x,y+j});
           }
       }
   }
for(int i=0;i<n;i++)
for(int j=0;j<m;j++) cout<<ans[i][j]<<" \n"[j==m-1];
}
