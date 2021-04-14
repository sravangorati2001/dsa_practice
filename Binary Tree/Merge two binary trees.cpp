

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL) return NULL;
        else if(root1==NULL and root2) return root2;
        else  if(root2==NULL and root1) return root1;
        root1->val=root1->val+root2->val;
        root1->left=mergeTrees(root1->left,root2->left);
        root1->right=mergeTrees(root1->right,root2->right);
        return root1;
            
    }
};
