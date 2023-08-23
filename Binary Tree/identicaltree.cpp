#include <bits/stdc++.h>
using namespace std;
class Root
{
    public:
    int data;
    Root* left;
    Root* right;
    Root(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
bool identical(Root* root1,Root* root2)
{
    if(root1==NULL&&root2==NULL)
    return true;
    else
    return(root1->data==root2->data)&&identical(root1->left,root2->left)&&identical(root1->right,root2->right);
    return false;
}
bool isSymmetric(Root* left,Root* right)
{
    if(left==NULL||right==NULL)
    return (left==right);
    if(left->data!=right->data) return false;
    return isSymmetric(left->left,right->right)&&isSymmetric(left->right,right->left);
}
bool symmetric(Root* root)
{
    return(root==NULL||isSymmetric(root->left,root->right));
}
int main()
{
    Root* root=new Root(10);
    root -> left = new Root(2);
    root -> left -> left =new Root(3);
    root -> left -> right = new Root(4);
    root -> right = new Root(2);
    root -> right -> left =new Root(4);
    root -> right -> right =new Root(3);
    cout<<symmetric(root);
}