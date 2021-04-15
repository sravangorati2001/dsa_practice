
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> s;
        s.push(root);
        while(s.size()){
            long long l=s.size(),temp=0;
          // upto level
            for(int i=0;i<l;i++){
                TreeNode *cur=s.front();
                temp+=(cur->val);
               if(cur->left) s.push(cur->left);
               if(cur->right) s.push(cur->right);
                s.pop();
            }
            ans.push_back(temp/(double)l);
        }
        return ans;
    }
};
