// Problem 1 - Left View of Binary Tree

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
//     root->right->right = new node(6);

//     root->left->left->left = new node(7);
//     root->left->left->right = new node(8);

//     root->left->left->right->right = new node(9);

//     return root;
// }

// vector<int> leftView(node *root) {
//     if (!root) return {};
//     queue<node*> q;
//     q.push(root);
//     vector<int> ans;
//     while (!q.empty()) {
//         int n = q.size();
//         ans.push_back(q.front()->data);
//         while (n--) {
//             node *temp = q.front();
//             q.pop();
//             if (temp->left) q.push(temp->left);
//             if (temp->right) q.push(temp->right);
//         }
//     }
//     return ans;
// }

// int main() {
//     node *root = createBinaryTree();
//     cout << "Left View: ";
//     vector<int> result = leftView(root);
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     return 0;
// }



// Problem 2 - Right View of Binary Tree

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
//     root->right->right = new node(6);

//     root->left->left->left = new node(7);
//     root->left->left->right = new node(8);

//     root->left->left->right->right = new node(9);

//     return root;
// }

// vector<int> rightView(node *root) {
//     if (!root) return {};
//     queue<node*> q;
//     q.push(root);
//     vector<int> ans;
//     while (!q.empty()) {
//         int n = q.size();
//         ans.push_back(q.front()->data);
//         while (n--) {
//             node *temp = q.front();
//             q.pop();
//             if (temp->right) q.push(temp->right);
//             if (temp->left) q.push(temp->left);
//         }
//     }
//     return ans;
// }

// int main() {
//     node *root = createBinaryTree();
//     cout << "Right View: ";
//     vector<int> result = rightView(root);
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     return 0;
// }