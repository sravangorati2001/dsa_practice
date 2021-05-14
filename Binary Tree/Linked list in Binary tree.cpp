

class Solution {
public:
    bool dfs(ListNode* head, TreeNode* root){
          if(!head) return true;
        if(!root) return false;
        return (head->val==root->val and (dfs(head->next,root->left) or dfs(head->next,root->right)));
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
         if(!root) return false;
        return dfs(head,root) or isSubPath(head,root->left) or isSubPath(head,root->right);
    }
};
