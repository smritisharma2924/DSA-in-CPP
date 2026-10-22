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