// Problem 1 - Sliding window maximum

// int windowMax(queue<int> q) {
//     int maxi = q.front();
//     while (!q.empty()) {
//         maxi = max(maxi, q.front());
//         q.pop();
//     }
//     return maxi;
// }
// vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//     vector<int> ans;
//     queue<int> q;
//     int n = nums.size();
//     for (int i=0 ; i<k-1 ; i++) q.push(nums[i]);
//     for (int i=k-1 ; i<n ; i++) {
//         q.push(nums[i]);
//         ans.push_back(windowMax(q));
//         q.pop();
//     }
//     return ans;
// } 
// time complexity: O(nk)


// APPROACH 2, same complexity but a diff way to write
// vector<int> ans;
// for (int i=0 ; i <= n-k ; i++) {
//     int total = INT_MIN;
//     for (int j=i ; j < i+k ; j++) total = max(total,nums[j]);
//     ans.push_back(total);
// }
// return ans;


// OPTIMISED SOLUTION
// step 1: pop back the smaller element if curr element is greater than the prev element
// step 2: if front element is outside window then pop front
// step 3: ans pushback front element
// vector<int> ans;
// deque<int> d;
// int maxi = INT_MIN;
// for (int i=0 ; i = k-1 ; i++) {
//     if (d.empty()) d.push_back(i);
//     else {
//         while (!d.empty() && nums[i] > nums[d.back()]) d.pop_back();
//         d.push_back(i);
//     }
// }
// for (int i = k-1 ; i<n ; i++) {
//     while (!d.empty() && nums[i] > nums[d.back()]) d.pop_back(); // step 1
//     d.push_back(i); // step 1
//     if (d.front() <= i-k) d.pop_front(); // step 2
//     ans.push_back(nums[d.front()]); // step 3
// }
// return ans;