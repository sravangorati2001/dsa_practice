

bool search(Node *root,int x){
    if(!root) return false;
    if(root->data==x) return true;
    else if(root->data<x) return search(root->right,x);
    else return search(root->left,x);
}
int countPairs(Node* root1, Node* root2, int X)
{
    if(!root1) return 0;
    else if(search(root2,X-root1->data))
    return 1+countPairs(root1->left,root2,X)+countPairs(root1->right,root2,X);
    else return countPairs(root1->left,root2,X)+countPairs(root1->right,root2,X);
}
