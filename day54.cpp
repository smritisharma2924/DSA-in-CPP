// Problem 1 - calculate the sum of all subsets of an array
// #include<iostream>
// using namespace std;

// void subsetSum(int arr[], int idx, int n, int sum, vector<int>& ans) {
//     if (idx == n) {
//         ans.push_back(sum);
//         return;
//     }
//     // dont include current element in current subset
//     subsetSum(arr, idx+1, n, sum, ans);
//     // include current element in current subset
//     subsetSum(arr, idx+1, n, sum + arr[idx], ans);
// }

// int main() {
//     int arr[] = {1,2,3,4};
//     vector<int> ans;
//     subsetSum(arr, 0, 4, 0, ans);
//     int total_sum = 0;
//     for (int i=0 ; i < ans.size() ; i++) {
//         cout<<"\""<<ans[i]<<"\""<<" ";
//         total_sum += ans[i];
//     }
//     cout<<endl<<"Total Sum: "<<total_sum;
//     return 0;
// }



// Problem 2 - Target Sum
// #include<iostream>
// using namespace std;

// bool findSum(int arr[], int idx, int n, int target, int sum) {
//     if (sum == target) return true;
//     if (idx == n) return false;
//     // not include
//     if (findSum(arr, idx+1, n, target, sum)) return true;
//     // include
//     if (findSum(arr, idx+1, n, target, sum+arr[idx])) return true;
//     return false;
// }

// int main() {
//     int arr[] = {3,6,4,5};
//     if (findSum(arr, 0, 4, 10, 0)) cout<<"Possible.";
//     else cout<<"Not possible.";
//     return 0;
// }