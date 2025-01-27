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
    else root=new Node(val);
    queue<Node*>q;
    if(root!=NULL)
    q.push(root);

    while(!q.empty())
    {
        // bar kora 

        Node*p=q.front();
        q.pop();

        // bar kora data kaj kora 

        int l,r;cin>>l>>r;
        Node*myLift,*myright;
        if(l==-1) myLift=NULL;
        else myLift=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        p->left=myLift;
        p->right=myright;

        // 
        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);

    }
    return root;



}

int count_nods(Node*root)
{
    if(root==NULL)
    return 0;
    int l=count_nods(root->left);
    int r=count_nods(root->right);
    return l+r+1;
}



int main()
{
   Node* root=input_tree();
   cout<<count_nods(root)<<" ";
    return 0;
}