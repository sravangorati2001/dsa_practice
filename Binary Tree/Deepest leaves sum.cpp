

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(q.size()){
            int l=q.size();
            ans=0;
            for(int i=0;i<l;i++){
            TreeNode *cur=q.front();
                ans+=cur->val;
            q.pop();
                if(cur->right) q.push(cur->right);
                if(cur->left) q.push(cur->left);
            }
        }
        return ans;
    }
};
