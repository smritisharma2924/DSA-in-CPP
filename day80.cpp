// CLONE A LINKED LIST
/*
     |------------> |------------>
     |            | |            |
    [1] -> [2] -> [3] -> [4] -> [5] -> nullptr
     ^      |      ^      |      |
     |------|      |------|      |
           ^                     |
           |---------------------|
*/
// BRUTE FORCE APPROACH
// step1: create duplicate without random pointer
// step2: assign random pointer from start
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node* random;

//     node(int value) {
//         data = value;
//         next = NULL;
//         random = NULL;
//     }
// };

// node* find(node *curr1, node *curr2, node *x) {
//     if (x == NULL) return NULL;
//     while (curr1 != x) {
//         curr1 = curr1->next;
//         curr2 = curr2->next;
//     }
//     return curr2;
// }

// int main() {
//     node* first  = new node(1);
//     node* second = new node(2);
//     node* third  = new node(3);
//     node* fourth = new node(4);
//     node* fifth  = new node(5);

//     // Next: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     // Random pointers
//     first->random = third;
//     second->random = first;
//     third->random = fifth;
//     fourth->random = third;
//     fifth->random = second;

//     node* head = first;

//     // Step 1
//     node *headcopy = new node(0);
//     node *tailcopy = headcopy;
//     node *temp = head;
//     while(temp) {
//         tailcopy->next = new node(temp->data);
//         tailcopy = tailcopy->next;
//         temp = temp->next;
//     }

//     tailcopy = headcopy;
//     headcopy = headcopy->next;
//     delete tailcopy;

//     // Step 2
//     tailcopy = headcopy;
//     temp = head;
//     while(temp) {
//         tailcopy->random = find(head, headcopy, temp->random);
//         tailcopy = tailcopy->next;
//         temp = temp->next;
//     }

//     // headcopy is the final made node
//     return 0;
// }
// here the timecomplexity becomes O(n2) as in the step 2 while loop we are using the
// find fxn which gives, complexity of n and n from while in main so O(n2)
// so if we are able to get results from the find fxn in O(1) then time comp gets reduced

// OPTIMISED APPROACH
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node* random;

//     node(int value) {
//         data = value;
//         next = nullptr;
//         random = nullptr;
//     }
// };

// int main() {
//     node* first  = new node(1);
//     node* second = new node(2);
//     node* third  = new node(3);
//     node* fourth = new node(4);
//     node* fifth  = new node(5);

//     // Next: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     // Random pointers
//     first->random = third;
//     second->random = first;
//     third->random = fifth;
//     fourth->random = third;
//     fifth->random = second;

//     node* head = first;

//     // Call and test your solution here.
//     node *temp = head;
//     node *headcopy = new node(0);
//     node *tailcopy = headcopy;
//     while(temp) {
//         tailcopy->next = new node(temp->data);
//         tailcopy = tailcopy->next;
//         temp = temp->next;
//     }
    
//     headcopy = headcopy->next;
//     delete tailcopy;
//     tailcopy = headcopy;
//     temp = head;

//     unordered_map<node*,node*>m;
//     while(temp) {
//         m[temp] = tailcopy;
//         temp = temp->next;
//         tailcopy = tailcopy->next;
//     }
//     tailcopy = headcopy;
//     temp = head;

//     while (temp) {
//         tailcopy->random = m[temp->random];
//         tailcopy = tailcopy->next;
//         temp = temp->next;
//     }

//     // headcopy is the final list
//     return 0;
// }
// here time complexity = O(n)
// extra space = O(n)



// MOST OPTIMIZED APPROACH
// original list : A -> B -> C -> nullptr
// cloned list : A -> A' -> B -> B' -> C -> C' -> nullptr


// step 1: create linked list
// step 2: insert them
// step 3: assign random pointers
// step 4: disconnect them

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node* random;

//     node(int value) {
//         data = value;
//         next = nullptr;
//         random = nullptr;
//     }
// };

// // Write your cloning solution here.

// int main() {
//     node* first  = new node(1);
//     node* second = new node(2);
//     node* third  = new node(3);
//     node* fourth = new node(4);
//     node* fifth  = new node(5);

//     // Next: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     // Random pointers
//     first->random = third;
//     second->random = first;
//     third->random = fifth;
//     fourth->random = third;
//     fifth->random = second;

//     node* head = first;

//     // make the new linked list
//     node *headcopy = new node(0);
//     node *tailcopy = headcopy;
//     node *temp = head;

//     while (temp) {
//         tailcopy->next = new node(temp->data);
//         temp = temp->next;
//         tailcopy = tailcopy->next;
//     }
//     tailcopy = headcopy;
//     headcopy = headcopy->next;
//     delete tailcopy;

//     tailcopy = headcopy;
//     temp = head;

//     // insert the new list in between of the original list
//     node *curr1 = head, *curr2 = headcopy, *front1, *front2;
//     while(curr1) {
//         front1 = curr1->next;
//         front2 = curr2->next;
//         curr1->next = curr2;
//         curr2->next = front2;
//         curr1 = front1;
//         curr2 = front2;
//     }
//     curr1 = head;

//     // make the random pointer connection
//     while (curr1) {
//         curr2 = curr1->next;
//         if (curr1->random) curr2->random = curr1->random->next;
//         curr1 = curr2->next;
//     }

//     // now disconnect the list
//     curr1 = head;
//     while (curr1->next) {
//         front1 = curr1->next;
//         curr1->next = front1->next;
//         curr1 = front1;
//     }

//     // headcopy has the final cloned list

//     return 0;
// }