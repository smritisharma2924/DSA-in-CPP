// Problem 1 - Remove loop in linked list
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
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     node *head = createLl(arr,0,12);
//     node *start = head, *temp = NULL;
//     while(start->next) {
//         if (start->data == 4) temp = start;
//         start = start->next;
//     }
//     start->next = temp;

//     // detecting loop
//     node *slow = head, *fast = head;
//     bool loop = false;
//     while (fast) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast) {
//             loop = true;
//             break;
//         }
//     }
//     if (loop) {
//         slow = head;
//         // Fiind the starting node
//         while (slow != fast) {
//             slow = slow->next;
//             fast = fast->next;
//         }
//         // Find the last node of the cycle
//         node *temp = slow;
//         while (temp->next != slow) temp = temp->next;
//         // Remove cycle
//         temp->next = NULL;
//     }
//     while (head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }



// Problem 2 - Intersection point in Y shaped linked list
// ex:
// 1 → 2 → 3 → 4
//               .   
//                5 → 6 → 7 → NULL
//               /
//          8 → 9
// returns the node 5

// #include<iostream>
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

// int main() {
//     // Creating first linked list: 1 -> 2 -> 3 -> 4
//     node *head1 = new node(1);
//     head1->next = new node(2);
//     head1->next->next = new node(3);
//     head1->next->next->next = new node(4);

//     // Creating second linked list: 8 -> 9
//     node *head2 = new node(8);
//     head2->next = new node(9);

//     // Creating common linked list: 5 -> 6 -> 7
//     node *common = new node(5);
//     common->next = new node(6);
//     common->next->next = new node(7);

//     // Connecting first list to node 5
//     head1->next->next->next->next = common;

//     // Connecting second list to node 5
//     head2->next->next = common;


//     int len1=0, len2=0;
//     node *temp1 = head1, *temp2 = head2;
//     while (temp1) {
//         len1++;
//         temp1 = temp1->next;
//     }
//     while (temp2) {
//         len2++;
//         temp2 = temp2->next;
//     }
//     temp1 = head1, temp2 = head2;
//     int i = len1 - len2;
//     if (i>0) while(i--) temp1 = temp1->next;
//     else if(i<0) {
//         i = -i;
//         while(i--) temp2 = temp2->next;
//     }

//     while (temp1 && temp2) {
//         if (temp1->data == temp2->data) {
//             cout<<temp1->data<<" is the coneecting node.";
//             break;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     return 0;
// }