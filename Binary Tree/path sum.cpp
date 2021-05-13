class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        targetSum-=root->val;
        if(!root->left and !root->right and targetSum==0) return true;
        return ( hasPathSum(root->left,targetSum) or hasPathSum(root->right,targetSum));
    }
};
