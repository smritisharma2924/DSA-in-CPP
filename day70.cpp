// LINKED LIST

// SINGLY LINKED LIST

// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// int main() {
//     node *head;
//     head = new node(4);
// }

// INSERTION IN LINKED LIST

// AT STARTING POSITION
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

// int main() {
//     node *head;
//     head = new node(4); 
//     node *temp;
//     temp = new node(28);
//     temp->next = head;
//     head = temp;

//     // TRAVERSING
//     node *ttemp = head;
//     while (ttemp != NULL) {
//         cout<<ttemp->data<<" ";
//         ttemp = ttemp->next;
//     }
//     return 0;
// }



// INSERTING ARRAY VALUES IN LINKED LIST FROM STARTING POSITION
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

// int main() {
//     int arr[] = {2,4,6,8,10};
//     node *head = NULL;
//     // inserting in the linked list
//     for(int i=0 ; i<5 ; i++) {
//         if (head == NULL) { // the list doesnt exists yet
//             head = new node(arr[i]);
//         }
//         else { // list already exists
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     // traversing the list
//     node *temp = head;
//     while(temp) {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     return 0;
// }



// INSERTING ARRAY VALUES IN LINKED LIST FROM ENDING POSITION
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

// int main() {
//     int arr[] = {2,4,6,8,10};
//     node *head;
//     head = NULL;
//     for(int i=0 ; i<5 ; i++) {
//         if (head == NULL) {
//             head = new node(arr[i]);
//         }
//         else {
//             node *tail;
//             tail = head;
//             while(tail->next) {
//                 tail = tail->next;
//             }
//             tail->next = new node(arr[i]);
//         }
//     }
//     node *temp = head;
//     while(temp) {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }


// BETTER APPROACH
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

// int main() {
//     int arr[] = {2,4,6,8,10};
//     node *head = NULL;
//     node *tail = NULL;
//     for(int i=0 ; i<5 ; i++) {
//         if (head == NULL) {
//             head = new node(arr[i]);
//             tail = head;
//         }
//         else {
//             tail->next = new node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     node *temp = head;
//     while(temp) {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }



// ADD NODE AT END, USING RECURSION
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
//     node *temp;
//     temp = new node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {2,4,6,8,10};
//     node *head = createLinkedList(arr, 0, 5);
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// ADD NODE AT BEGINNING, USING RECURSION
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

// node* createLinkedList(int arr[], int index, int size, node *prev) {
//     if (index == size) return prev;
//     node *temp = new node(arr[index]);
//     temp->next = prev;
//     return createLinkedList(arr, index+1, size, temp);
// };

// int main() {
//     int arr[] = {2,4,6,8,10};
//     node *head = createLinkedList(arr, 0, 5, NULL);
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// INSERTION AT ANY MIDDLE POSITION
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
//     node *temp;
//     temp = new node(arr[index]);
//     temp->next = createLinkedList(arr, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {2,4,6,8};
//     node *head = createLinkedList(arr, 0, 4);
//     int pos = 2, value = 10;
//     // Entering 10 at position 2(index 2/ after 2 nodes)
//     node *temp = head;
//     pos--;
//     while(pos--) temp = temp->next;
//     node *temp2 = new node(value);
//     temp2->next = temp->next;
//     temp->next = temp2;
//     while(head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };