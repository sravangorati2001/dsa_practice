class Solution{
  public:
    /*You are required to complete this method*/
    void dfs(Node *root,auto &s,int h){
        if(!root) return;
        if(!root->left and !root->right) s.insert(h);
        dfs(root->left,s,h+1);
        dfs(root->right,s,h+1);
    }
    bool check(Node *root)
    {
        set<int> s;
        dfs(root,s,0);
        return s.size()==1;
    }
};


class Solution{
  public:
    bool check(Node *root)
    {
        queue<Node*> q({root});
        while(q.size()){
            int l=q.size(),sum=0,f=0;
            for(int i=0;i<l;i++){
                f=0;
                Node *temp=q.front();
                q.pop();
                if(temp->left) {
                    q.push(temp->left);
                    f=1;
                }
                 if(temp->right) {
                     q.push(temp->right);
                     f=1;
                 }
                 sum+=f;
            }
            if(sum and l!=sum) return false;
        }
        return true;
    }
};
