

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,int>> s;
        s.push({root,0});
        while(s.size()){
            int l=s.size(),f=-1;
            for(int i=1;i<=l;i++){
                pair<TreeNode*,int> p=s.front();
                 s.pop();
                TreeNode *cur=p.first;
                int value=p.second;
                if(cur->left) s.push({cur->left,cur->val});
                if(cur->right) s.push({cur->right,cur->val});
                if(cur->val==x or cur->val==y){
                    if(f==-1) f=value;
                    else{
                        if(value==f) return false;
                        else return true;
                    }
                }
            }
        }
        return false;
    }
};
