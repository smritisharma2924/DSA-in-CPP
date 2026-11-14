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
// time complexity: O(n) where n is the number of nodes in the binary tree


/*
TRAVERSAL OF BINARY TREE

Preorder Traversal: node -> left -> right
Inorder Traversal: left -> node -> right
Postorder Traversal: left -> right -> node

           1
         /   \
        2      7
       / \      \
      3   6      8
     / \        / \
    4   5      9   10

Preorder Traversal: 1 2 3 4 5 6 7 8 9 10
Inorder Traversal: 4 3 5 2 6 1 7 9 8 10
Postorder Traversal: 4 5 3 6 2 9 10 8 7 1

*/

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

// void preorder(node* node) {
//     if (node == NULL) return;
//     cout<<node->data<<" ";
//     preorder(node->left);
//     preorder(node->right);
// }

// void inorder(node* node) {
//     if (node == NULL) return;
//     inorder(node->left);
//     cout<<node->data<<" ";
//     inorder(node->right);
// }

// void postorder(node* node) {
//     if (node == NULL) return;
//     postorder(node->left);
//     postorder(node->right);
//     cout<<node->data<<" ";
// }

// // Create the binary tree drawn above.
// node* createBinaryTree() {
//     node *root = new node(1);

//     root->left = new node(2);
//     root->right = new node(7);

//     root->left->left = new node(3);
//     root->left->right = new node(6);
//     root->right->right = new node(8);

//     root->left->left->left = new node(4);
//     root->left->left->right = new node(5);
//     root->right->right->left = new node(9);
//     root->right->right->right = new node(10);

//     return root;
// }

// int main() {
//     node *root = createBinaryTree();

//     cout<<"Preorder Traversal: ";
//     preorder(root);
//     cout<<endl;

//     cout<<"Inorder Traversal: ";
//     inorder(root);
//     cout<<endl;

//     cout<<"Postorder Traversal: ";
//     postorder(root);
//     cout<<endl;

//     return 0;
// }
