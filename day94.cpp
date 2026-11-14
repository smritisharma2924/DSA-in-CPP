// Creating Binary Tree

// if x == -1 return null
// create node
//     go left
//     go right
// return node address

// #include <iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node *left;
//     node *right;
//     node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// node* binaryTree() {
//     int x;
//     cin>>x;
//     if (x == -1) return NULL;
//     node *temp = new node(x);
//     cout<<"Enter the left child of "<<x<<": ";
//     temp->left = binaryTree();
//     cout<<"Enter the right child of "<<x<<": ";
//     temp->right = binaryTree();
//     return temp;
// }

// int main() {
//     cout<<"Enter the root node: ";
//     node *root = binaryTree();
//     return 0;
// }