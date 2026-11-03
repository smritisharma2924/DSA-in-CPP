// Problem 1 - Print all number in every window of size k
// push that index element
// print the queue
// pop

// void display(queue<int>q) {
//     while (!q.empty()) {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }

// queue<int>q;
// for(i=0 ; i < k-1 ; i++) q.push(arr[i]);
// for(i = k-1 ; i<n ; i++) {
//     q.push(arr[i]);
//     display(q);
//     q.pop();
// }



// Problem 2 - Fisrt negative integer in every window of size k
// push the element
// print first negative element in queue
// pop

// int firstNeg(queue<int>q) {
//     while (!q.empty()) {
//         if (q.front() < 0) return q.front();
//         q.pop();
//     }
//     return 0;
// }

// queue<int>q;
// for(i=0 ; i < k-1 ; i++) q.push(arr[i]);
// for(i = k-1 ; i<n ; i++) {
//     q.push(arr[i]);
//     cout<<firstNeg(q)<<" ";
//     q.pop();
// }
// time complexity : O(nk)

// OPTIMISED CODE
// vector<int> ans;
// queue<int>q;
// for (int i=0 ; i < k-1 ; i++) {
//     if (arr[i] < 0) q.push(i);
// }
// for (int i = k-1 ; i<arr.size() ; i++) {
//     if (arr[i] < 0) q.push(i);
//     if (q.empty()) ans.push_back(0);
//     else {
//         if (q.front() <= i-k) q.pop();
//         if (q.empty()) ans.push_back(0);
//         else ans.push_back(arr[q.front()]);
//     }
// }
// return ans;



// Problem 3 - First non repeating char in a stream of characters
// string b = "";
// vector<int>repeated(26,0);
// queue<char>q;
// for(int i=0 ; i < a.size() ; i++) {
//     if (repeated[a[i] - 'a'] >= 1) {
//         repeated[a[i] - 'a']++;
//         while (!q.empty() && repeated[q.front() - 'q'] > 1) q.pop();
//         if (q.empty()) b += "#";
//         else b += q.front();
//     }
//     else {
//         repeated[a[i] - 'a']++;
//         q.push(a[i]);
//         while (repeated[q.front() - 'a'] > 1) q.pop();
//         b += q.front();
//     }
// }