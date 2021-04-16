

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p or root==q) return root;
        TreeNode *left=lowestCommonAncestor(root->left, p,q);
        TreeNode *right=lowestCommonAncestor(root->right, p,q);
        if(left and right) return root;
        else if(right) return right;
        return left;
    }
};
