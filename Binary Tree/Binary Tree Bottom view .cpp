


void solve(Node* root,int level,int dist,auto &m){
    if(!root) return;
    if(m.count(level)==0)
    m[level]=make_pair(root->data,dist);
    else if(m[level].second<=dist)
    m[level]=make_pair(root->data,dist);
    solve(root->left,level-1,dist+1,m);
    solve(root->right,level+1,dist+1,m);
    
}


//Function to return a list containing the bottom view of the given tree.
vector <int> bottomView(Node *root)
{
   map<int,pair<int,int>> m;
   solve(root,0,0,m);
   vector<int> ans;
   for(auto x:m)
   ans.push_back(x.second.first);
   return ans;
}
