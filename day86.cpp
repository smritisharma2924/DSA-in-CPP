// Problem 1 - Get minimum element from stack
// design a stack such that we can use the following operations
// 1. push  2. pop  3. getMin
// execute all these operations in O(1) time

// 1 <= value of the stack <= 100

// stack<int>st1; // original value
// stack<int>st2; // minimum value

// void push(int x) {
//     if (st1.empty()) {
//         st1.push(x);
//         st2.push(x);
//     }
//     else {
//         st1.push(x);
//         st2.push(min(x,st2.top()));
//     }
// }

// int pop() {
//     if (st1.empty()) return -1;
//     else {
//         int element = st1.top();
//         st1.pop();
//         st2.pop();
//         return element;
//     }
// }

// int getMin() {
//     if (st2.empty()) return -1;
//     else return st2.top();
// }

// to get this solution with using only 1 stack. we will use the multiplication and modulus operators 
// ex: we need to store 3 and 17 together
// store 3*101 + 17 = 310
// get first value by /101 and second value by %101

// void push(int x) {
//     if (st1.empty()) st1.push(x*101+x);
//     else st1.push(x*101 + min(x, st1.top()%101));
// }
// int pop() {
//     if (s1.empty()) return -1;
//     else {
//         int ele = st1.top()/101;
//         st1.pop();
//         return ele;
//     }
// }
// int getMin() {
//     if (st1.empty()) return -1;
//     else return st1.top()%101;
// }



// Problem 2 - Maximum of minimum for every window size
// ex: 10 20 15 50 10 70 30 
// for k=3
// minimum: 10 15 10 10 10
// maximum: 15

// return an array where each index represents the window size and its element is its answer respectively

// index   0    1    2    3    4    5    6
// ans: | 70 | 30 | 15 | 10 | 10 | 10 | 10 |
// size:   1    2    3    4    5    6    7

// vector<int>ans(0,nums.size());
// for(i=0 ; i<n ; i++) {
//     for(j=0 ; j<n-i ; j++) { // no of window for each i, 7 6 5 ...
//         int mini = INT_MAX;
//         for(k=j ; k<i+1+j ; k++) { // starts with j then goes till window size, 1 2 3 ...
//             mini = min(mini,nums[k]);
//         }
//         ans[i] = min(mini,ans[i]);
//     }
// }
// return ans;
// time complexity: O(n3)



// OPTIMISED VERSION
// vector<int> ans(n,0);
// stack<int>st;
// for(i=0 ; i<n ; i++) {
//     while (!st.empty() && arr[i] < arr[st.top()]) {
//         int index = st.top();
//         st.pop();
//         // if (st.empty()) {
//         //     int range = i;
//         //     ans[range-1] = max(ans[range-1],arr[index]);    
//         // }
//         // else {
//         //     int range = i - st.top() - 1;
//         //     ans[range-1] = max(ans[range-1],arr[index]);    
//         // }
//         // range is found like NSR - NSL - 1
//         int range = st.empty() ? i : i - st.top() - 1;
//         ans[range-1] = max(ans[range-1],arr[index]);
//     }
//     st.push(i);
// }
// // elements remaining in the stack never found a smaller element than them
// // therefore the NSR is by default n
// while (!st.empty()) {
//     int index = st.top();
//     st.pop();
//     int range = st.empty() ? n : n - st.top() - 1;
//     ans[range-1] = max(ans[range-1],arr[index]);
// }
// for (i = n-1 ; i>=0 ; i--) {
//     ans[i] = max(ans[i], ans[i+1]);
// }
// return ans;