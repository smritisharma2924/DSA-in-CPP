// Problem 1 - Level Order Traversal of Binary Tree
//             1
//           /   \
//         2       3
//       /   \   /   \
//      4     5 6      7
//           / \        \
//          8   9        10
// traversal: 1 2 3 4 5 6 7 8 9 10

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

// node* createBinaryTree() {
//     node *root = new node(1);

//     root->left = new node(2);
//     root->right = new node(3);

//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);

//     root->left->left->left = new node(8);
//     root->left->left->right = new node(9);
//     root->right->right->right = new node(10);

//     return root;
// }

// vector<int> levelOrder(node* root) {
//     queue<node*> q;
//     vector<int> ans;
//     q.push(root);
//     node *temp;
//     while (!q.empty()) {
//         temp = q.front();
//         q.pop();
//         ans.push_back(temp->data);
//         if (temp->left) q.push(temp->left);
//         if (temp->right) q.push(temp->right);
//     }
//     return ans;
// }

// int main() {
//     node *root = createBinaryTree();
//     cout << "Level Order Traversal: ";
//     vector<int> result = levelOrder(root);
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     return 0;
// }
// time complexity: O(n) where n is the number of nodes in the binary tree
// space complexity: O(n) where n is the number of nodes in the binary tree



// Problem 2 - Size of Binary Tree

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

// node* createBinaryTree() {
//     node *root = new node(1);

//     root->left = new node(2);
//     root->right = new node(3);

//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);

//     root->left->left->left = new node(8);
//     root->left->left->right = new node(9);
//     root->right->right->right = new node(10);

//     return root;
// }

// // METHOD 1 - Using Recursion
// int total(node *root, int &count) {
//     if (root == NULL) return 0;
//     count++;
//     if (root->left) total(root->left, count);
//     if (root->right) total(root->right, count);
// }

// // METHOD 2 - Using Recursion (Simpler)
// int total2(node *root) {
//     if (root == NULL) return 0;
//     return 1 + total2(root->left) + total2(root->right);
// }

// int main() {
//     node *root = createBinaryTree();
//     int count = 0;
//     total(root, count);
//     cout << "Size of Binary Tree (Method 1): " << count << endl;
//     cout << "Size of Binary Tree (Method 2): " << total2(root) << endl;
//     return 0;
// }



// Problem 3 - Sum of all nodes in Binary Tree

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

// node* createBinaryTree() {
//     node *root = new node(1);

//     root->left = new node(2);
//     root->right = new node(3);

//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);

//     root->left->left->left = new node(8);
//     root->left->left->right = new node(9);
//     root->right->right->right = new node(10);

//     return root;
// }

// int sum(node *root) {
//     if (root == NULL) return 0;
//     return root->data + sum(root->left) + sum(root->right);
// }

// int sum2(node* root, int &total) {
//     if (root == NULL) return 0;
//     total += root->data;
//     sum2(root->left, total);
//     sum2(root->right, total);
//     return total;
// }

// int main() {
//     node *root = createBinaryTree();
//     cout << "Sum of all nodes in Binary Tree: " << sum(root) << endl;
//     int total = 0;
//     cout << "Sum of all nodes in Binary Tree: " << sum2(root, total) << endl;
//     return 0;
// }



// Problem 4 - Count leaf nodes in Binary Tree

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

// node* createBinaryTree() {
//     node *root = new node(1);

//     root->left = new node(2);
//     root->right = new node(3);

//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);

//     root->left->left->left = new node(8);
//     root->left->left->right = new node(9);
//     root->right->right->right = new node(10);

//     return root;
// }

// void countLeaf(node *root, int &count) {
//     if (root == NULL) return;
//     if (!root->left && !root->right) {
//         count++;
//         return;
//     }
//     countLeaf(root->left, count);
//     countLeaf(root->right, count);
// }

// int main() {
//     node *root = createBinaryTree();
//     int count = 0;
//     countLeaf(root, count);
//     cout << "Count of leaf nodes in Binary Tree: " << count << endl;
//     return 0;
// }



// Problem 5 - Count non leaf nodes in Binary Tree

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

// node* createBinaryTree() {
//     node *root = new node(1);

//     root->left = new node(2);
//     root->right = new node(3);

//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);

//     root->left->left->left = new node(8);
//     root->left->left->right = new node(9);
//     root->right->right->right = new node(10);

//     return root;
// }

// int countNonLeaf(node *root) {
//     if (root == NULL) return 0;
//     if (!root->left && !root->right) return 0;
//     return 1 + countNonLeaf(root->left) + countNonLeaf(root->right);
// }

// int main() {
//     node *root = createBinaryTree();
//     int count = countNonLeaf(root);
//     cout << "Count of non-leaf nodes in Binary Tree: " << count << endl;
//     return 0;
// }



// Problem 6 - Height of Binary Tree

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

// node* createBinaryTree() {
//     node *root = new node(1);

//     root->left = new node(2);
//     root->right = new node(3);

//     root->left->left = new node(4);
//     root->left->right = new node(5);
//     root->right->left = new node(6);
//     root->right->right = new node(7);

//     root->left->left->left = new node(8);
//     root->left->left->right = new node(9);
//     root->right->right->right = new node(10);

//     return root;
// }

// int height(node *root) {
//     if (root == NULL) return 0;
//     int leftH = height(root->left);
//     int rightH = height(root->right);
//     return 1 + max(leftH, rightH);
// }

// int main() {
//     node *root = createBinaryTree();
//     int count = 0;
//     int h = height(root);
//     cout << "Height of Binary Tree: " << h << endl;
//     return 0;
// }