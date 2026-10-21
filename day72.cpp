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



// REVERSE THE NODES OF THE GIVEN LINKED LIST
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