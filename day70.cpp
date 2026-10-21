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
//             node *temp;
//             temp = new node(arr[i]);
//             tail->next = temp;
//         }
//     }
//     node *temp = head;
//     while(temp) {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }