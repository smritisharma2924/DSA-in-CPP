// Binary Search Problems - 2

// Peak Index in Mountain Array
// #include<iostream>
// using namespace std;

// int peak(int a[], int n) {
//     if (n==1) return 0;
//     if (a[0]>a[1]) return 0;
//     if (a[n-1]>a[n-2]) return n-1;
//     int low=1, high=n-2, mid, idx=-1;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (a[mid]>a[mid-1] && a[mid]>a[mid+1]) return mid;
//         else if (a[mid]>a[mid-1]) low = mid+1;
//         else high = mid-1;
//     }
//     return idx;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the mountain array : ";
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
//     cout<<endl<<"The peak index in this mountain array : "<<peak(arr,len);
//     return 0;
// }



// Rotated Array
// #include<iostream>
// using namespace std;

// int minElementInRoatatedArray(int a[], int n) {
//     if (a[0]<a[n-1]) return a[0];
//     else if (a[n-1]<a[n-2]) return a[n-1];
//     else {
//         int low=0, high=n-1, mid, idx=0;
//         while (low<=high) {
//             mid = low + (high-low)/2;
//             if (a[mid]<=a[idx]) {
//                 idx = mid;
//                 high = mid-1;
//             }
//             else low = mid+1;
//         }
//         return a[idx];
//     }
// }

// int main() {
//     int len;
//     cout<<"Enter length of the rotated array : ";
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
//     cout<<endl<<"Minimum element in this array : "<<minElementInRoatatedArray(arr,len);
//     return 0;
// }



// Search in Rotated Sorted Array and return its index
// #include<iostream>
// using namespace std;

// int rotatedArraySearch(int a[], int n, int target) {
//     int low=0, high=n-1, mid;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (target==a[mid]) return mid;
//         else if (a[mid]>a[low]) {
//             if (target<a[mid] && target>=a[low]) high = mid-1;
//             else low = mid+1;
//         }
//         else {
//             if (target>a[mid] && target<=a[high]) low = mid+1;
//             else high = mid-1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the rotated array : ";
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
//     int key;
//     cout<<endl<<"Enter element you want to search : ";
//     cin>>key;
//     cout<<"Its index is : "<<rotatedArraySearch(arr,len,key);
//     return 0;
// }



// Search in Rotated Sorted Array with duplicate values
// #include<iostream>
// using namespace std;

// bool searchRotatedSortedArray(int a[], int n, int target) {
//     int low=0, high=n-1, mid;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (a[mid]==target) return true;
//         if (a[low]==a[high] && a[high]==a[mid]) {
//             low++;
//             high--;
//             continue;
//         }
//         else if (a[mid]>=a[low]) {
//             if (target >= a[low] && target < a[mid]) high = mid-1;
//             else low = mid+1;
//         }
//         else {
//             if (target <= a[high] && target > a[mid]) low = mid+1;
//             else high = mid-1;
//         }
//     }
//     return false;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the rotated array : ";
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
//     int key;
//     cout<<endl<<"Enter element you want to search : ";
//     cin>>key;
//     cout<<"Is this element present? "<<searchRotatedSortedArray(arr,len,key);
//     return 0;
// }



// Kth Missing Positive Integer
// #include<iostream>
// using namespace std;

// int missingInteger(int a[], int n, int k) {
//     int low=0, high=n-1, mid;
//     while (low<=high) {
//         mid = low + (high-low)/2;
//         if (a[mid]-mid-1 >= k) {
//             high = mid-1;
//         }
//         else low = mid+1;
//     }
//     return k+low;
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
//     int key;
//     cout<<endl<<"Enter k-th number you want to search : ";
//     cin>>key;
//     cout<<"The Number is : "<<missingInteger(arr,len,key);
//     return 0;
// }