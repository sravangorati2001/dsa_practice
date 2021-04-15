
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        else if(!root->right) return 1+minDepth(root->left);
        else if(!root->left)return 1+minDepth(root->right);
       return 1+min(minDepth(root->left),minDepth(root->right));
    }
};
