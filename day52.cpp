// Quick Sort
// #include<iostream>
// using namespace std;

// int partition(int arr[], int start, int end) {
//     int pos = start;
//     for (int i=start ; i < end ; i++) {
//         if (arr[i] <= arr[end]) {
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
//     swap(arr[pos], arr[end]);
//     return pos;
// }

// void quickSort(int arr[], int start, int end) {
//     if (start >= end) return;
//     int pivot = partition(arr, start, end);
//     quickSort(arr, start, pivot-1);
//     quickSort(arr, pivot+1, end);
//     return;
// }

// int main() {
//     int arr[] = {6,3,1,2,8,9,10,7,3,10};
//     quickSort(arr, 0, 9);
//     for (int i=0 ; i<10 ; i++) cout<<arr[i]<<" ";
//     return 0;
// }