void PrintLevelOrder(BTNode* root)
{
    queue<BTNode*> q;
    q.push(root);
    
    while(!q.empty())
    {
        BTNode* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left)
            q.push(temp->left);
        
        if(temp->right)
            q.push(temp->right);
     
    }
    
    cout<<endl<<endl; 
}
