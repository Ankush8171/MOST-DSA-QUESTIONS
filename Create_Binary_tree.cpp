#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *left, *right;

    node(int x) {
        data = x;
        left = right = NULL;
    }
}; 

node* Binary_tree() {
    int x;
    cout << "Enter data (-1 for NULL): ";
    cin >> x;

    if (x == -1)
    return NULL; /

    node* temp = new node(x);

    cout << "Enter the left child of " << x << endl;
    temp->left = Binary_tree();

    cout << "Enter the right child of " << x << endl;
    temp->right = Binary_tree();

    return temp;
}

int main() {
    cout << "Enter the root: ";
    node* root = Binary_tree(); 
    
    return 0;
}

