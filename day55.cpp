// Problem 1 - perfect sum
// #include<iostream>
// using namespace std;

// int ways(int arr[], int current, int idx, int n, int target) {
//     if (idx == n) {
//         return current == target;
//     }
//     // inlcude current element
//     int include = ways(arr, current+arr[idx], idx+1, n, target);
//     // dont include current element
//     int exclude = ways(arr, current, idx+1, n, target);
//     return include+exclude;
// }

// int main() {
//     int arr[] = {2,5,6,1};
//     cout<<ways(arr, 0, 0, 4, 8);
//     return 0;
// }



// Problem 2 - Target sum repetition
// #include<iostream>
// using namespace std;

// int subsum(int arr[], int current, int idx, int n, int target) {
//     if (idx == n) return current==target;
//     if (current > target) return 0;
//     // dont use this element
//     int exclude = subsum(arr, current, idx+1, n, target);
//     // use this element, and rep is allowed so idx remains the same
//     int include = subsum(arr, current+arr[idx], idx, n, target);
//     return exclude+include;
// }

// int main() {
//     int arr[] = {2,3,4};
//     cout<<subsum(arr, 0, 0, 3, 6);
//     return 0;
// }