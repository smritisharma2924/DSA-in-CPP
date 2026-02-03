// Bubble Sort
// It works by repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order.

// 1. Compare : Look at the first two elements.
// 2. Swap : If the first is greater than the second, swap them.
// 3. Move : Move to the next pair and repeat until you reach the end of the array.
// 4. Repeat : After one full pass, the largest element is guaranteed to be at the last position. Repeat the process for the remaining unsorted elements.

// Metric              Complexity
// Best Case Time      O(n)
// Average Case Time   O(n^2)
// Worst Case Time     O(n^2)
// Space Complexity    O(1)

// Implementing Bubble Sort
// #include<iostream>
// using namespace std;

// void bubble_sort(int a[], int n) {
//     bool swapped=0;
//     for (int i=0 ; i<n ; i++) {
//         for (int j=0 ; j<n-i ; j++) {
//             if (a[j]>a[j+1]) {
//                swap(a[j],a[j+1]);
//                swapped=1;
//             }
//         }
//     if (swapped==0) break;
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
//     bubble_sort(arr,len);
//     for(int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Implementing Bubble Sort in descending order
// #include<iostream>
// using namespace std;

// void bubble_sort_descending(int a[], int n) {
//     bool swapped=0;
//     for (int i=0 ; i<n ; i++) {
//         for (int j=0 ; j<n-i-1 ; j++) {
//             if (a[j]<a[j+1]) {
//                swap(a[j],a[j+1]);
//                swapped=1;
//             }
//         }
//         if (swapped==0) break;
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
//     bubble_sort_descending(arr,len);
//     for(int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }