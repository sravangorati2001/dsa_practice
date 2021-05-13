
int getCount(Node *root, int l, int h)
{
  if(!root) return 0;
  if(root->data<l or root->data>h) return getCount(root->left,l,h)+getCount(root->right,l,h);
  return 1+getCount(root->left,l,h)+getCount(root->right,l,h);
}
