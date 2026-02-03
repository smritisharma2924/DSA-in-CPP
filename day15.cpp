// Sorting
// Sorting is the process of arranging a collection of data into a specific, logical order. 
// In programming, this usually means organizing numbers or strings in ascending or descending order.



// Selection Sort
// 1. Find the Minimum : The algorithm scans the unsorted part of the array to find the smallest element.
// 2. Swap : It swaps that smallest element with the first element of the unsorted part.
// 3. Shift the Boundary : The boundary between the sorted and unsorted sections moves one position to the right.
// 4. Repeat : This process continues until the entire array is sorted.

// Metric                Complexity
// Best Case Time        O(n^2)
// Average Case Time     O(n^2)
// Worst Case Time       O(n^2)
// Space Complexity      O(1)

// Implementing Selection Sort -
// #include<iostream>
// using namespace std;

// void selection_sort(int a[], int n) {
//     int idx;
//     for(int i=0 ; i<n-1 ; i++) {
//         idx = i;
//         for(int j=i ; j<n ; j++) {
//             if (a[idx]>a[j]) {
//                 idx = j;
//             }
//         }
//         swap(a[i],a[idx]);
//     }
// }

// int main() {
//     int arr[] = {10,8,2,3,1,4};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Original Array : ";
//     for(int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Sorted Array : ";
//     selection_sort(arr,len);
//     for(int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Implementing Selection Sort in descending order -
// #include <iostream>
// using namespace std;

// void selection_sort_descending(int a[], int n) {
//     int idx;
//     for (int i=0 ; i<n-1 ; i++) {
//         idx = i;
//         for (int j=i ; j<n ; j++) {
//             if (a[idx]<a[j]) {
//                 idx = j;
//             }
//         }
//         swap(a[i],a[idx]);
//     }
// }

// int main() {
//     int arr[] = {10,8,2,3,1,4};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Original Array : ";
//     for(int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Sorted Array : ";
//     selection_sort_descending(arr,len);
//     for(int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }