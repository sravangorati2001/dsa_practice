
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        int a=p->val,b=q->val,c=root->val;
        if(a>b) swap(a,b);
        if((a<c and c<b) or (a==c or b==c )) return root;
        if(a<c and b<c) return lowestCommonAncestor(root->left,p,q);
        return lowestCommonAncestor(root->right,p,q);
    }
};
