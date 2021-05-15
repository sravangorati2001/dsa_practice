


class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int &count){ 
            count++;
        grid[i][j]=0;
        for(int r=0;r<size(grid);r++)
            if(grid[r][j]) dfs(grid,r,j,count);
        for(int c=0;c<size(grid[0]);c++)
            if(grid[i][c]) dfs(grid,i,c,count);
       
    }
    int countServers(vector<vector<int>>& grid) {
        int ans=0,n=size(grid);
        for(int i=0;i<n;i++){
            for(int j=0;j<size(grid[i]);j++){
                int count=0;
                if(grid[i][j]) dfs(grid,i,j,count);
                if(count>1)
                ans+=count;
            }
        }
        return ans;
    }
};
