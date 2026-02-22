// Prefix Sum and Suffix Sum

// array :      | 6| 4| 5|-3| 2| 8|

// prefix sum : | 6|10|15|12|14|22|
// suffix sum : |22|16|12| 7|10| 8|

// Prefix Sum Array
// vector<int>prefix(arr.size());
// prefix[0]=arr[0];
// for (int i=1 ; i<arr.size() ; i++) {
//     prefix[i] = prefix[i-1] + arr[i];
// };

// Suffix Sum Array
// vector<int>suffix(arr.size());
// suffix[arr.size()-1] = arr[arr.size()-1];
// for (int i=arr.size()-2 ; i>=0 ; i--) {
//     suffix[i] = suffix[i+1] + arr[i];
// };



// Print all the subarrays of an array
// #include<iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of array : ";
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
//     for (int i = 0; i < len; i++) {
//         for (int j = i; j < len; j++) {
//             cout << "[ ";
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << " ";
//             }
//             cout << "] ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// Problem 1 - Divide array in two subarrays with equal sum
// #include<iostream>
// #include<vector>
// using namespace std;

// bool divide(vector<int>nums) {
//     int total_sum=0, current_sum=0;
//     for (int i=0 ; i<nums.size() ; i++) total_sum += nums[i];
//     if (total_sum%2 != 0) return false;
//     for (int i=0 ; i<nums.size() ; i++) {
//         current_sum += nums[i];
//         if (current_sum == (total_sum/2)) return true;
//     }
//     return false;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int>nums(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>nums[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     if (divide(nums)) cout<<"Can be divided.";
//     else cout<<"Can't be divided.";
//     return 0;
// }



// Problem 2 - Largest Sum of Contagious Subarray (Time Complexity = O(n^3))
// #include<iostream>
// #include<vector>
// using namespace std;

// int maxSum(vector<int>nums) {
//     int max_sum = INT_MIN, current_sum=0;
//     for (int i=0 ; i<nums.size() ; i++) {
//         for (int j=i ; j<nums.size() ; j++) {
//             current_sum=0;
//             for (int k=i ; k<=j ; k++) {
//                 current_sum += nums[k];
//             }
//             if (current_sum > max_sum) max_sum=current_sum;
//         }
//     }
//     return max_sum;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int>nums(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>nums[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Largest sum of the contagious subarray : "<<maxSum(nums);
//     return 0;
// }



// Largest Sum of Contagious Subarray (Time Complexity = O(n^2))
// #include<iostream>
// #include<vector>
// using namespace std;

// int maxSum(vector<int>nums) {
//     int max_sum = INT_MIN, prefix=0;
//     for (int i=0 ; i<nums.size() ; i++) {
//         prefix=0;
//         for (int j=i ; j<nums.size() ; j++) {
//             prefix += nums[j];
//             max_sum = max(max_sum,prefix);
//         }
//     }
//     return max_sum;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int>nums(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>nums[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Largest sum of the contagious subarray : "<<maxSum(nums);
//     return 0;
// }



// Kadane's Algorithm : Largest Sum of Contagious Subarray (Time Complexity = O(n))
// #include<iostream>
// #include<vector>
// using namespace std;

// int maxSum(vector<int>nums) {
//     int max_sum = INT_MIN, prefix=0;
//     for (int i=0 ; i<nums.size() ; i++) {
//         if (nums[i]<0) prefix=0;
//         else prefix += nums[i];
//         max_sum = max(max_sum,prefix);
//     }
//     return max_sum;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int>nums(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>nums[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Largest sum of the contagious subarray : "<<maxSum(nums);
//     return 0;
// }



// Problem 2 - Max difference between 2 elements (Time Complexity - O(n^2))
// #include<iostream>
// #include<vector>
// using namespace std;

// int maxDiff(vector<int>nums) {
//     int ans=INT_MIN;
//     for (int i=0 ; i<nums.size()-1 ; i++) {
//         for (int j=i+1 ; j<nums.size() ; j++) {
//             ans = max(ans,nums[j]-nums[i]);
//         }
//     }
//     return ans;
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
//     cout<<endl<<"The Max differnce will be : "<<maxDiff(arr);
//     return 0;
// }



// Using suffix max - Max difference between 2 elements (Time Complexity - O(n))
// #include<iostream>
// #include<vector>
// using namespace std;

// int maxDiff(vector<int>nums) {
//     int ans=INT_MIN;
//     vector<int>suffix_max(nums.size());
//     suffix_max[nums.size()-1]=nums[nums.size()-1];
//     for (int i=nums.size()-2 ; i>=0 ; i--) suffix_max[i] = max(suffix_max[i+1],nums[i]);
//     for (int i=0 ; i<nums.size()-1 ; i++) ans = max(ans,suffix_max[i+1]-nums[i]);
//     return ans;
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
//     cout<<endl<<"The Max differnce will be : "<<maxDiff(arr);
//     return 0;
// }



// Without declaring extra vector (Time Complexity - O(n))
// #include<iostream>
// #include<vector>
// using namespace std;

// int maxDiff(vector<int>nums) {
//     int ans=INT_MIN, suffix_max=INT_MIN;
//     for (int i=nums.size()-2 ; i>=0 ; i--) {
//         suffix_max = max(suffix_max,nums[i]);
//         ans = max(ans,suffix_max-nums[i]);
//     }
//     return ans;
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
//     cout<<endl<<"The Max differnce will be : "<<maxDiff(arr);
//     return 0;
// }