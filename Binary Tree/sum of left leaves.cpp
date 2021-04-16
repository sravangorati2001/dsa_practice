

class Solution {
public:
    int ans=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left and !root->left->left and !root->left->right) ans+=root->left->val;
       if(root->left) sumOfLeftLeaves(root->left);
       if(root->right) sumOfLeftLeaves(root->right);
        return ans;
    }
};



class Solution {
public:
    int ans=0;
    int sumOfLeftLeaves(TreeNode* root,bool isLeft=false) {
        if(root==NULL) return 0;
        if(!root->left and !root->right) ans+= isLeft ? root->val : 0;
       if(root->left) sumOfLeftLeaves(root->left,true);
       if(root->right) sumOfLeftLeaves(root->right,false);
        return ans;
    }
};
