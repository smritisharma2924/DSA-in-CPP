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



// Problem 2 - Circular pattern matching
// if a string present is present in other string's any rotated version

// #include<iostream>
// using namespace std;

// int main() {
//     string org, target;
//     cout<<"Enter original string: ";
//     cin>>org;
//     cout<<"Enter target string: ";
//     cin>>target;
//     string twice = org + org;
//     if (twice.find(target) != string::npos) cout<<"Present.";
//     else cout<<"Not Present.";
//     return 0;
// }



// Problem 3 - Repeated String Match
// how many times should i repeat the first string such that second string becomes its substring

// Optimal - O(n+m)
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> createLpsArray(string s) {
//     vector<int> lps(s.size(),0);
//     int pre = 0, suf = 1;
//     while (suf < s.size()) {
//         if (s[pre] == s[suf]) {
//             pre++;
//             lps[suf] = pre;
//             suf++;
//         }
//         else {
//             if (pre == 0) suf++;
//             else pre = lps[pre-1];
//         }
//     }
//     return lps;
// }

// bool KmpSearch(const vector<int>& lps, const string& haystack, const string& needle) {
//     int first=0, second=0;
//     while (first < haystack.size() && second < needle.size()) {
//         if (haystack[first] == needle[second]) {
//             first++;
//             second++;
//         }
//         else {
//             if (second == 0) first++;
//             else second = lps[second-1];
//         }
//     }
//     if (second == needle.size()) return true;
//     else return false;
// }

// int main() {
//     string org, target;
//     cout<<"Enter original string: ";
//     cin>>org;
//     cout<<"Enter target string: ";
//     cin>>target;
//     string temp;
//     int count = 0;
//     // repeat until target is org is greter than or equal to target 
//     while (temp.size() < target.size()) {
//         temp += org;
//         count++;
//     }
//     // kmp pattern search
//     vector<int> lps = createLpsArray(target);
//     if (KmpSearch(lps, temp, target)) {
//         cout<<count<<" times.";
//         return 0;
//     }
//     // temp+a, kmp search
//     temp += org;
//     if (KmpSearch(lps, temp, target)) {
//         cout<<count+1<<" times.";
//         return 0;
//     }
//     cout<<"Not possible.";
//     return 0;
// }