
// Iterative
vector<int> leftView(Node *root)
{
   vector<int> ans;
   if(!root) return ans;
   queue<Node*> q({root});
   while(q.size()){
       int l=q.size();
       for(int i=0;i<l;i++){
           Node *temp=q.front();
           q.pop();
           if(i==0) ans.push_back(temp->data);
           if(temp->left) q.push(temp->left);
           if(temp->right) q.push(temp->right);
       }
   }
   return ans;
}

//Recursive

vector<int> ans;
int minl=INT_MIN;
void solve(Node *root,int level){
    if(!root) return;
    if(minl<level){
        minl=level;
        ans.push_back(root->data);
    }
    solve(root->left,level+1);
    solve(root->right,level+1);
    return;
}
vector<int> leftView(Node *root)
{
   solve(root,0);
   return ans;
}
