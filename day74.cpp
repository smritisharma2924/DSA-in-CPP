// Node of a Doubly Linked List
// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(int value) {
//         data = value;
//         *prev = NULL;
//         *next = NULL;
//     }
// };



// INSERTION AT THE START
// #include<iostream>
// using namespace std;
 
// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// int main() {
//     int value = 5;
//     node *head = NULL;
//     node *temp = new node(value);
//     if (head == NULL) { // list doesnt exist
//         head = temp;
//     }
//     else {
//         head->prev = temp;
//         temp->next = head;
//         head = temp;
//     }
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// INSERTION AT THE END
// #include<iostream>
// using namespace std;
 
// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// int main() {
//     int value = 5;
//     node *head = new node(1);
//     head->prev = NULL;
//     head->next = NULL;
//     node *temp = new node(value);
//     if (head == NULL) { // list doesnt exist
//         head = temp;
//     }
//     else { // list exists
//         node *tail = head;
//         while(tail->next) tail = tail->next;
//         tail->next = temp;
//         temp->prev = tail;
//     }
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// CREATING A DDL FROM AN ARRAY
// #include<iostream>
// using namespace std;
 
// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// node* createDdl(int arr[], node* head, node* curr, int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     if (curr == NULL) head = temp;
//     else {
//         curr->next = temp;
//         temp->prev = curr;
//     }
//     temp->next = createDdl(arr, head, temp, index+1, size);
//     return temp;
// }

// int main() {
//     int value = 5;
//     node *head = NULL;
//     int arr[] = {1,2,3,4,5};
//     head = createDdl(arr, head, head, 0, 5);
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// INSERTION AT ANY POINT OF THE DDL
// #include<iostream>
// using namespace std;
 
// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// node* createDll(int arr[], node* head, node* curr, int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     if (curr == NULL) head = temp;
//     else {
//         curr->next = temp;
//         temp->prev = curr;
//     }
//     temp->next = createDdl(arr, head, temp, index+1, size);
//     return temp;
// }

// int main() {
//     node *head = NULL;
//     int arr[] = {1,2,3,4,5};
//     head = createDdl(arr, head, head, 0, 5);
//     int value = 10, pos = 3; // insert 10 after the 2nd node
    
//     if (pos == 0) { // insert at start
//         // list exists
//         if (head == NULL) head = new node(value);
//         // doesnt exists
//         else {
//             node *temp = new node(value);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     else {
//         node *curr = head;
//         while (--pos) curr = curr->next; // go to the node,after which insertion is asked
//         // insert at end
//         if (curr->next == NULL) {
//             node *temp = new node(value);
//             temp->prev = curr;
//             curr->next = temp;
//         }
//         // insert at middle
//         else {
//             node *temp = new node(value);
//             temp->next = curr->next;
//             curr->next->prev = temp;
//             curr->next = temp;
//             temp->prev = curr;
//         }
//     }

//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// DELETION AT START OF THE DLL
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// node* createDll(int arr[], node *curr, int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->prev = curr;
//     temp->next = createDll(arr, temp, index+1, size);
//     return temp;
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     node *head = createDll(arr, NULL, 0, 5);
//     node *temp = head, *temp2 = head;
//     while (temp2) {
//         cout<<temp2->data<<" ";
//         temp2 = temp2->next;
//     }
//     cout<<endl;
//     head = head->next;
//     delete temp;
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// // DELETION AT THE END OF THE DLL
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// node* createDll(int arr[], node *curr, int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->prev = curr;
//     temp->next = createDll(arr, temp, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {1,2,3,4,5};
//     node *head = createDll(arr, NULL, 0, 5);
//     node *temp1 = head, *temp2 = head;
//     while(temp1) {
//         cout<<temp1->data<<" ";
//         temp1 = temp1->next;
//     }
//     cout<<endl;
//     while(temp2->next) temp2 = temp2->next;
//     temp2->prev->next = NULL;
//     delete temp2;
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// DELETION AT ANY POINT OF THE DLL
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *next;
//     node *prev;
//     node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };

// node* createDll(int arr[], node *curr, int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(arr[index]);
//     temp->prev = curr;
//     temp->next = createDll(arr, temp, index+1, size);
//     return temp;   
// };

// int main() {
//     int arr[] = {1,2,3,4,5};
//     node *head = createDll(arr, NULL, 0, 5);
//     int pos = 2;
//     node *curr = head;
//     while(--pos) curr = curr->next;
//     node *temp = curr->next;
//     curr->next = temp->next;
//     temp->next->prev = curr;
//     delete temp;
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }