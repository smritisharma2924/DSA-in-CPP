// Problem 1 - Print the length of longest palindrome possible
// Given a string s which consists of lowercase or uppercase letters, 
// return the length of the longest palindrome that can be built with those letters.
// Letters are case sensitive, for example, "Aa" is not considered a palindrome.

// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a String : ";
//     cin>>s;
//     vector<int> lower(26,0);
//     vector<int> upper(26,0);
//     for (int i=0 ; i<s.length() ; i++) {
//         if (s[i] >= 'a' && s[i] <= 'z') lower[s[i] - 'a']++;
//         else if (s[i] >= 'A' && s[i] <= 'Z') upper[s[i] - 'A']++;
//     }
//     int ans=0, left=0;
//     for (int i=0 ; i<26 ; i++) {
//         ans += lower[i]/2;
//         ans += upper[i]/2;
//         left += lower[i]%2;
//         left += upper[i]%2;
//     }
//     ans *= 2;
//     if (left > 0) ans++;
//     cout<<"The length of the longest palindrome possible would be : "<<ans;
//     return 0;
// }



// Problem 2 - Sorting the Sentence
// For example, the sentence "This is a sentence" can be shuffled as 
// "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".

// #include<iostream>
// using namespace std;

// int main() {
//     string sentence;
//     cout<<"Enter your sentence : ";
//     getline(cin,sentence);
//     string currentWord = "";
//     vector<string>words;
//     for (int i=0 ; i<sentence.length() ; i++) {
//         if (sentence[i] == ' ') {
//             if (!currentWord.empty()) {
//                 words.push_back(currentWord);
//                 currentWord = "";
//             }
//         }
//         else currentWord += sentence[i];
//     }
//     if (!currentWord.empty()) words.push_back(currentWord);
//     vector<string>sorted(words.size());
//     for (int i=0 ; i<words.size() ; i++) {
//         string w = words[i];
//         int targetIdx = (w.back() - '0') - 1;
//         w.pop_back();
//         sorted[targetIdx] = w;
//     }
//     string result = "";
//     for (int i = 0; i < sorted.size(); i++) {
//         result += sorted[i];
//         if (i < sorted.size() - 1) {
//             result += " ";
//         }
//     }
//     cout<<"Sorted sentence is : "<<result;
//     return 0;
// }



// Problem 3 - Sort Vowels in a String
// #include<iostream>
// using namespace std;

// int main() {
//     string s;
//     cout<<"Enter a string : ";
//     cin>>s;
//     vector<int> lower(26,0);
//     vector<int> upper(26,0);
//     string small = "aeiou";
//     string large = "AEIOU";
//     for (int i=0 ; i<s.length() ; i++) {
//         if (small.find(s[i]) != string::npos) {
//             lower[s[i] - 'a']++;
//             s[i] = '#';
//         }
//         else if (large.find(s[i]) != string::npos) {
//             upper[s[i] - 'A']++;
//             s[i] = '#';
//         }
//     }
//     string vowel = "";
//     for (int i=0 ; i<26 ; i++) {
//         while (upper[i]) {
//             vowel += 'A' + i;
//             upper[i]--;
//         }
//     }
//     for (int i=0 ; i<26 ; i++) {
//         while (lower[i]) {
//             vowel += 'a' + i;
//             lower[i]--;
//         }
//     }
//     int read=0, write=0; // read will point to the vowel string, write will point to the actual string
//     for (int write=0 ; write < s.length() ; write++) {
//         if (s[write] == '#') {
//             s[write] = vowel[read];
//             read++;
//         }
//     }
//     cout<<"Vowel Sorted String is : "<<s;
//     return 0;
// }