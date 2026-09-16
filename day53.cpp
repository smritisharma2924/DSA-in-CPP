// Print all subsequences of a given array

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