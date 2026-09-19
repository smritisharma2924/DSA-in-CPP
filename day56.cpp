// Problem 1 - generate all the permutations of an array
// #include<iostream>
// using namespace std;

// void permut(int arr[], vector<vector<int>>& ans, vector<int>& temp, vector<bool>& visited) {
//     if (visited.size() == temp.size()) {
//         ans.push_back(temp);
//         return;
//     }
//     for (int i=0 ; i < visited.size() ; i++) {
//         if (visited[i] == 0) {
//             visited[i] = 1; //choose
//             temp.push_back(arr[i]);
//             permut(arr, ans, temp, visited); //explore
//             visited[i] = 0; //undo choice
//             temp.pop_back();
//         }
//     }
// }

// int main() {
//     int arr[] = {1,2,3, 4};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool> visited(4, 0);
//     permut(arr, ans, temp, visited);
//     int count = 0;
//     for (int i=0 ; i < ans.size() ; i++) {
//         for (int j=0 ; j < ans[0].size() ; j++) {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//         count++;
//     }
//     cout<<"total permutations are: "<<count;
//     return 0;
// }