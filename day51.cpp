// Merge Sort
// #include<iostream>
// using namespace std;

// void merge(int arr[], int start, int mid, int end) {
//     vector<int> temp(end-start+1);
//     int left = start, right = mid+1, index = 0;
//     while (left <= mid && right <= end) {
//         if (arr[left] <= arr[right]) {
//             temp[index] = arr[left];
//             left++, index++;
//         }
//         else {
//             temp[index] = arr[right];
//             right++, index++;
//         }
//     }
//     while (left <= mid) {
//         temp[index] = arr[left];
//         left++, index++;
//     }
//     while (right <= end) {
//         temp[index] = arr[right];
//         right++, index++;
//     }
//     index = 0;
//     while (start <= end) {
//         arr[start] = temp[index];
//         index++, start++;
//     }
//     return;
// }

// void mergeSort(int arr[], int start, int end) {
//     if (start == end) return;
//     int mid = start + (end - start)/2;
//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid+1, end);
//     merge(arr, start, mid, end);
//     return;
// }

// int main() {
//     int arr[] = {6,3,1,2,8,9,10,7,3,10};
//     mergeSort(arr, 0, 9);
//     for (int i=0 ; i<10 ; i++) cout<<arr[i]<<" ";
//     return 0;
// }