

class Solution {
public:
    int find(int i,vector<int>& parent){
        if(i==parent[i]) return i;
        return find(parent[i],parent);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=size(edges);
        vector<int> parent(n+1);
        vector<int> ans(2);
        for(int i=1;i<=n;i++) parent[i]=i;
        for(auto a:edges){
            int u=find(a[0],parent);
            int v=find(a[1],parent);
            if(u!=v) parent[v]=u;
            else  return a;
        }
        return ans;
    }
};
