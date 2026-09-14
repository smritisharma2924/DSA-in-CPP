// Problem 1 - Check palindrome string
// #include<iostream>
// using namespace std;

// bool pal(string s, int start, int end) {
//     if (start >= end) return true;
//     if (s[start] != s[end]) return false;
//     return pal(s, start+1, end-1);
// }

// int main() {
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     cout<<pal(s, 0, s.size()-1);
//     return 0;
// }



// Problem 2 - Count Vowels
// #include<iostream>
// using namespace std;

// int countVowel(string s, int index) {
//     string vow = "aeiou";
//     if (index < 0) return 0;
//     if (vow.find(s[index]) != string::npos) return 1 + countVowel(s, index-1);
//     else return countVowel(s, index-1);
// }

// int main() {
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     cout<<"Vowels: "<<countVowel(s, s.size()-1);
//     return 0;
// }



// Problem 3 - Reverse a string
// #include<iostream>
// using namespace std;

// void rev(string &s, int start, int end) {
//     if (start >= end) return;
//     else {
//         char temp = s[start];
//         s[start] = s[end];
//         s[end] = temp;
//         rev(s, start+1, end-1);
//     }
//     return;
// }

// int main() {
//     string s;
//     cout<<"Enter string: ";
//     cin>>s;
//     rev(s, 0, s.size()-1);
//     cout<<"Reversed: "<<s;
//     return 0;
// }