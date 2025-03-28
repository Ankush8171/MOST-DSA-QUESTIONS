

#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node *left,*right;
    
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
}


node *Binary_tree()
{
    int x;
    cin>>x;

    node *temp=new node(x);


    cout<<"enter the left node of :"<<x;
    temp->left =Binary_tree();

    cout<<"enter the right node of :"<<x;
    temp->left =Binary_tree();

    return temp;


}

// void pre_traversal(node *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }

//     cout<<root->data;
//     root->left=pre_traversal();
//     root->right=pre_traversal();

// }

int main()
{
    cout<<"enter the root::";

    node *root=new Node();

    //pre_traversal(root);
}
