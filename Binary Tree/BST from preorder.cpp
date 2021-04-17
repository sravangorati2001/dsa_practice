

class Solution {
public:
    TreeNode* solve(vector<int>& nums,int start,int end){
        if(start>end) return NULL;
        if(start==end) return new TreeNode(nums[start]); // to avoid ind==end which leads to loop
        int ind=end+1; // if there is no right child
        for(int i=start+1;i<=end;i++){
            if(nums[start]<nums[i]){
                ind=i;
                break;
            }
        }
        TreeNode *root=new TreeNode(nums[start]);
        root->left=solve(nums,start+1,ind-1);
        root->right=solve(nums,ind,end);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int> preorder) {
        int l=preorder.size()-1;
        return solve(preorder,0,l);
    }
};
