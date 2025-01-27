#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
 
};
Node* input_tree()
{
    int val;cin>>val;
    Node*root;
    if(val==-1) root=NULL;
    else 
    root=new Node(val);
    queue<Node*>q;
    if(root !=NULL)
    q.push(root);

    while(!q.empty())
    {
        Node*p=q.front();
        q.pop();

        int l,r;cin>>l>>r;
        Node*mylift,*myright;
        if(l==-1) mylift=NULL;
        else mylift=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        p->left=mylift;
        p->right=myright;

        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
}

void level_order(Node* root)

 {
    if(root==NULL)
    {
        cout<<" NO TREE";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1. ber kora ana
        Node*f=q.front();
        q.pop();
        // 2. oi node ka nea kaj kora 
        cout<<f->val<<" ";
        // 3. childrean ka push kora 
        if(f->left !=NULL)
        q.push(f->left);
        if(f->right!=NULL)
        q.push(f->right);

    }
 }
int main()
{
    Node* root=input_tree();
    level_order(root);
    return 0;
}