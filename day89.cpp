// Problem 1 - Print all elements in queue

// vector<int>ans;
// while(!q.empty()) {
//     cout<<q.front()<<" ";
//     ans.push_back(q.front());
//     q.pop();
// }
// for(int i=0  i<ans.size() ; i++) q.push(ans[i]);


// Approach 2
// int n = q.size();
// while(n--) {
//     cout<<q.front()<<" ";
//     q.push(q.front());
//     q.pop();
// }



// Problem 2 - Queue Reversal

// Approach 1 -
// using an extra vector to store elements and poppin from queue
// then pushing the values from the vector in reverse order

// Approach 2 - using an stack to store elements then inserting into queue
// stack<int>st;
// while(!q.empty()) {
//     st.push(q.front());
//     q.pop();
// }
// while(!st.empty()) {
//     q.push(st.top());
//     st.pop();
// }



// Problem 3 - Reverse first k elements of queue

// push first k element into the stack and pop from queue
// not size of queue here as n
// push elements from stack into the queue
// push the first n elements of the queue to end and pop everytime
// stack<int>st;
// while (k--) {
//     st.push(q.front());
//     q.pop();
// }
// n = q.size();
// while (!st.empty()) {
//     q.push(st.top());
//     st.pop();
// }
// while(n--) {
//     q.push(q.front());
//     q.pop();
// }



// Problem 4 - Time needed to buy tickets
// LEETCODE 2073

// Approach 1 -
// push all index in queue
// set time to zero
// give ticket to first one, time++, ticket[index]--
// if ticket[index] > 0 go to line
// if == 0 then return time
// worst case time complexity is O(n2)

// Approach 2 -
// for elements from 0 to k
// time += min(tickets[k],tickets[i]);
// for elements from k+1 to n
// time += min(tickets[k]-1,tickets[i]);



// Problem 5 - Implemeny Queue using Stack

// class Queue{
//     stack<int>st1;
//     stack<int>st2;
//     public:
//     bool empty() {
//         return st1.empty() && st2.empty();
//     }
//     void push(int x) {
//         st1.push();
//     }
//     int pop() {
//         if(empty()) return -1;
//         if(!st2.empty()) {
//             int element = st2.top();
//             st2.pop();
//             return element;
//         }
//         else {
//             while (!st1.empty()) {
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//             int element = st2.top();
//             st2.pop();
//             return element;
//         }
//     }
//     int peek() {
//         if(empty()) return -1; 
//         if (!st2.empty()) return st2.top();
//         else {
//             while (!st1.empty()) {
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//             return st2.top();
//         }
//     }
// };



// Problem 6 - Implement Stack using Queue

// class Stack{
//     queue<int>q1;
//     queue<int>q2;
//     public:
//     bool empty() {
//         return q1.empty() && q2.empty();
//     }
//     void push(int x) {
//         if (empty()) q1.push(x);
//         else if (q1.empty()) q2.empty();
//         else q1.push(x);
//     }
//     int pop() {
//         if (empty()) return -1;
//         else if (q1.empty()) {
//             while (q2.size > 1) {
//                 q1.push(q2.front());
//                 q2.pop();
//             }
//             int ele = q2.front();
//             q2.pop();
//             return ele;
//         }
//         else {
//             while (q1.size > 1) {
//                 q2.push(q1.front());
//                 q1.pop();
//             }
//             int ele = q1.front();
//             q1.pop();
//             return ele;
//         }
//     }
// }