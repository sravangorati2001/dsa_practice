

class Solution {
public:
    void solve(TreeNode *root,string s,vector<string> &ans){
         if(root==NULL) return ;
        if(!root->right and !root->left){
            s=s+to_string(root->val);
            ans.push_back(s);
            return ;
        }
        s=s+to_string(root->val)+"->";
        solve(root->left,s,ans);
        solve(root->right,s,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> ans;
        solve(root,"",ans);
        return ans;
    }
};
