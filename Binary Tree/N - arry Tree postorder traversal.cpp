

class Solution {
public:
    vector<int> ans;
    vector<int> postorder(Node* root) {
        if(root==NULL){
            vector<int> v;
            return v;
        }
        for(auto x:root->children)
            postorder(x);
        ans.push_back(root->val);
        return ans;
    }
};
