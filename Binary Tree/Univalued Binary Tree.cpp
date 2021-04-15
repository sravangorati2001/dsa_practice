

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
         if(!root->right and !root->left) return true;
        else if(!root->right){
            if(root->val==root->left->val){
                return isUnivalTree(root->left);
            }
            else return false;
        }
        else if(!root->left){
            if(root->val==root->right->val){
                return isUnivalTree(root->right);
            }
            else return false;
        }
        return (root->val==root->left->val and root->val==root->right->val and isUnivalTree(root->left) and isUnivalTree(root->right));
    }
};

 bool isUnivalTree(TreeNode* root) {
         if(root==NULL) return true;
         if(root->right and root->val!=root->right->val) return false;
         if(root->left and root->val!=root->left->val) return false;
        return (isUnivalTree(root->left) and isUnivalTree(root->right));
    }
