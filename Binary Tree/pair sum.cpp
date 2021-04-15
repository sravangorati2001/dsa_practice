
// using set
class Solution {
public:
    set<int> m;
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        if(m.count(k-(root->val))) return true;
        m.insert(root->val);
       return ( findTarget(root->left,k) or findTarget(root->right,k) );
    }
};

// using two pointer technique

class Solution {
public:
    vector<int> solve(TreeNode *root,vector<int> &v){
        if(root==NULL){
            vector<int> temp;
            return temp;
        }
        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
        return v;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> a;
         a=solve(root,a);
        int i=0,j=a.size()-1;
        while(i<j){
            if(a[i]+a[j]==k) return true;
            else if(a[i]+a[j]<k) i++;
            else j--;
        }
        return false;
    }
};
