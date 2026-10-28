// Problem 1 - Next Greater Element
// ex: 8 6 4 7 4 9 10 8 12
// op: 9 7 7 9 9 10 12 12 -1

// BRUTE FORCE
// vector<int> ans(n,-1);
// for(int i=0 ; i<n ; i++) {
//     for(int j = i+1 ; j<n ; j++) {
//         if (arr[j]>arr[i]) {
//             ans[i] = arr[j];
//             break;
//         }
//     }
// }
// time complexity O(n2)


// BETTER
// stack<int>st;
// vector<int>ans(n,-1);
// for(int i=0 ; i<n ; i++) {
//     // if (st.empty()) st.push(i); // our code will work with while loop normally without these if else statements
//     // else {
//         while (!st.empty()) && (arr[i] > arr[st.top()])) {
//             ans[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i);
//     // }
// }
// time complexity O(n)
// space complexity O(n)



// Problem 2 - Next Smaller Element
// ex: 7 9 12 10 14 8 3 6 9
// op: 3 8 10 8 8 3 -1 -1 -1

// vector<int> ans(n,-1);
// stack<int> st;
// for(int i=0 ; i < arr.size() ; i++) {
//     while(!st.empty() && arr[i] < arr[st.top()]) {
//         ans[st.top()] = arr[i];
//         st.pop();
//     }
//     st.push(i);
// }
// return ans;



// Problem 3 - Smallest Number on left
// ex: 4 13 11 5 9 7 8 6
// op: -1 4  4 4 5 5 7 5

// vector<int> ans(n,-1);
// stack<int>st;
// for(int i=arr.size()-1 ; i >= 0 ; i--) {
//     while(!st.empty() && arr[i] < arr[st.top()]) {
//         ans[st.top()] = arr[i];
//         st.pop(); 
//     }
//     st.push(i);
// }
// return ans;



// Problem 4 - Next Greater Element 2
// ex: 6  10 7 4 8  9 4
// op: 10 -1 9 8 9 10 6

// vector<int>ans(n,-1);
// stack<int>st;
// for(int i=0 ; i < 2n-1 ; i++) {
//     while(!st.empty() && arr[i%n] > arr[st.top()]) {
//         ans[st.top()] = arr[i%n];
//         st.pop();
//     }
//     st.push(i%n);
// }
// return ans;



// Problem 5 - Stock Span Problem
// ex: 100 80 55 70 60 75 85
// op:  1   1  1  2  1  4  6

// stack<int>st;
// vector<int>ans(n,1);
// for(int i=n-1 ; i >= 0 ; i--) {
//     while(!st.empty() && price[i] > price[st.top()]) {
//         ans[st.top()] = st.top() - i;
//         st.pop();
//     }
//     st.push(i);
// }
// while(!st.empty()) {
//     ans[st.top()] = st.top()+1;
//     st.pop();
// }
// return ans;