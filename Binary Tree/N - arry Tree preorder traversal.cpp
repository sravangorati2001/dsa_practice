

class Solution {
public:
    vector<int> ans;
    vector<int> preorder(Node* root) {
        if(root==NULL){
            vector<int> v;
            return v;
        }
        ans.push_back(root->val);
        for(Node* x:root->children){
            preorder(x);
        }
        return ans;
    }
};
