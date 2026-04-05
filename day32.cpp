// Problem 1 - Defanging an IP address
// A defanged IP address replaces every period "." with "[.]".

// #include<iostream>
// using namespace std;

// int main() {
//     string IP;
//     cout<<"Enter a valid IP address : ";
//     cin>>IP;
//     string newIP;
//     int i=0;
//     while (IP[i] != '\0') {
//         if (IP[i] == '.') {
//             newIP += "[.]";
//         }
//         else {
//             newIP.push_back(IP[i]);
//         }
//         i++;
//     }
//     cout<<"Defanged IP address is : "<<newIP;
//     return 0;
// }



// Problem 2 - Check if a string is rotated by 2 places
// the string maybe rotated clockwise or anticlockwise

// #include<iostream>
// using namespace std;

// int main() {
//     string s1;
//     cout<<"Enter first string : ";
//     cin>>s1;
//     string s2;
//     cout<<"Enter second string : ";
//     cin>>s2;
//     string copy_s1 = s1; 
//     reverse(copy_s1.begin(),copy_s1.end());
//     reverse(copy_s1.begin(),copy_s1.begin()+2);
//     reverse(copy_s1.begin()+2,copy_s1.end());
//     if (copy_s1 == s2) cout<<"Yes, clockwise.";
//     else {
//         // Check for anticlockwise rotation.
//         string copy_s1 = s1;
//         reverse(copy_s1.begin(),copy_s1.end());
//         reverse(copy_s1.begin(),copy_s1.end()-2);
//         reverse(copy_s1.end()-2,copy_s1.end());
//         if (copy_s1 == s2) cout<<"Yes, anticlockwise.";
//         else cout<<"No.";
//     }
//     return 0;
// }



// Problem 3 - Check if a sentence is Pangram
// A pangram is a sentence where every letter of the English alphabet appears at least once.

// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a sentance : ";
//     cin>>s;
//     int arr[26] = {};
//     int i=0;
//     while (s[i] != '\0') {
//         arr[s[i] - 'a'] = 1;
//         i++;
//     }
//     for (int i=0 ; i<26 ; i++) {
//         if (arr[i] == 0) {
//             cout<<"Not a Pangram.";
//             return 0;
//         }
//     }
//     cout<<"Is a Pangram.";
//     return 0;
// }



// Problem 4 - Sort a String

#include<iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter : ";
    cin>>s;
    vector<int> arr(26, 0);
    int i=0;
    while (s[i] != '\0') {
        arr[s[i] - 'a'] += 1;
        i++;
    }
    string sorted;
    for (int i=0 ; i<s.size() ; i++) {
        for (int j=0 ; j<arr[i] ; j++) sorted.push_back(i + 'a');
    }
    cout<<"Sorted : "<<sorted;
    return 0;
}
