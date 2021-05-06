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

