// Problem 1 - Trapping Rain Water
// #include<iostream>
// #include<vector>
// using namespace std;

// int unitsWater(vector<int>nums) {
//     vector<int>leftmax(nums.size(),0);
//     vector<int>rightmax(nums.size(),0);
//     for (int i=1 ; i<nums.size() ; i++) {
//         leftmax[i]=max(leftmax[i-1],nums[i-1]);
//     }
//     for (int i=nums.size()-2 ; i>=0 ; i--) {
//         rightmax[i]=max(rightmax[i+1],nums[i+1]);
//     }
//     int ans=0, min_height;
//     for (int i=0 ; i<nums.size() ; i++) {
//         min_height = min(leftmax[i],rightmax[i]);
//         if (min_height>nums[i]) ans += (min_height-nums[i]);
//     }
//     return ans;
// }

// int main() {
//     int len;
//     cout<<"Enter number of buildings : ";
//     cin>>len;
//     vector<int>nums(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter height of Building "<<i+1<<" : ";
//         cin>>nums[i];
//     }
//     cout<<"Units of Rain water trapped will be : "<<unitsWater(nums);
//     return 0;
// }



// // Problem 2 - 3 Sum
// #include<iostream>
// #include<vector>
// using namespace std;

// // Using for loops : Time Complexity - O(n^3)
// bool threesum(vector<int>nums, int target) {
//     sort(nums.begin(),nums.end());
//     for (int i=0 ; i<nums.size()-2 ; i++) {
//         for (int j=i+1 ; j<nums.size()-1 ; j++) {
//             for (int k=j+1 ; k<nums.size() ; k++) {
//                 if (nums[i]+nums[j]+nums[k]==target) return true;
//             }
//         }
//     }
//     return false;
// }

// // Using Binary Search : Time Complexity - O(n^2.log n)
// bool threeSum(vector<int>nums, int target) {
//     int start,end,mid;
//     sort(nums.begin(),nums.end());
//     for (int i=0 ; i<nums.size()-2 ; i++) {
//         for (int j=i+1 ; j<nums.size() ; j++) {
//             start=0, end=nums.size()-1;
//             while(start<end) {
//                 mid = start + (end-start)/2;
//                 if (nums[mid]==target-nums[i]-nums[j]) return true;
//                 else if (nums[mid]<target-nums[i]-nums[j]) start = mid+1;
//                 else end = mid-1;
//             }
//         }
//     }
//     return false;
// }

// // Using Two Sum Conversion : Time Complexity - O(n^2))
// bool THREESUM(vector<int>nums, int target) {
//     int start,end,key;
//     sort(nums.begin(),nums.end());
//     for (int i=0 ; i<nums.size()-2 ; i++) {
//         start=i+1, end=nums.size()-1, key=target-nums[i];
//         while (start<end) {
//             if (nums[start]+nums[end]==key) return true;
//             else if (nums[start]+nums[end]<key) start++;
//             else end--;
//         }
//     }
//     return false;
// }

// int main() {
//     int len; 
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int>arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int target;
//     cout<<"Enter Target Sum : ";
//     cin>>target;
//     if (threesum(arr,target)) cout<<"Possible.";
//     else cout<<"Not Possible.";
//     if (threeSum(arr,target)) cout<<"Possible.";
//     else cout<<"Not Possible.";
//     if (THREESUM(arr,target)) cout<<"Possible.";
//     else cout<<"Not Possible.";
//     return 0; 
// }



// // Problem 3 - 4 Sum
// #include<iostream>
// #include<vector>
// using namespace std;

// // Using for loops : Time Complexity - O(n^4)
// bool foursum(vector<int>nums, int target) {
//     sort(nums.begin(),nums.end());
//     for (int i=0 ; i<nums.size()-3 ; i++) {
//         for (int j=i+1 ; j<nums.size()-2 ; j++) {
//             for (int k=j+1 ; k<nums.size()-1 ; k++) {
//                 for (int l=k+1 ; l<nums.size() ; l++) {
//                     if (nums[i]+nums[j]+nums[k]+nums[l]==target) return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

// // Using Binary Search : Time Complexity - O(n^3.log n)
// bool fourSum(vector<int>nums, int target) {
//     int start,end,mid;
//     sort(nums.begin(),nums.end());
//     for (int i=0 ; i<nums.size()-3 ; i++) {
//         for (int j=i+1 ; j<nums.size()-2 ; j++) {
//             for (int k=j+1 ; k<nums.size()-1 ; k++) {
//                 start=0, end=nums.size()-1;
//                 while(start<end) {
//                     mid = start + (end-start)/2;
//                     if (nums[mid]==target-nums[i]-nums[j]-nums[k]) return true;
//                     else if (nums[mid]<target-nums[i]-nums[j]-nums[k]) start = mid+1;
//                     else end = mid-1;
//                 }
//             }
//         }
//     }
//     return false;
// }

// // Using Sum Conversion : Time Complexity - O(n^3))
// bool FOURSUM(vector<int>nums, int target) {
//     int start,end,key;
//     sort(nums.begin(),nums.end());
//     for (int i=0 ; i<nums.size()-3 ; i++) {
//         for (int j=i+1 ; j<nums.size()-2 ; j++) {
//             key = target - nums[i] - nums[j];
//             start = j+1, end=nums.size()-1;
//             while (start<end) {
//                 if (nums[start]+nums[end]==key) return true;
//                 else if (nums[start]+nums[end]<key) start++;
//                 else end--;
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     int len; 
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int>arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int target;
//     cout<<"Enter Target Sum : ";
//     cin>>target;
//     if (foursum(arr,target)) cout<<"Possible.";
//     else cout<<"Not Possible.";
//     if (fourSum(arr,target)) cout<<"Possible.";
//     else cout<<"Not Possible.";
//     if (FOURSUM(arr,target)) cout<<"Possible.";
//     else cout<<"Not Possible.";
//     return 0; 
// }