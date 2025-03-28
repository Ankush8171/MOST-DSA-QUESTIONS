
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
}; // Missing semicolon added here

node* Binary_tree() {
    int x;
    cout << "Enter data (-1 for NULL): ";
    cin >> x;

    if (x == -1) return NULL; // Base case to stop recursion

    node* temp = new node(x);

    cout << "Enter the left child of " << x << endl;
    temp->left = Binary_tree();

    cout << "Enter the right child of " << x << endl;
    temp->right = Binary_tree();

    return temp;
}

void pre_traversal(node* root) {
    if (root == NULL) return;

    cout << root->data << " "; // Print the node
    pre_traversal(root->left);  // Recursive call for left subtree
    pre_traversal(root->right); // Recursive call for right subtree
}

int main() {
    cout << "Enter the root: ";
    node* root = Binary_tree(); // Fixed object instantiation

    cout << "Preorder Traversal: ";
    pre_traversal(root); // Function call

    return 0;
}
