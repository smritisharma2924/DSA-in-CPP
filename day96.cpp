// Problem 1 - Two trees are identical or not

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

//     root->right->right->right = new node(7);

//     return root;
// }

// bool isSameTree(node *r1, node *r2) {
//     if (!r1 && !r2) return true;
//     if ((!r1 && r2) or (r1 && !r2)) return false;
//     if (r1->data != r2->data) return false;
//     return isSameTree(r1->left, r2->left) && isSameTree(r1->right, r2->right);

// }

// int main() {
//     node *root1 = createBinaryTree();
//     node *root2 = createBinaryTree();
//     bool result = isSameTree(root1, root2);
//     cout << "Trees are identical: " << (result ? "Yes" : "No") << endl;
//     return 0;
// }



// Problem 2 - Convert into mirror tree

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

//     root->right->right->right = new node(7);

//     return root;
// }

// void mirror(node *root) {
//     if (!root) return;
//     node *temp = root->right;
//     root->right = root->left;
//     root->left = temp;
//     mirror(root->left);
//     mirror(root->right);
// }

// int main() {
//     return 0;
// }



// Problem 3 - Check for balance tree

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

//     root->right->right->right = new node(7);
//     root->right->right->right->right = new node(7);
    
//     return root;
// }

// int height(node *root, bool &valid) {
//     if (!root) return 0;
//     int lh = height(root->left, valid);
//     int rh = height(root->right, valid);
//     if (abs(lh - rh) > 1) valid = 0;
//     return 1 + max(lh, rh);
// }

// bool balanced(node *root) {
//     bool valid = 1;
//     height(root, valid);
//     return valid;
// }

// int main() {
//     node *root1 = createBinaryTree();
//     bool result = balanced(root1);
//     cout << "Tree is balanced: " << (result ? "Yes" : "No") << endl;
//     return 0;
// }



// Problem 4 - Level order traversal in spiral form

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
//     root->left->right->left = new node(10);
//     root->left->right->right = new node(11);
//     root->right->left->left = new node(12);
//     root->right->left->right = new node(13);
//     root->right->right->left = new node(14);
//     root->right->right->right = new node(15);
    
//     root->left->left->left->left = new node(16);
//     root->left->left->right->left = new node(17);
//     root->left->left->right->right = new node(18);
//     root->left->right->right->right = new node(19);
//     root->right->left->right->left = new node(20);
//     root->right->left->right->right = new node(21);
//     root->right->right->right->left = new node(22);
//     root->right->right->right->right = new node(23);

//     return root;
// }

// // key is that the travesal goes R to L then L to R each level
// vector<int> spiralTraversal(node *root) {
//     stack<node*> s1; // for levels to be printed from right to left
//     stack<node*> s2; // for levels to be printed from left to right
//     s1.push(root);
//     vector<int> ans;
//     while (!s1.empty() || !s2.empty()) {
//         if (!s1.empty()) { // r to l
//             while (!s1.empty()) {
//                 node *temp = s1.top();
//                 s1.pop();
//                 ans.push_back(temp->data);
//                 if (temp->right) s2.push(temp->right);
//                 if (temp->left) s2.push(temp->left);
//             }
//         }
//         else { // l to r
//             while (!s2.empty()) {
//                 node *temp = s2.top();
//                 s2.pop();
//                 ans.push_back(temp->data);
//                 if (temp->left) s1.push(temp->left);
//                 if (temp->right) s1.push(temp->right);
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     node *root1 = createBinaryTree();
//     vector<int> ans = spiralTraversal(root1);
//     for (int i=0 ; i < ans.size() ; i++) {
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }



// Problem 5 - Check if 2 nodes are cousins or not
// at same level and different parents

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
//     root->left->right->left = new node(10);
//     root->left->right->right = new node(11);
//     root->right->left->left = new node(12);
//     root->right->left->right = new node(13);
//     root->right->right->left = new node(14);
//     root->right->right->right = new node(15);
    
//     root->left->left->left->left = new node(16);
//     root->left->left->right->left = new node(17);
//     root->left->left->right->right = new node(18);
//     root->left->right->right->right = new node(19);
//     root->right->left->right->left = new node(20);
//     root->right->left->right->right = new node(21);
//     root->right->right->right->left = new node(22);
//     root->right->right->right->right = new node(23);

//     return root;
// }

// bool parentSame(node *root, int a, int b) {
//     if(!root) return false;
//     if (root->left && root->right) {
//         if (root->left->data == a && root->right->data == b) return true;
//         if (root->left->data == b && root->right->data == a) return true;
//     }
//     return parentSame(root->left, a, b) || parentSame(root->right, a, b);
// }

// bool isCousin(node *root, int a, int b) {

//     queue<node*> q;
//     q.push(root);
//     int l1 = -1, l2 = -1;
//     int level = 0;
//     while (!q.empty()) {
//         int n = q.size();
//         while (n--) {
//             node *temp = q.front();
//             q.pop();
//             if (temp->data == a) l1 = level;
//             if (temp->data == b) l2 = level;
//             if (temp->left) q.push(temp->left);
//             if (temp->right) q.push(temp->right);
//         }
//         level++;
//         if (l1 != l2) return false;
//         if (l1 != -1) break;
//     }
//     return !parentSame(root, a, b);
// }

// int main() {
//     node *root1 = createBinaryTree();
//     int a = 10, b = 12;
//     bool result = isCousin(root1, a, b);
//     cout << "Nodes " << a << " and " << b << " are cousins: " << (result ? "Yes" : "No") << endl;
//     a = 10, b = 11;
//     result = isCousin(root1, a, b);
//     cout << "Nodes " << a << " and " << b << " are cousins: " << (result ? "Yes" : "No") << endl;
//     a = 10, b = 13;
//     result = isCousin(root1, a, b);
//     cout << "Nodes " << a << " and " << b << " are cousins: " << (result ? "Yes" : "No") << endl;
//     return 0;
// }