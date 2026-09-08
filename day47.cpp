// Problem 1 - print array using recursion
// #include<iostream>
// using namespace std;

// void print(int arr[], int index, int len) {
//     if (index == len) return;
//     cout<<arr[index]<<" ";
//     print(arr, index+1, len);
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     print(arr, 0, 6);
//     return 0;
// }



// Problem 2 - print array using recursion in reverse
// #include<iostream>
// using namespace std;

// void print(int arr[], int index, int len) {
//     if (index == len) return;
//     print(arr, index+1, len);
//     cout<<arr[index]<<" ";
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     print(arr, 0, 6);
//     return 0;
// }



// Problem 3 - Sum of all elements
// #include<iostream>
// using namespace std;

// int sumArray(int arr[], int len, int sum, int index) {
//     if (index == len) return sum;
//     sum += arr[index];
//     return sumArray(arr, len, sum, index+1);
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int sum = 0;
//     cout<<"Sum is: "<<sumArray(arr, 5, sum, 0);
//     return 0;
// }