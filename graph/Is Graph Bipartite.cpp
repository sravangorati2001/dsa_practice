

class Solution {
public:
    bool solve(vector<vector<int>> &graph,vector<int> &color,int v,int c){
        color[v]=c;
        for(auto x:graph[v]){
            if(color[x]==-1 and !solve(graph,color,x,c^1)) return false;
            else if(color[x]^c==0) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=size(graph);
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1 and !solve(graph,color,i,0)) return false;
        }
       return true;
    }
};
