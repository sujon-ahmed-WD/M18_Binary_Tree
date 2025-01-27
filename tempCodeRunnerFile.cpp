    // 1 node bar kora nea asa
    Node*f=q.front();
    q.pop();

    // oi node ka nea kaj kora
    cout<<f->val<<" ";
    // oi noder child golo push kora 
    if(f->left!=NULL)
    q.push(f->left);
    if(f->right!=NULL)
    q.push(f->right);