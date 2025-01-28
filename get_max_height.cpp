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
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root!=NULL)
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

int max_hight(Node*root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 0;
    int l=max_hight(root->left);
    int r=max_hight(root->right);
    return max(l,r)+1;
}

int main()
{
    Node* root=input_tree();
    cout<<max_hight(root);
    return 0;
}