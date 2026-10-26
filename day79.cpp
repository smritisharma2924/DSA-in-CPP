// Problem - Flattening a Linked List
// given:

// root
// |
// 5 -> 10 -> 19 -> 28 -> 30
// |    |      |     |     |
// 7    20    22    35    34
// |    |      |     |     |
// 8    40    50    40    40
// |                 |
// 30               45

// return a linked list in sorted form
// 5 -> 7 -> 8 -> 10 -> ...

// Problem - Flattening a Linked List

// #include<iostream>
// #include<vector>
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;
//     node *bottom;

//     node(int value) {
//         data = value;
//         next = NULL;
//         bottom = NULL;
//     }
// };

// // Create a vertical linked list
// node* createVertical(vector<int> arr) {
//     if (arr.empty()) return NULL;

//     node *head = new node(arr[0]);
//     node *temp = head;

//     for (int i = 1; i < arr.size(); i++) {
//         temp->bottom = new node(arr[i]);
//         temp = temp->bottom;
//     }

//     return head;
// }

// node* mergeTwo(node *head1, node *head2) {
//     node *dummy = new node(0);
//     node *head = dummy, *curr = head;
//     while (head1 && head2) {
//         if (head1->data <= head2->data) {
//             curr->bottom = head1;
//             head1 = head1->bottom;
//         }
//         else {
//             curr->bottom = head2;
//             head2 = head2->bottom;

//         }
//         curr = curr->bottom;
//     }
//     if (head1) curr->bottom = head1;
//     if (head2) curr->bottom = head2;
//     return head->bottom;
// }

// // Print flattened linked list
// void printList(node* head) {
//     while (head) {
//         cout << head->data << " ";
//         head = head->bottom;
//     }
//     cout << endl;
// }

// int main() {

//     // Create the 5 vertical linked lists
//     node *head1 = createVertical({5, 7, 8, 30});
//     node *head2 = createVertical({10, 20, 40});
//     node *head3 = createVertical({19, 22, 50});
//     node *head4 = createVertical({28, 35, 40, 45});
//     node *head5 = createVertical({30, 34, 40});

//     // Connect them horizontally
//     head1->next = head2;
//     head2->next = head3;
//     head3->next = head4;
//     head4->next = head5;

//     node *root = head1;

//     node *h1, *h2, *h3;
//     while (root->next) {
//         h1 = root;
//         h2 = root->next;
//         h3 = root->next->next;
//         h1->next = NULL;
//         h2->next = NULL;
//         root = mergeTwo(h1, h2);
//         root->next = h3;
//     }

//     // Print result
//     printList(root);

//     return 0;
// }
// its time complexity is O(nm), n is no of list and m is avg no of elements in list



/*
Problem - Merge K Sorted Linked Lists (LeetCode 23)

Given K sorted linked lists, merge them into a single
sorted linked list in ascending order.

Example:
Input:  [1->4->5], [1->3->4], [2->6]
Output: 1->1->2->3->4->4->5->6

Condition: All K linked lists are already sorted.

Target Time Complexity: O(N log K)
Auxiliary Space: O(K) using min-heap
(N = total nodes, K = number of lists)
*/
// #include<iostream>
// #include<vector>
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;

//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// // Create a linked list from an array
// node* createLl(vector<int> arr, int index, int size) {
//     if (index == size) return NULL;

//     node *temp = new node(arr[index]);
//     temp->next = createLl(arr, index+1, size);

//     return temp;
// }

// node* merge(node *root, node *head2) {
//     node *head1 = root, *head2 = root;
//     // while(i--) head2 = head2->next;
//     node *head = new node(0);
//     node *curr = head;
//     while(head1 && head2) {
//         if (head1->data <= head2->data) {
//             curr->next = head1;
//             head1 = head1->next;
//         }
//         else {
//             curr->next = head2;
//             head2 = head2->next;
//         }
//         curr = curr->next;
//     }
//     if (head1) curr->next = head1;
//     if (head2) curr->next = head2;
//     return head->next;
// }

// // YOUR TASK: Merge K sorted linked lists
// node* mergeKLists(vector<node*>& lists) {

//     // Write your logic here
//     node *head = lists[0];
//     for (int i=1 ; i < lists.size() ; i++) {
//         head = merge(head, lists[i]);
//     }
//     return head;  // Replace with your solution
// }

// // Print linked list
// void printList(node *head) {
//     while (head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {

//     // Creating 8 sorted linked lists
//     node *head1 = createLl({1,2,4}, 0, 3);
//     node *head2 = createLl({3,6}, 0, 2);
//     node *head3 = createLl({4,5,9,10}, 0, 4);
//     node *head4 = createLl({7}, 0, 1);
//     node *head5 = createLl({6,8}, 0, 2);
//     node *head6 = createLl({2,7,8,10}, 0, 4);
//     node *head7 = createLl({17,19,22}, 0, 3);
//     node *head8 = createLl({4,18}, 0, 2);

//     // Store all head pointers in a vector
//     vector<node*> lists = {
//         head1, head2, head3, head4,
//         head5, head6, head7, head8
//     };

//     int k = lists.size();

//     // Print all original linked lists
//     for (int i = 0; i < k; i++) {
//         cout << "List " << i+1 << ": ";
//         printList(lists[i]);
//     }

//     // Merge all K sorted linked lists
//     node *head = mergeKLists(lists);

//     // Print merged linked list
//     cout << "Merged List: ";
//     printList(head);
//     return 0;
// }
// here the complexity is O(kn), k is size of lists array and n is avg no of nodes in each list

// solving this code using merge sort
// #include<iostream>
// #include<vector>
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;

//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// // Create a linked list from an array
// node* createLl(vector<int> arr, int index, int size) {
//     if (index == size) return NULL;

//     node *temp = new node(arr[index]);
//     temp->next = createLl(arr, index+1, size);

//     return temp;
// }

// node* merge(node *head1, node *head2) {
//     node *head = new node(0);
//     node *curr = head;
//     while(head1 && head2) {
//         if (head1->data <= head2->data) {
//             curr->next = head1;
//             head1 = head1->next;
//         }
//         else {
//             curr->next = head2;
//             head2 = head2->next;
//         }
//         curr = curr->next;
//     }
//     if (head1) curr->next = head1;
//     if (head2) curr->next = head2;
//     return head->next;
// }

// node* mergeSort(vector<node*>& lists, int start, int end) {
//     if (start >= end) return lists[start];
//     int mid = start + (end - start)/2;
//     mergeSort(lists, start, mid);
//     mergeSort(lists, mid+1, end);
//     lists[start] = merge(lists[start], lists[mid+1]);
//     return lists[start];
// }

// node* mergeKLists(vector<node*>& lists) {
//     return mergeSort(lists, 0, lists.size() - 1);
// }

// // Print linked list
// void printList(node *head) {
//     while (head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {

//     // Creating 8 sorted linked lists
//     node *head1 = createLl({1,2,4}, 0, 3);
//     node *head2 = createLl({3,6}, 0, 2);
//     node *head3 = createLl({4,5,9,10}, 0, 4);
//     node *head4 = createLl({7}, 0, 1);
//     node *head5 = createLl({6,8}, 0, 2);
//     node *head6 = createLl({2,7,8,10}, 0, 4);
//     node *head7 = createLl({17,19,22}, 0, 3);
//     node *head8 = createLl({4,18}, 0, 2);

//     // Store all head pointers in a vector
//     vector<node*> lists = {
//         head1, head2, head3, head4,
//         head5, head6, head7, head8
//     };

//     int k = lists.size();

//     // Print all original linked lists
//     for (int i = 0; i < k; i++) {
//         cout << "List " << i+1 << ": ";
//         printList(lists[i]);
//     }

//     // Merge all K sorted linked lists
//     node *head = mergeKLists(lists);

//     // Print merged linked list
//     cout << "Merged List: ";
//     printList(head);
//     cout<<"hi";
//     return 0;
// }