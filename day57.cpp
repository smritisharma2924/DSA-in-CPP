// Problem 1 - permutations but the array contains duplicate

// solution1 
// #include<iostream>
// using namespace std;

// void permut(vector<vector<int>>& ans, vector<int> nums, int idx) {
//     if (idx == nums.size()) {
//         if (find(ans.begin(), ans.end(), nums) == ans.end()) {
//             ans.push_back(nums);
//             return;
//         }
//         return;
//     }
//     for (int i=idx ; i < nums.size() ; i++) {
//         swap(nums[i], nums[idx]);
//         permut(ans, nums, idx+1);
//         swap(nums[i], nums[idx]);
//     }
// }

// int main() {
//     vector<int> nums = {1,2,1};
//     vector<vector<int>> ans;
//     permut(ans, nums, 0);
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

// but here we are wasting space cause first we are creating the duplicate and then checking it against the ans vector
// also there is a condition that -10 <= nums[i] <= 10
// so we can make a vector of size 21 of boolean type to keep info of what number is already there

// solution2
// #include<iostream>
// using namespace std;

// void permut(vector<vector<int>>& ans, vector<int> nums, int idx) {
//     if (idx == nums.size()) {
//         ans.push_back(nums);
//         return;
//     }
//     vector<bool> use(21,0);
//     for (int i=idx ; i < nums.size() ; i++) {
//         if (use[nums[i] + 10] == 0) {
//             swap(nums[i], nums[idx]);
//             permut(ans, nums, idx+1);
//             swap(nums[i], nums[idx]);
//             use[nums[i] + 10] = 1;
//         }
//     }
// }

// int main() {
//     vector<int> nums = {1,2,1};
//     vector<vector<int>> ans;
//     permut(ans, nums, 0);
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



// Problem 2 - ways to sum N but we can also repeat any element in the array any times
// #include<iostream>
// using namespace std;

// int way(vector<int> nums, int sum, int idx) {
//     if(sum == 0) return 1;
//     if (sum < 0) return 0;
//     int ans=0;
//     for (int i=idx ; i < nums.size() ; i++) {
//         ans += way(nums, sum-nums[i], i);
//     }
//     return ans;
// }

// int main() {
//     vector<int> nums = {1,2,3};
//     cout<<way(nums, 4, 0);
//     return 0;
// }