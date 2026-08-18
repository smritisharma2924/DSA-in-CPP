// Problem 1 - Make a string palindrome
// add min char at start to make it palindrome

// Brute force - O(n2)
// #include<iostream>
// using namespace std;

// bool is_palindrome(string s) {
//     int n = s.size();
//     int start = 0, end = n-1;
//     while (start < end) {
//         if (s[start] == s[end]) {
//             start++;
//             end--;
//         }
//         else return false;
//     }
//     return true;
// }

// int main() {
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     string ans, current = s;
//     int start = 0, end = s.size()-1;
//     while (current != "") {
//         if (is_palindrome(current)) break;
//         else {
//             ans.push_back(current[current.size()-1]);
//             current.pop_back();
//         }
//     }
//     cout << ans << s;
// }



// Optimal - O(n) using LPP(longest preifx palindrome) converted to lps problem
// step1 get rev(s)
// step2 s += $
// step3 s += rev(s)
// find lps(s) or find lps(s + $ + rev(s))
// problem solved. ans = size of org string - lps last element
// ans is the min nmbr of chars to be added

// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     int n = s.size();
//     string rev = s;
//     reverse(rev.begin(), rev.end());
//     s += '$';
//     s += rev;

//     vector<int>lps(s.size(),0);
//     int pre=0, suf=1;
//     while (suf < s.size()) {
//         if (s[pre] == s[suf]) {
//             pre++;
//             lps[suf] = pre;
//             suf++;
//         }
//         else {
//             if (pre == 0) {
//                 lps[suf] = 0; // na bhi likho toh chlega coz lps 0 se initialized hai
//                 suf++;
//             }
//             else pre = lps[pre-1];
//         }
//     }

//     cout<<"Min chars to add: "<<n - lps[s.size()-1];
//     return 0;
// }