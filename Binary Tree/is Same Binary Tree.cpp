

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q) return true;
        else if(!p or !q) return false;
      else if(p->val!=q->val) return false;
        return (isSameTree(p->left,q->left) and isSameTree(p->right,q->right));
    }
};
