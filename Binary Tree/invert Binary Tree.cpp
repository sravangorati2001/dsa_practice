
// just reversing left and right childrens of every node
//recursive
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

// iterative
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
       stack<TreeNode*> s;
        s.push(root);
        while(s.size()){
            TreeNode *cur=s.top();
            s.pop();
            if(cur){
                swap(cur->right,cur->left);
                s.push(cur->left);
                s.push(cur->right);
            }
        }
        return root;
    }
};
