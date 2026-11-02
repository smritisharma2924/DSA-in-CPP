// Problem 1 - Implement two stack in an array
// solved on gfg by using the two pointer approach from different ends to function as stack



// Problem 2 - N Stack in an array
// implement n number of stacks using a single array

// class node{
//     public:
//     int index;
//     node *next;
//     node(int x) {
//         index = x;
//         next = NULL;
//     }
// };

// class nStack{
//     public:
//     int *arr; // original data
//     node **top; // top element index of a particular stack
//     stack<int>st; // empty index
//     nStack(int n, int s) {
//         arr = new int[s];
//         top = new node *[n];
//         for (i=0 ; i<n ; i++) top[i] = NULL;
//         for (i=0 ; i<s ; i++) st.push(i);
//     }
//     // push value x into stack m, return 1 if success otherwise 0
//     bool push(int x, int m) {
//         if (st.empty()) return 0;
//         arr[st.top()] = x;
//         node *temp = new node(st.top());
//         temp->next = top[m-1];
//         top[m-1] = temp;
//         st.pop();
//         return 1;
//     }
//     int pop(int m) {
//         if (top[m-1] == NULL) return -1;
//         st.push(top[m-1]->index);
//         int element = arr[top[m-1]->index];
//         top[m-1] = top[m-1]->next;
//         return element;
//     }
// }