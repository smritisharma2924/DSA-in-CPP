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