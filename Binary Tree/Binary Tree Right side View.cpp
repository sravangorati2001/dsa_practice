//Recursive

class Solution {
public:
    vector<int> ans;
int minl=INT_MIN;
void solve(TreeNode *root,int level){
    if(!root) return;
    if(minl<level){
        minl=level;
        ans.push_back(root->val);
    }
     solve(root->right,level+1);
    solve(root->left,level+1);
    return;
}
    vector<int> rightSideView(TreeNode* root) {
        solve(root,0);
       return ans;
    }
};

//Iterative
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
       vector<int> ans;
   if(!root) return ans;
   queue<TreeNode*> q({root});
   while(q.size()){
       int l=q.size();
       for(int i=0;i<l;i++){
           TreeNode *temp=q.front();
           q.pop();
           if(i==l-1) ans.push_back(temp->val);
           if(temp->left) q.push(temp->left);
           if(temp->right) q.push(temp->right);
       }
   }
   return ans;
    }
};
