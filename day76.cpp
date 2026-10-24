// CIRCULAR LINKED LIST
// the last node points to the first node


// Problem 1 - Detect Loop in linked list
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

// node* createLl(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLl(arr, index+1, size);
//     return temp;
// };

// bool check(vector<node*> &visited, node *curr) {
//     for (int i=0 ; i<visited.size() ; i++) {
//         if (visited[i] == curr) return true;
//     }
//     return false;
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     node *head = createLl(arr,0,10);
//     node *temp = head, *start = NULL;
//     while (temp->next) {
//         if (temp->data == 4) start = temp;
//         temp = temp->next;
//     }
//     temp->next = start;

//     // now detecting the loop
//     node *curr = head;
//     vector<node*> visited;
//     while(curr) {
//         if(check(visited,curr)) {
//             cout<<"Loop exists.";
//             return 0;
//         }
//         visited.push_back(curr);
//         curr = curr->next;
//     }
//     cout<<"Loop doesnt exists.";
//     return 0;
// }
// gives TLE as it takes n2 time in the worst case


// ===============================================
// SOLVING VIA UNORDERED MAP

/*
UNORDERED MAP (C++ STL)
#include <unordered_map>

- Stores key-value pairs with unique keys.
- Uses hashing; elements are unordered.
- Insert, search, delete: O(1) average, O(n) worst.

unordered_map<int, int> mp;

mp[1] = 10;                 // Insert / update
mp.insert({2, 20});         // Insert
mp[1];                      // Access value
mp.count(1);                // Check existence (0 or 1)
mp.find(1) != mp.end();     // Search
mp.erase(1);                // Delete
mp.size();                  // Number of pairs
mp.empty();                 // Check if empty
mp.clear();                 // Remove all

// Traversal
for (auto it : mp)
    cout << it.first << " " << it.second << endl;

// Frequency counting
for (int x : arr)
    mp[x]++;

// map: Sorted keys, O(log n)
// unordered_map: Unsorted keys, O(1) average
// unordered_set: Stores only unique keys
*/
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

// node* createLl(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLl(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     node *head = createLl(arr,0,10);
//     node *temp = head, *start = NULL;
//     while (temp->next) {
//         if (temp->data == 4) start = temp;
//         temp = temp->next;
//     }
//     temp->next = start;

//     // now detecting the loop
//     unordered_map<node*,bool> visited;
//     node *curr = head;
//     while (curr) {
//         if (visited[curr] == 1) {
//             cout<<"Loop exists.";
//             return 0;
//         }
//         visited[curr] = 1;
//         curr = curr->next;
//     }
//     cout<<"Loop doesnt exists.";
//     return 0;
// }
// but we have time complexity constant but space isnt optimized


// =====================================
// Solution using fast and slow pointers,
// constant space complexity

// idea is that if loop exists in the list then fast and slow both pointers will meet at some point.
// and if loop isnt present then fast pointer will go to null at some point

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

// node* createLl(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLl(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     node *head = createLl(arr,0,10);
//     node *temp = head, *start = NULL;
//     while (temp->next) {
//         if (temp->data == 4) start = temp;
//         temp = temp->next;
//     }
//     temp->next = start;

//     // now detecting the loop
//     node *slow = head, *fast = head->next;
//     while (fast && fast->next) {
//         if (slow == fast) {
//             cout<<"Loop exists.";
//             return 0;
//         }
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     cout<<"Loop doesnt exists.";
//     return 0;
// }



// Problem 2 - Find length of loop
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

// node* createLl(int arr[], int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->next = createLl(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     node *head = createLl(arr,0,10);
//     node *temp = head, *start = NULL;
//     while (temp->next) {
//         if (temp->data == 4) start = temp;
//         temp = temp->next;
//     }
//     temp->next = start;
//     bool loop = false;
//     // now detecting the loop
//     node *slow = head, *fast = head->next;
//     while (fast && fast->next) {
//         if (slow == fast) {
//             loop = true;
//             cout<<"Loop exists."<<endl;
//             break;
//         }
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     // finding the length of the loop
//     if (loop) {
//         int len = 1;
//         slow = slow->next;
//         while (slow != fast) {
//             len++;
//             slow = slow->next;
//         }
//         cout<<"Length of the loop is: "<<len;
//         return 0;
//     }
//     cout<<"Loop doesnt exists.";
//     return 0;
// }