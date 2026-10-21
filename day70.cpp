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