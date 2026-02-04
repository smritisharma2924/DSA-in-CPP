// Binary Search
// It works on the principle of Divide and Conquer, repeatedly halving the search space until the target is found or the interval is empty.

// 1. Find the Middle : Calculate the middle index of the current range.
// 2. Compare :
//     If the middle element is the target, you're done!
//     If the target is smaller than the middle, throw away the right half and search the left.
//     If the target is larger than the middle, throw away the left half and search the right.
// 3. Repeat : Continue until the target is found or the range becomes empty.

// Implementing Binary Search
// #include<iostream>
// using namespace std;

// int binary_search(int a[], int n,int key) {
//     int low=0, high=n-1, idx;
//     while (low<=high) {
//         int idx=low+(high-low)/2;
//         if (a[idx]==key) return idx;
//         else if (a[idx] > key) high = idx-1;
//         else low = idx+1;
//     }
//     return -1;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     int arr[len];
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     int search;
//     cout<<endl<<"Enter element you want to search : ";
//     cin>>search;
//     cout<<"Element is present at index : "<<binary_search(arr,len,search);
//     return 0;
// }

// Implementing Binary Search if the array is given in reverse sorted order
// #include<iostream>
// using namespace std;

// int binary_search_reverse(int a[], int n,int key) {
//     int low=0, high=n-1, idx;
//     while (low<=high) {
//         int idx=low+(high-low)/2;
//         if (a[idx]==key) return idx;
//         else if (a[idx] < key) high = idx-1;
//         else low = idx+1;
//     }
//     return -1;
// }

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     int arr[len];
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     int search;
//     cout<<endl<<"Enter element you want to search : ";
//     cin>>search;
//     cout<<"Element is present at index : "<<binary_search_reverse(arr,len,search);
//     return 0;
// }