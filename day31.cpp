// Strings
// can be stored as an array of characters

// Declaration and Initialization
// char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};  // Manual array with null terminator
// char arr2[] = "World";                         // Compiler adds '\0' automatically
// string s1;                                     // Empty string object
// string s2 = "C++";                             // Direct initialization
// string s3(5, 'A');                             // "AAAAA" - fill constructor
// string s4 = s2;                                // Copy initialization

// Input Methods
// 1. Standard Extraction (Stops at space/newline)
// cin >> s1; 

// 2. Getline (Reads full line including spaces)
// getline(cin, s1); 

// 3. For loop (Character by character input)
// for(int i = 0; i < 5; i++) cin >> arr[i]; 
// arr[5] = '\0'; // Manually terminating after loop

// 4. cin.get() and cin.getline() for C-style arrays
// cin.get(arr, 20);      // Reads up to 19 chars, keeps delimiter in buffer
// cin.getline(arr, 20);  // Reads up to 19 chars, discards delimiter



// Reversing a string
// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a String : ";
//     cin>>s;
//     int start = 0, end = s.size()-1;
//     while (start <= end) {
//         swap(s[start],s[end]);
//         start++;
//         end--;
//     }
//     cout<<"Reversed String : "<<s;
//     return 0;
// }



// Counting length of a string
// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a String : ";
//     cin>>s;
//     int i = 0;
//     while (s[i] != '\0') {
//         i++;
//     }
//     cout<<"Length : "<<i;
//     return 0;
// }



// Checking is a string is a palindrome
// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a String : ";
//     cin>>s;
//     int start = 0, end = s.size()-1;
//     while (start <= end) {
//         if (s[start] != s[end]) {
//             cout<<"Not a Plaindrome.";
//             return 0;
//         }
//         start++, end--;
//     }
//     cout<<"Is a Palindrome.";
//     return 0;
// }