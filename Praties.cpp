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

 void input_tree()
 {
    queue<Node*>qu;
    int val;cin>>val;
    
    Node* root=new Node(val);
    qu.push(root);

    while(!qu.empty())
    {
        // step1  qu thaka bar korbo
        Node*p=qu.front();
        qu.pop();
        // step node bar kora ka keso kaj kora

        int l,r; cin>>l>>r;
        Node*myLift,*myright;
        if(l==-1) myLift=NULL;
        else myLift=new Node(l); 
        if(r==-1) myright=NULL;
        else myright=new Node(r);
        p->left=myLift;
        p->right=myright;


        // step 3 child golo ka push kora 

        if(p->left!=NULL)
        qu.push(p->left);
        if(p->right)
        qu.push(p->right);
        
    }
 }

 

 
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    // level_order(root);
    return 0;
}