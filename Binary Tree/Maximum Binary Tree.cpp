
class Solution {
public:
    TreeNode* construct(vector<int>& nums,int start,int end){
        if(start>end) return NULL;
        auto maxe= max_element(nums.begin()+start,nums.begin()+end+1);
        int i=maxe-nums.begin();
        TreeNode* cur=new TreeNode(*maxe);
        cur->left=construct(nums,start,i-1);
        cur->right=construct(nums,i+1,end);
        return cur;
    }
    TreeNode* constructMaximumBinaryTree(vector<int> nums) {
        int l=nums.size()-1;
        return construct(nums,0,l);
    }
};
