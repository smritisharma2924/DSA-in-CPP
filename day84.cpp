// Problem 1 - Largest Rectangle in Histogram

// vector<int>right(n);
// vector<int>left(n);
// stack<int>st;
// // filling the right array as next smallest element
// for(int i=0 ; i <= n ; i++) {
//     while(!st.empty() && arr[i] < arr[st.top()]) {
//         right[st.top()] = i;
//         st.pop();
//     }
//     st.push(i);
// }
// while (!st.empty()) {
//     right[st.top()] = n; // if there is no next smallest then the size of the array(n) will be the minimum for it
//     st.pop();
// }
// for(int i=n-1 ; i >= 0 ; i--) {
//     while(!st.empty() && arr[i] < arr[st.top()]) {
//         left[st.top()] = i;
//         st.pop();
//     }
//     st.push(i);
// }
// while (!st.empty()) {
//     left[st.top()] = -1;
//     st.pop();
// }

// int ans = 0;
// for(int i=0 ; i<n ; i++) {
//     ans = max(ans,arr[i]*(right[i]-left[i]-1));
// }
// return ans;
// here we are solving the porblem by traversing the array in 3 passes
// we can also solve it in a single pass, check video 92



// Problem 2 - Maximal Rectangle

// int row = matrix.size();
// int col = matrix[0].size();
// vector<int>height(col,0);
// int ans=0;
// for(int i=0 ; i<row ; i++) {
//     for(int j=0 ; j<col ; j++) {
//         if(matrix[i][j] == '0') height[j] = 0;
//         else height[j] += 1;
//     }
//     ans = max(ans,rectangle(height));
// }
// return ans;