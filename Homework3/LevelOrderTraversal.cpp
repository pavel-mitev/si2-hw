
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
    queue<node*> q;
    if(root)
    {
        q.push(root);
        cout << root->data << " ";
    }
    
    while(!q.empty())
    {
        const node* temp = q.front();
        q.pop();
        
        if(temp->left)
        {
            q.push(temp->left);
            cout << temp->left->data << " ";
        }  
        
        if(temp->right)
        {
            q.push(temp->right);
            cout << temp->right->data << " ";
        }
    }
    
}
