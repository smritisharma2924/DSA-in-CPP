// Problem 1 - Add two numbers represented using the linked lists
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
// }

// node* reverseLl(node *head) {
//     node *prev = NULL;
//     node *curr = head;
//     node *futu = NULL;
//     while(curr) {
//         futu = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = futu;
//     }
//     return prev;
// }

// int main() {
//     int arr1[] = {9,7,6,8,4};
//     int arr2[] = {6,4,3,8};
//     node *head1 = createLl(arr1,0,5);
//     node *head2 = createLl(arr2,0,4);
    
//     // printing both the lists
//     node *temp1 = head1;
//     while(temp1) {
//         cout<<temp1->data<<" ";
//         temp1 = temp1->next;
//     }
//     cout<<endl;
//     node *temp2 = head2;
//     while(temp2) {
//         cout<<temp2->data<<" ";
//         temp2 = temp2->next;
//     }
//     // reversing first linked list
//     head1 = reverseLl(head1);
//     // reversing second linked list
//     head2 = reverseLl(head2);
    
//     // adding both of them
//     node *dummy = new node(0);
//     node *head = dummy, *current = head;
//     int digit, carry=0;
//     while (head1 || head2 || carry) {
//         digit = carry;
//         if (head1) {
//             digit += head1->data;
//             head1 = head1->next;
//         }
//         if (head2) {
//             digit += head2->data;
//             head2 = head2->next;
//         }
//         carry = digit/10;
//         digit %= 10;
//         node *temp = new node(digit);
//         current->next = temp;
//         current = current->next;
//     }
//     head = head->next; // to remove the first dummy node
//     // now reverse the final list as well
//     head = reverseLl(head);
//     cout<<endl;
//     while (head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// Problem 2 - Reverse a linked list in group of sizes k
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
// }

// node* reverseLl(node *head) {
//     node *prev = NULL;
//     node *curr = head;
//     node *futu = NULL;
//     while(curr) {
//         futu = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = futu;
//     }
//     return prev;
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     node *head = createLl(arr,0,5);
//     int k=3, x;
//     node *first, *futu, *temp=head;
//     first = new node(0);
//     while (temp) {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
//     first->next = head;
//     head = first;
//     while (first->next) {
//         // reverse k nodes
//         node *second = first->next;
//         node *prev = first;
//         node *curr = second;
//         x = k;
//         while(x && curr) {
//             futu = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = futu;
//             x--;
//         }
//         // reconnect the reversed group
//         first->next = prev;
//         second->next = curr;
//         first = second;
//     }
//     head = head->next;
//     while (head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }