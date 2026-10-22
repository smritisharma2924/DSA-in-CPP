// Problem 1 - Remove Nth node from the end. LEETCODE 19
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *next;
//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// node* createLinkedList(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {10,20,30,40,50};
//     node *head = createLinkedList(arr,0,5);
//     int pos = 2; // delete the second node from last i.e. 40
//     int count = 0;
//     node *temp = head;
//     while(temp) {
//         count++;
//         temp = temp->next;
//     }
//     node *prev = NULL, *curr = head;
//     count -= pos;
//     while(count--) {
//         prev = curr;
//         curr = curr->next;
//     }
//     prev->next = curr->next;
//     delete curr;
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// Problem 2 - Remove every k node
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *next;
//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// node* createLinkedList(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// };

// void deleteKth(node *head, node *curr, node *prev, int k, int i) {
//     if (curr == NULL) return; // base case
//     if (i == k) { // deletion node
//         node *temp = curr;
//         if (prev == NULL) head = curr->next;
//         else prev->next = curr->next;
//         curr = curr->next;
//         delete temp;
//         i = 1;
//     }
//     else { // normal node
//         prev = curr;
//         curr = curr->next;
//         i++;
//     }
//     deleteKth(head, curr, prev, k, i);
//     return;
// };

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     node *head = createLinkedList(arr,0,10);
//     deleteKth(head, head, NULL, 3, 1);
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// Problem 3 - Rotate List LEETCODE 61
// ex: 1 2 3 4 5 6
// rotate by 1: 6 1 2 3 4 5
// rotate by 2: 5 6 1 2 3 4
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *next;
//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// node* createLinkedList(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     node *head = createLinkedList(arr,0,10);
//     node *temp = head, *curr = head, *prev = NULL;
//     int count = 0, k = 2;
//     while(temp) { // count total nodes
//         count++;
//         temp = temp->next;
//     }
//     count -= k;
//     while(count--) { // get to the kth last node
//         prev = curr;
//         curr = curr->next;
//     }
//     prev->next = NULL; // break the chain of the list 1->2->3->4 5->6->7->8->9->10. prev at 4. curr at 5.
//     temp = curr;
//     while(temp->next) { // find the tail of the second list
//         temp = temp->next;
//     }
//     temp->next = head; // join that tail to the first list head
//     head = curr; // make head to curr position. rotation done
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// Problem 4 - Check Palindrome
// using an extra space
// #include<iostream>
// #include<vector>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *next;
//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// node* createLinkedList(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {1,2,3,3,2,1};
//     node *head = createLinkedList(arr,0,6);
//     vector<int> ans;
//     node *temp = head;
//     while(temp) {
//         ans.push_back(temp->data);
//         temp = temp->next;
//     }
//     int start = 0, end = ans.size()-1;
//     while (start < end) {
//         if (ans[start] == ans[end]) {
//             start++;
//             end--;
//         }
//         else {
//             cout<<"Not palindrome.";
//             return 0;
//         }
//     }
//     cout<<"Palindrome";
//     return 0;
// };