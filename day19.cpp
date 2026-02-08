// Binary Search - Problems

// First and Last Position of an element in a sorted array
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> fisrt_and_last(int a[], int n, int target) {
//     int low=0, high=n-1, first=-1, last=-1, mid=0;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (a[mid]==target) {
//             first = mid;
//             high = mid-1;
//         }
//         else if (a[mid]>target) high = mid-1;
//         else low = mid+1;
//     }
//     low=0, high=n-1;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (a[mid]==target) {
//             last = mid;
//             low = mid+1;
//         }
//         else if (a[mid]>target) high = mid-1;
//         else low = mid+1;
//     }
//     return {first,last};
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     int arr[len];
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     int target;
//     cout<<endl<<"Enter number you want to find first and last occurance : ";
//     cin>>target;
//     vector<int> result = fisrt_and_last(arr,len,target);
//     cout<<"{first,last} : "<<"{"<<result[0]<<","<<result[1]<<"}";
//     return 0;
// }



// Search Insert Position of an element not present in an array
// #include<iostream>
// using namespace std;

// int position(int nums[], int n, int target) {
//     int pos=-1, low=0, high=n-1, mid=0;
//         if (nums[0]>target) return 0;
//         if (nums[n-1]<target) return n;
//         while (low<=high) {
//             mid = low + (high-low)/2;
//             if (nums[mid]==target) {
//                 pos = mid;
//                 break;
//             }
//             else if (nums[mid]>target) {
//                 pos = mid;
//                 high = mid-1;
//             }
//             else low = mid+1;
//         }
//     return pos;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     int arr[len];
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     int target;
//     cout<<endl<<"Enter number you want to find search position of : ";
//     cin>>target;
//     cout<<"Position would be : "<<position(arr,len,target);
//     return 0;
// }



// Sqrt(X) - Return greatest integer
// #include<iostream>
// using namespace std;

// int sqrt_integer(int x) {
//     // int a[x];
//     // for (int i=0 ; i<x ; i++) {
//     //     a[i] = i;
//     // }
//     int low=0, high=x-1, mid, ans;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (mid*mid == x) return mid;
//         else if (mid*mid < x) {
//             ans = mid;
//             low = mid+1;
//         }
//         else high = mid-1;
//     }
//     return ans;
// }

// int main() {
//     int num; 
//     cout<<"Enter number : ";
//     cin>>num;
//     cout<<"Square root : "<<sqrt_integer(num);
// }



// Return occurance of an element in an array
// #include<iostream>
// using namespace std;

// int occurance(int a[], int n, int target) {
//     int first, last, low=0, high=n-1, mid;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (a[mid]==target) {
//             first = mid;
//             high = mid-1;
//         }
//         else if (a[mid]>target) high = mid-1;
//         else low = mid+1;
//     }
//     low=0, high=n-1;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (a[mid]==target) {
//             last = mid;
//             low = mid+1;
//         }
//         else if (a[mid]>target) high = mid-1;
//         else low = mid+1;
//     }
//     return last-first+1;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     int arr[len];
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     int target;
//     cout<<endl<<"Enter element you want to find occurances of : ";
//     cin>>target;
//     cout<<"Number of occurances : "<<occurance(arr,len,target);
//     return 0;
// }