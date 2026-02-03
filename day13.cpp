// Introduction to Arrays

// An array is a collection of items stored at contiguous (side-by-side) memory locations.
// Fixed Size: Once you define the size of an array, it usually cannot be changed.
// Zero-Based Indexing: The first element is always at index 0, the second at index 1, and so on.
// Access Time: You can access any element in O(1) time using its index.

// Creating an Array
// data_type array_name[array_size] = {elements} ;

// More valid ways for defining an array :
// 1. int arr[5] = {6, 8, 5, 1, 4};
// 2. int arr[] = {3, 8, 2, 9};
// 3. int arr[10];
//    for(int i=0 ; i<10 ; i++) {
//     cin>>arr[i];
//    }
// 4. int arr[5] = {8, 4}; // rest elements have garbage value.
// 5. int arr[5] = {0}; // all elements have the value 0.



// Example 1 - Finding maximum and minimum element from an array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {7,11,15,4,9};
//     int min = INT_MAX;
//     int max = INT_MIN;
//     for (int i=0 ; i<5 ; i++) {
//         if (min > arr[i]) min = arr[i];
//         if (max < arr[i]) max = arr[i];
//     }
//     cout<<"Minimum element : "<<min<<endl;
//     cout<<"Maximum element : "<<max;
// }



// Example 2 - Finding the size and length of an array
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {2,3,1,7,8};
//     for (int i=0 ; i<5 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Size of the array : "<<sizeof(arr)<<endl;
//     cout<<"Length of the array : "<<sizeof(arr)/sizeof(arr[0]);
//     return 0;
// }



// Example 3 - Finding sum of all array elements
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     double arr[n];
//     cout<<"Enter array elements : "<<endl;
//     for (int i=0 ; i<n ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     double sum=0;
//     for (int i=0 ; i<n ; i++) {
//         sum += arr[i];
//     }
//     cout<<"Sum of all elements is : "<<sum;
// }



// Example 4 - Search element in an array and return its index, if not present then return -1
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10,20,7,11,8,4};
//     int idx=-1;
//     int ele;
//     cout<<"Enter element which you want to search : ";
//     cin>>ele;
//     for(int i=0 ; i<6 ; i++) {
//         if (ele==arr[i]) {
//             idx = i;
//             break;
//         }
//     }
//     cout<<"Position is : "<<idx;
//     return 0;
// }



// Example 5 - Reversing an array using an temporary array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {6,11,7,4,8,9};
//     int temp[6];
//     cout<<"Original Array : ";
//     for(int i=0 ; i<6 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=5,j=0 ; i>=0 ; i--,j++) {
//         temp[j] = arr[i];
//     }
//     for(int j=0 ; j<6 ; j++) {
//         arr[j] = temp[j];
//     }
//     cout<<"Reversed Array : ";
//     for(int i=0 ; i<6 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Example 6 - Rversing an array without using temporary array
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {6,8,14,11,3,9};
//     cout<<"Original Array : ";
//     for(int i=0 ; i<6 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0,j=5 ; i<=j ; i++,j--) {
//         swap(arr[i],arr[j]);
//     }
//     cout<<"Reversed Array : ";
//     for(int i=0 ; i<6 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Example 7 - Find second maximum element in an array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2,6,4,3,8,5,1};
//     int max = INT_MIN;
//     int idx=-1;
//     cout<<"Original Array : ";
//     for(int i=0 ; i<7 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0 ; i<7 ; i++) {
//         if(arr[i]>max) {
//             max = arr[i];
//             idx = i;
//         }
//     }
//     arr[idx] = INT_MIN;
//     max = INT_MIN;
//     for(int i=0 ; i<7 ; i++) {
//         if(arr[i]>max) max = arr[i];
//     }
//     cout<<endl<<"Second maximum element is : "<<max;
//     return 0;
// }



// Example 8 - Find missing number in the array of size n where the elements should be from 1 to n
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,3,6,2,4};
//     int sum=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Array : ";
//     for(int i=0 ; i<n ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0 ; i<n ; i++) {
//         sum += arr[i];
//     }
//     int ideal_sum=(n+2)*(n+1)/2;
//     cout<<endl<<"Missing element is : "<<ideal_sum-sum;
// }



// Example 9 - Print fibonacci series where every element is the sum of its last two elements
// #include<iostream>
// using namespace std;

// int main() {
//     int first=0, second=1;
//     int n;
//     cout<<"Enter number of terms : ";
//     cin>>n;
//     cout<<"Fibonacci Series : ";
//     for(int i=0 ; i<n ; i++) {
//         if (i==0) cout<<first<<" ";
//         else if (i==1) cout<<second<<" ";
//         else {
//             int third = first+second;
//             first = second;
//             second = third;
//             cout<<third<<" ";
//         }
//     }
//     return 0;
// }



// Example 10 - Rotate an array by 1
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2,7,4,11,5,8};
//     cout<<"Original Array : ";
//     for(int i=0 ; i<6 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Array rotated by 1 : ";
//     int temp = arr[0];
//     for(int i=0,j=1 ; i<6 ; i++,j++) {
//         if(i==5) arr[i]=temp;
//         else {
//             arr[i] = arr[j];
//         }
//     }
//     for(int i=0 ; i<6 ; i++) {
//         cout<<arr[i]<<" ";
//     }
// }



// Passing arrays to a function

// Example - Printing array through a function call
// #include<iostream>
// using namespace std;

// void print_array(int a[],int n) {
//     for(int i=0 ; i<n ; i++) {
//         cout<<a[i]<<" ";
//     }
// }

// int main() {
//     int arr[] = {2,4,2,753,634,13,6,4,642,5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     print_array(arr,len);
//     return 0;
// } 