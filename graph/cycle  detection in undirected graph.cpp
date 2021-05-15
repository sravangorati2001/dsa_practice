

class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool dfs(auto adj[],auto &vis,int cur,int parent){
        vis[cur]=true;
        for(auto x:adj[cur]){
            if(!vis[x]){
            if(dfs(adj,vis,x,cur)) return true;
            }
           else if(x!=parent and vis[x]) return true;
            if(cur==x ) return true;
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool> vis(V);
	    for(int i=0;i<V;i++){
	        if(!vis[i] and dfs(adj,vis,i,-1)) return true;
	    }
	    return false;
	}
};
