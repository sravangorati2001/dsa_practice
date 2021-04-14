

class Solution {
public:
    TreeNode *newroot, *temp;
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return NULL;
        increasingBST(root->left);
        if(newroot==NULL){
            newroot=new TreeNode(root->val);
            temp=newroot;
        }
        else{
            temp->right=new TreeNode(root->val);
            temp=temp->right;
        }
        increasingBST(root->right);
        return newroot;
    }
};
