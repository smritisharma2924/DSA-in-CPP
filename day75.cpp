// Problem 1 - Remove duplicate element from list
// given a list in sorted order, remove duplicates
// ex: 2->2->2->3->3->4->4
// OP: 2->3->4

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

// node* createLl(vector<int> nums, int index, int size) {
//     if (index == size) return NULL;
//     node *temp = new node(nums[index]);
//     temp->next = createLl(nums, index+1, size);
//     return temp;
// };

// int main() {
//     int arr[] = {2,2,2,3,3,4,4};
//     node *head = createLl(arr, 0, 7);
//     node *temp = head;
//     vector<int> nums;
//     nums.push_back(temp->data);
//     temp = temp->next;
//     int i=1;
//     while(temp) {
//         if (nums[i-1] != temp->data) {
//             nums.push_back(temp->data);
//             i++;
//         }
//         temp = temp->next;
//     }
//     node *temp2 = createLl(nums, 0, i);
//     while (head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<endl;
//     while (temp2) {
//         cout<<temp2->data<<" ";
//         temp2 = temp2->next;
//     }
//     return 0;
// }


// METHOD 2 - WITHOUT EXTRA SPACE
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
//     int arr[] = {2,2,2,3,3,4,4};
//     node *head = createLl(arr,0,7);
//     node *prev = head, *curr = head->next;
//     while (curr) {
//         if (prev->data == curr->data) {
//             node *temp = curr;
//             prev->next = curr->next;
//             curr = prev->next;
//             delete temp;
//         }
//         else {
//             prev = curr;
//             curr = curr->next;
//         }
//     }
//     while (head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// };



// Problem 2 - Merge two sorted list
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
//     int arr1[] = {2,4,5,7};
//     int arr2[] = {3,4,4,6,8,10};
//     node *head1 = createLl(arr1,0,4);
//     node *head2 = createLl(arr2,0,6);
//     node dummy(0);
//     node *temp1 = head1, *temp2 = head2, *temp3 = &dummy;
//     while (temp1 && temp2) {
//         if (temp1->data <= temp2->data) {
//             node *temp = new node(temp1->data);
//             temp3->next = temp;
//             temp3 = temp3->next;
//             temp1 = temp1->next;
//         } 
//         else {
//             node *temp = new node(temp2->data);
//             temp3->next = temp;
//             temp3 = temp3->next;
//             temp2 = temp2->next;
//         }
//     }
//     if (temp1) {
//         temp3->next = temp1;
//     }
//     if (temp2) {
//         temp3->next = temp2;
//     }
//     while (head1) {
//         cout<<head1->data<<" ";
//         head1 = head1->next;
//     }
//     cout<<endl;
//     while (head2) {
//         cout<<head2->data<<" ";
//         head2 = head2->next;
//     }
//     cout<<endl;
//     node *head3 = dummy.next;
//     while (head3) {
//         cout<<head3->data<<" ";
//         head3 = head3->next;
//     }
//     return 0;
// }



// Problem 3 - Sort a list which contains 0,1 and 2
// ex: 0->1->0->2->2->0->1
// OP: 0->0->0->1->1->2->2
// solve without using extra memory
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
//     int arr[] = {0,1,0,2,2,0,1};
//     node *head = createLl(arr,0,7);
//     int count0 = 0, count1 = 0, count2 = 0;
//     node *temp = head;

//     while (temp) {
//         cout<<temp->data<<" ";
//         if (temp->data == 0) count0++;
//         else if (temp->data == 1) count1++;
//         else count2++;
//         temp = temp->next;
//     }
//     temp = head;
//     while (count0--) {
//         temp->data = 0;
//         temp = temp->next;
//     }
//     while (count1--) {
//         temp->data = 1;
//         temp = temp->next;
//     }
//     while (count2--) {
//         temp->data = 2;
//         temp = temp->next;
//     }
//     cout<<endl;
//     while (head) {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }