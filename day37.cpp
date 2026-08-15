// Problem 1 - String Matching

// Brute Force -> O(nm) time, O(1) space.
// #include<iostream>
// using namespace std;

// int main() {
//     string haystack, needle;
//     cout<<"Enter haystack: ";
//     cin>>haystack;
//     cout<<"Enter needle: ";
//     cin>>needle;
//     int n = haystack.size(), m = needle.size();
//     int first, second;
//     for (int i=0 ; i <= n-m ; i++) {
//         first = i, second = 0;
//         while (second < m && haystack[first] == needle[second]) {
//             first++;
//             second++;
//         }
//         if (second == m) {
//             cout<<"Found at index: "<<i;
//             return 0;
//         }
//     }
//     cout<<"Not found.";
//     return 0;
// }


// Optimal Solution -> O(n+m) time, O(m) space.
// using LPS

// #include<iostream>
// using namespace std;

// int main() {
//     string haystack, needle;
//     cout<<"Enter haystack: ";
//     cin>>haystack;
//     cout<<"Enter needle: ";
//     cin>>needle;
//     vector<int> lps(needle.size(),0);
//     // making lps array
//     int pre=0, suf=1;
//     for (int i=0 ; i < needle.size() ; i++) {
//         if (needle[pre] == needle[suf]) {
//             pre++;
//             lps[suf] = pre;
//             suf++;
//         }
//         else {
//             if (pre == 0) {
//                 lps[suf] = 0;
//                 suf++;
//             }
//             else {
//                 pre = lps[pre-1];
//             }
//         }
//     }

//     // Finding needle in haystack
//     int first=0, second=0; // first is for haystack and second for needle
//     while (second < needle.size() && first < haystack.size()) {
//         if (haystack[first] == needle[second]) {
//             first++;
//             second++;
//         }
//         else {
//             if (second == 0) {
//                 first++;
//             }
//             else second = lps[second - 1];
//         }
//     }
//     if (second == needle.size()) cout<<"Found at index: "<<first-second;
//     else cout<<"Not found.";
//     return 0;
// }