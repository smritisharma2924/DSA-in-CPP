// SLIDING WINDOW

// Problem 1 - Longest Substring without Repeating chars

// Brute force - O(n3)
// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string:";
//     cin>>s;
//     int ans = 1;
//     for (int i=2 ; i <= s.length() ; i++) {         // length of substring
//         for (int j=0 ; j < s.length()-i+1 ; j++) {    // substrings beginning index
//             bool seen[256] = {false};
//             bool unique = true;
//             for (int k=j ; k < j+i ; k++) {         // if all the chars are diff in the substring
//                 if (seen[(unsigned char)s[k]]) {
//                     unique = false;
//                     break;
//                 }
//                 seen[(unsigned char)s[k]] = true;
//             }
//             if (unique) ans = i;
//         }
//     }
//     cout<<"Length of such substring:"<<ans;
//     return 0;
// }


// Two Pointer Approach - O(n2)
// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string:";
//     cin>>s;
//     int ans = 1;
//     for (int i=0 ; i < s.length() ; i++) {
//         bool seen[256] = {false};
//         for (int j=i ; j < s.length() ; j++) {
//             if (seen[(unsigned char)s[j]]) break;
//             seen[(unsigned char)s[j]] = true;
//             ans = max(ans, j-i+1);
//         }
//     }
//     cout<<"Length of such substring:"<<ans;
//     return 0;
// }


// Sliding Window - O(n)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string:";
//     cin>>s;
//     int len;
//     vector<bool> count(256,0);
//     int first = 0, second = 0;
//     while (second < s.size()) {
//         while (count[s[second]]) {    
//             count[s[first]] = 0;
//             first++;
//         }
//         count[s[second]] = 1;
//         len = max(len, second-first+1);
//         second++;
//     }
//     cout<<"Length of such substring:"<<len;
//     return 0;
// }



// Problem 2 - Smallest Distinct Window
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string:";
//     cin>>s;
//     vector<int> count(256,0);
//     int first = 0, second = 0, len = s.size(), diff = 0;
//     // calculate nmbr of unique chars in s
//     while (first < s.size()) {
//         if (count[s[first]] == 0) diff++;
//         count[s[first]]++;
//         first++;
//     }

//     for (int i=0 ; i<256 ; i++) count[i]=0;
//     first = 0;

//     while(second < s.size()) {
//         // jbtk diff exist krta h
//         while (diff && second < s.size()) {
//             if (count[s[second]] == 0) diff--;
//             count[s[second]]++;
//             second++;
//         }
//         len = min(len, second-first);
//         // jbtk diff ki value 1 na bn jaye
//         while (diff != 1) {
//             len = min(len, second-first);
//             count[s[first]]--;
//             if (count[s[first]] == 0) diff++;
//             first++;
//         }
//     }
//     cout<<"Length of such substring:"<<len;
//     return 0;
// }
