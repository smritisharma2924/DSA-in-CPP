// Problem 1 - use linear search recursively
// #include<iostream>
// using namespace std;

// bool linearSearch(int arr[], int target, int index, int size) {
//     if (index == size) return false;
//     if (arr[index] == target) return true;
//     else return linearSearch(arr, target, index+1, size);
// }

// int main() {
//     int arr[] = {2,3,6,7,1,5};
//     int target = 7;
//     cout<<linearSearch(arr, target, 0, 6);
//     return 0;
// }



// Problem 2 - use binary search recursively
// #include<iostream>
// using namespace std;

// bool binarySearch(int arr[], int low, int high, int target) {
//     if (high < low) return false;
//     int mid = low + (high - low)/2;
//     if (arr[mid] == target) return true;
//     else if (arr[mid] > target) return binarySearch(arr, low, mid-1, target);
//     else return binarySearch(arr, mid+1, high, target);
// }

// int main() {
//     int arr[] = {3,8,11,15,20,22};
//     int target1 = 20;
//     int target2 = 7;
//     int target3 = 8;
//     cout<<target1<<": "<<binarySearch(arr, 0, 6, target1)<<endl;
//     cout<<target2<<": "<<binarySearch(arr, 0, 6, target2)<<endl;
//     cout<<target3<<": "<<binarySearch(arr, 0, 6, target3)<<endl;
//     return 0;
// }