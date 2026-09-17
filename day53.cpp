// Problem 1 - Print all subsequences of a given array
// #include<iostream>
// using namespace std;

// void subseq(int arr[], int idx, int n, vector<vector<int>>& ans, vector<int> temp) {
//     if (idx == n) {
//         ans.push_back(temp);
//         return;
//     }
//     // NO - don't include arr[idx]
//     subseq(arr, idx + 1, n, ans, temp);
//     // YES - include arr[idx]
//     temp.push_back(arr[idx]);
//     subseq(arr, idx + 1, n, ans, temp);
// }

// int main() {
//     int arr[] = {1,2,3};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     subseq(arr, 0, 3, ans, temp);
//     // Print all subsequences
//     for (int i = 0; i < ans.size(); i++) {
//         cout << "{ ";
//         for (int j = 0; j < ans[i].size(); j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << "} ";
//     }
//     return 0;
// }



// Problem 2 - Print subsequences for a string
// #include<iostream>
// using namespace std;

// void subset(string s, int idx, int n, vector<string>& ans, string temp) {
//     if (idx == n) {
//         ans.push_back(temp);
//         return;
//     }
//     // not included
//     subset(s, idx+1, n, ans, temp);
//     // included
//     temp.push_back(s[idx]);
//     subset(s, idx+1, n, ans, temp);
// }

// int main() {
//     string s = "abc";
//     vector<string>ans;
//     string temp;
//     subset(s, 0, s.size(), ans, temp);
//     for (int i = 0; i < ans.size(); i++) {
//         cout << "\"" << ans[i] << "\" ";
//     }
//     return 0;
// }



// Problem 3 - Generate parentheses
// rules:- no of left parentheses = n
//         no of right parentheses = n
//         at any point, opening/left p's >= closing/right p's

// #include <iostream>
// using namespace std;

// void parentheses(int n, int left, int right, vector<string>& ans, string temp) {
//     if (left == n && right == n) {
//         ans.push_back(temp);
//         return;
//     }
//     // left parentheses
//     if (left < n) parentheses(n, left+1, right, ans, temp+"(");
//     // right parentheses
//     if (right < left) parentheses(n, left, right+1, ans, temp+")");
    
// }

// int main() {
//     int n;
//     cout<<"Enter a value: ";
//     cin>>n;
//     string temp = "";
//     vector<string> ans;
//     int left=0, right=0;
//     parentheses(n, left, right, ans, temp);
//     for (int i = 0; i < ans.size(); i++) {
//         cout << "\"" << ans[i] << "\" ";
//     }
//     return 0;
// }