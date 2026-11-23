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



// Problem 3 - Top View of Binary Tree


// USING LEVEL ORDER TRAVERSAL
// 1. find pos of left most and right most node
// 2. create a vector "ans" of int of size (rightmost - leftmost + 1)
// 3. create a vector "filled" of bool to check if the position is filled or not
// 4. start traversing the tree using level order traversal and 
// 5. if filled[pos] is false,fill the ans vector with the first node encountered at each position
// 6. maintain an index queue to keep track of the position of each node in the tree, when traversing the tree, for left child push pos-1 and for right child push pos+1

/*            1
            /   \
          2       3
        /   \       \
      4       5       6
    /   \
  7       8
            \
              9
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

// void find(node *root, int pos, int &l, int &r) {
//     if (!root) return;
//     l = min(l,pos);
//     r = max(r,pos);
//     find(root->left, pos-1, l, r);
//     find(root->right, pos+1, l, r);

// }

// vector<int> topView(node *root) {
//     if (!root) return {};
//     int l=0, r=0;
//     find(root, 0, l, r);
//     vector<int> ans(r-l+1);
//     vector<bool> filled(r-l+1, 0);
//     queue<node*> q;
//     queue<int> index;
//     q.push(root);
//     index.push(-1 * l);
//     while (!q.empty()) {
//         node *temp = q.front();
//         q.pop();
//         int pos = index.front();
//         index.pop();

//         if (!filled[pos]) {
//             filled[pos] = 1;
//             ans[pos] = temp->data;
//         }
//         if (temp->left) {
//             q.push(temp->left);
//             index.push(pos-1);
//         }
//         if (temp->right) {
//             q.push(temp->right);
//             index.push(pos+1);
//         }
//     }
//     return ans;
// }

// vector<int> bottomView(node *root) {
//     if (!root) return {};
//     int l=0, r=0;
//     find(root, 0, l, r);
//     vector<int> ans(r-l+1);
//     queue<node*> q;
//     queue<int> index;
//     q.push(root);
//     index.push(-1 * l);
//     while (!q.empty()) {
//         node *temp = q.front();
//         q.pop();
//         int pos = index.front();
//         index.pop();
//         ans[pos] = temp->data;
//         if (temp->left) {
//             q.push(temp->left);
//             index.push(pos-1);
//         }
//         if (temp->right) {
//             q.push(temp->right);
//             index.push(pos+1);
//         }
//     }
//     return ans;
// }

// int main() {
//     node *root = createBinaryTree();
//     cout << "Top View: ";
//     vector<int> result = topView(root);
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
//     cout << "Bottom View: ";
//     result = bottomView(root);
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

