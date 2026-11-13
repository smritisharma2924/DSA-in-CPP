// TREE
// it is a type of data structure that represent a hierarchial 
// relationship bw data elements called nodes.

// BINARY TREE
// it is defined as a tree data structure in which
// each node has at most two children, 
// which are referred to as the left child and the right child.

// TERMINOLOGY
// 1. Root: The top node in a tree.
// 2. Node: Each element in a tree is called a node.
// 3. Parent: The node which has a child node.
// 4. Child: The node which has a parent node.
// 5. Leaf: The node which has no child node.
// 6. Sibling: Nodes which have the same parent node.
// 7. Ancestor: A node that is on the path from the root to a given node.
// 8. Descendant: A node that is on the path from a given node to a leaf.
// 9. Level: The level of a node is defined as the number of edges on the path from the root to the node. The root node is at level 0, its children are at level 1, and so on.
// 10. Height: The height of a node is defined as the number of edges on the longest path from the node to a leaf. The height of a tree is the height of its root node.
// 11. Degree: The degree of a node is defined as the number of children it has. The degree of a tree is the maximum degree of its nodes.
// 12. Edge: The connection between two nodes in a tree is called an edge. An edge connects a parent node to its child node.

// total edges = total nodes - 1

// CREATING A BINARY TREE

// #include<iostream>
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

// int main() {
//     int x;
//     cin>>x;
//     queue<node*> q;
//     node *root = new node(x);
//     q.push(root);
//     while (!q.empty()) {
//         node *temp = q.front();
//         q.pop();
//         cin>>x; // left child;
//         if (x != -1) {
//             temp->left = new node(x);
//             q.push(temp->left);
//         }
//         cin>>x; // right child;
//         if (x != -1) {
//             temp->right = new node(x);
//             q.push(temp->right);
//         }
//     }
//     root->left = new node(2);
//     root->right = new node(3);

//     return 0;
// }