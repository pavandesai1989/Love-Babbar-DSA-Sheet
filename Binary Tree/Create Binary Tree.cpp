//create a Binary Tree
//Create a Binary Tree

#include <queue>

//structure of BT
#include<iostream>
using namespace std;

class BTNode
{
public:
    int data;
    BTNode* left;
    BTNode* right;
    
public:
    BTNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};




//create a Binary Tree
BTNode* CreateBT(BTNode* root)
{
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    
    //create a node
    root = new BTNode(data);
    
    if( data == -1)
        return NULL;
    
    //get the left child
    cout<<"enter the left child of"<<data<<endl;
    root->left = CreateBT(root->left);
    
    cout<<"enter the right child of"<<data<<endl;
    root->right = CreateBT(root->right);
    
    return root;
    
}


int main()
{
    BTNode* root = NULL;
    root = CreateBT(root);//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    
    //PrintLevelOrder(root);   //1 3 5 7 11 17
    
    //PrintLevelOrderLineByLine(root);
}
