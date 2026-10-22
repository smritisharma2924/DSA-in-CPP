// REVERSE A LINKED LIST - LEETCODE 206
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
//     int arr[] = {2,4,6,8,10};
//     node *head = createLinkedList(arr,0,5);
//     vector<int> list(5);
//     node *temp = head;
//     while(temp) {
//         list.push_back(temp->data);
//         temp = temp->next;
//     }
//     // now add this vector in reverse order into the linked list
//     temp = head;
//     int i = list.size()-1;
//     while(temp) {
//         temp->data = list[i];
//         temp = temp->next;
//         i--;
//     }
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// REVERSE THE NODES OF THE GIVEN LINKED LIST - LC 206
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
//     int arr[] = {2,4,6,8,10};
//     node *head = createLinkedList(arr,0,5);
//     node *curr = head;
//     node *prev = NULL;
//     node *futu = NULL;
//     while(curr) {
//         futu = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = futu; 
//     }
//     head = prev;
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// REVERSE THE LINKED LIST USING RECURSION - LC 206
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

// node* reverse(node *curr, node *prev) {
//     if (curr == NULL) return prev;
//     node *futu = curr->next;
//     curr->next = prev;
//     return reverse(futu, curr);
// };

// int main() {
//     int arr[] = {2,4,6,8,10};
//     node *head = createLinkedList(arr,0,5);
//     node *temp = reverse(head, NULL);
//     while(temp) {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     return 0;
// };



// MIDDLE OF A LINKED LIST - LEETCODE 876
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
//     int arr[] = {2,4,6,8,10,12};
//     node *head = createLinkedList(arr,0,6);
//     int count = 0;
//     node *temp = head;
//     while(temp) {
//         count++;
//         temp = temp->next;
//     }
//     count /= 2;
//     temp = head;
//     while(count--) temp = temp->next;
//     cout<<"Value at the middle position is: "<<temp->data;
//     return 0;
// };



// HERE WE WERE TRAVERSING THE LINKED LIST 2 TIMES

// CONCEPT OF SLOW AND FAST POINTERS
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
//     int arr[] = {2,4,6,8,10,12};
//     node *head = createLinkedList(arr,0,6);
//     node *slow = head;
//     node *fast = head;
//     while (fast && fast->next) {
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     cout<<"Value at the middle position is: "<<slow->data;
//     return 0;
// };