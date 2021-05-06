
// recursive
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    void solve(Node *root,int level,int dist,auto &m){
        if(!root) return;
        if(m.count(level)==0)
            m[level]=make_pair(root->data,dist);
        else if(m[level].second>dist)
         m[level]=make_pair(root->data,dist);
         solve(root->left,level-1,dist+1,m);
         solve(root->right,level+1,dist+1,m);
    }
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        map<int,pair<int,int>> m;
        solve(root,0,0,m);
        for(auto x:m){
            ans.push_back(x.second.first);
        }
        return ans;
    }

};

// iterative
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        queue<pair<Node*,int>> q({make_pair(root,0)});
        map<int,int> m;
        while(q.size()){
            pair<Node*,int> temp=q.front();
            q.pop();
            if(m.count(temp.second)==0){
                m[temp.second]=temp.first->data;
            }
            if(temp.first->left) q.push(make_pair(temp.first->left,temp.second-1));
            if(temp.first->right) q.push(make_pair(temp.first->right,temp.second+1));
        }
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }

};
