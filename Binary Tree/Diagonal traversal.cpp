

void fill(Node* root,auto &m,int level){
if(!root) return;
m[level].push_back(root->data);
fill(root->left,m,level+1);
fill(root->right,m,level);
}

vector<int> diagonal(Node *root)
{
   map<int,vector<int>> m;
   vector<int> ans;
   fill(root,m,0);
   for(auto x:m){
      for(auto a:x.second)
      ans.push_back(a);
   }
   return ans;
}
