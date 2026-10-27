// Problem 1 - Reverse Array using stack
// solved on leetcode

// s = vector string "hello";
// stack<char> st;
// for (int i=0 ; i < s.size() ; i++) {
//     st.push(s[i]);
// }
// int i=0;
// while (!st.empty) {
//     s[i] = st.top();
//     i++;
//     st.pop();
// }

// time complexity O(n)
// space complexity O(n)



// Problem 2 - Insert at Bottom
// st: top-> 8 1 2 3 4
// insert x=2 at bottom
// op: top-> 8 1 2 3 4 2

// stack<int> temp;
// while(!st.empty()) {
//     temp.push(st.top());
//     st.pop();
// }
// st.push(x);
// while(!temp.empty()) {
//     st.push(temp.top());
//     temp.pop();
// }

// time complexity O(n)
// space complexity O(n)



// Problem 3 - Make the array beautiful
// ex: 2 3 5 -4 6 -2 -8 9
// op: 2 9

// stack<int>s;
// for (int i=0 ; i<arr.size() ; i++) {
//     if (s.empty()) s.push(arr[i]);
//     else if(arr[i] >= 0) {
//         if (s.top() >= 0) s.push(arr[i]);
//         else s.pop();
//     }
//     else {
//         if (s.top() < 0) s.push(arr[i]);
//         else s.pop();
//     }
// }

// vector<int> ans(s.size());
// int i = s.size()-1;
// while (!s.empty()) {
//     ans[i] = s.top();
//     i--;
//     s.pop();
// }
// return ans;



// Problem 4 - String Manipulation
// ex: ab ac da da ac db ea
// op: ab db ea

// stack<string>s;
// for (int i=0 ; i < v.size() ; i++) {
//     if (s.empty()) s.push(v[i]);
//     else if (s.top() == v[i]) s.pop();
//     else s.push(v[i]);
// }
// return s.size();



// Problem 5 - Parenthesis is valid or not

// bool check(string str) {
//     stack<char>s;
//     for (int i=0 ; i < str.size() ; i++) {
//         if (str[i] == '(') s.push(str[i]);
//         else {
//             if (s.empty()) return false;
//             else s.pop();
//         }
//     }
//     return s.empty();
// }

// time complexity O(n)
// space complexity O(n)



// Problem 6 - Minimum add to make parentheses valid
// LEETCODE 921

// stack<char> st;
// int count = 0;
// for (int i=0 ; i < s.size() ; i++) {
//     if (s[i] == '(') st.push(s[i]);
//     else {
//         if (st.empty()) count++;
//         else st.pop();
//     }
// }
// return count+st.size();



// Problem 7 - Valid Parentheses

// stack<char> st;
// for (int i=0 ; i < s.size() ; i++) {
//     if (s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
//     else {
//         if (st.empty()) return 0;
//         else if (s[i] == ')') {
//             if (st.top() != '(') return 0;
//             else st.pop();
//         }
//         else if (s[i] == '}') {
//             if (st.top() != '{') return 0;
//             else st.pop();
//         }
//         else {
//             if (st.top() != '[') return 0;
//             else st.pop();
//         }
//     }
// }
// return st.empty();



// Problem 8 - Background String Compare
// LEETCODE 844
// ex: s = ab#c    t = ad#c
// op: true as s = ac and t = ac. # means backspace

// stack<char>s1;
// stack<char>s2;
// int i=0;
// while (s[i]) {
//     if (s[i] == '#') {
//         if (!s1.empty()) s1.pop();
//     }
//     else s1.push(s[i]);
//     i++;
// }
// i=0;
// while (t[i]) {
//     if (t[i] == '#') {
//         if (!s2.empty()) s2.pop();
//     }
//     else s2.push(t[i]);
//     i++;
// }

// while (!s1.empty() && !s2.empty()) {
//     if (s1.top() != s2.top()) return false;
//     s1.pop();
//     s2.pop();
// }

// return s1.empty() && s2.empty();



// Problem 9 - Print Bracket Number
// ex: (aa(bdc))p(de)
// op: 1  2   21 3  3

// int count=0;
// stack<int>st;
// vector<int>ans;
// for(int i=0 ; i < s.size() ; i++) {
//     if (s[i] == '(') {
//         count++;
//         st.push(count);
//         ans.push_back(count);
//     }
//     else {
//         ans.push_back(st.top());
//         st.pop();
//     }
// }
// return ans;



// Problem 10 - Get Minimum at pop
// ex: 2 1 3 5 0 6 <-top
// op: 0 1 1 1 2

// solved on gfg