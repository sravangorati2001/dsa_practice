
class Solution {
public:
    string solve(TreeNode* root,string &ans){
        if(root==NULL) return "";
        if(!root->left and !root->right) ans.push_back(root->val+'0');
        solve(root->left,ans);
        solve(root->right,ans);
        return ans;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string a,b;
        a=solve(root1,a);
        b=solve(root2,b);
        return a==b;
    }
};
