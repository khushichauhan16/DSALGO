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
    void preorder(Root* root)
    {
        if(root==NULL)
        return;
        cout<<(root->data)<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Root* root)
    {
        if(root==NULL)
        return;
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
    void postorder(Root* root)
    {
        if(root==NULL)
        return;
        postorder(root->left);
        postorder(root->right);
        cout<<(root->data)<<" ";
    }
    int height(Root* root)
    {
        if(root==NULL)
        return 0;
        int l=height(root->left);
        int r=height(root->right);
        return 1+max(l,r);
    }
    bool checkBalance(Root* root)
    {
        if(root==NULL)
        return 0;
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1)return false;
        bool left=checkBalance(root->left);
        bool right=checkBalance(root->right);
        if(left==false||right==false)
        return false;
        return true;
    }
    int diameter(Root* root,int m)
    {
        if(root==NULL)
        return 0;
        int l=diameter(root->left,m);
        int r=diameter(root->right,m);
        m=max(m,(l+r));
        return 1+max(l,r);
    }
    int maxPath(Root* root,int m)
    {
        if(root==NULL)
        return 0;
        int l=maxPath(root->left,m);
        int r=maxPath(root->right,m);
        m=max(m,(l+r+root->data));
        return max(l,r)+root->data;
    }
    int main()
    {
        Root* root=new Root(10);
        root->left=new Root(20);
        root->right=new Root(30);
        root->left->left=new Root(40);
        root->left->right=new Root(50);
        root->left->right->left=new Root(60);
        int max=INT_MIN;
        cout<<maxPath(root,max);
    }
