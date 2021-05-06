
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
