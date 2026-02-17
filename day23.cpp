// Two Pointer

// Example 1 - Segregate 0 and 1
// #include<iostream>
// using namespace std;

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
//     int zero=0, one=0;
//     for (int i=0 ; i<len ; i++) {
//         if (arr[i]==0) zero++;
//         else one++;
//     }
//     cout<<endl<<"Segregated Array : ";
//     for (int i=0 ; i<zero ; i++) arr[i]=0;
//     for (int i=zero ; i<len ; i++) arr[i]=1;
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Segregating 0 and 1 using two pointer approach
// #include<iostream>
// using namespace std;

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
//     int start=0, end=len-1;
//     while (start < end) {
//         if (arr[start]==0) start++;
//         else {
//             if (arr[end]==0) {
//                 swap(arr[start],arr[end]);
//                 start++;
//                 end--;
//             }
//             else end--;
//         }
//     }
//     cout<<endl<<"Segregated Array : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Example 2 - Two Sum
// #include<iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int> arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter target sum : ";
//     cin>>target;
//     sort(arr.begin(),arr.end());
//     int start=0, end=len-1;
//     while (start<end) {
//         if ((arr[start]+arr[end])==target) {
//             cout<<arr[start]<<" "<<arr[end];
//             return 0;
//         }
//         else if ((arr[start]+arr[end])<target) start++;
//         else end--;
//     }
//     cout<<"-1";
//     return 0;
// }



// Example 3 - Pair with given difference
// #include<iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int> arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Element "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter target difference : ";
//     cin>>target;
//     sort(arr.begin(),arr.end());
//     int start=0, end=1;
//     while (start < end) {
//         if ((arr[end]-arr[start])==target) {
//             cout<<arr[start]<<" "<<arr[end];
//             return 0;
//         }
//         else if ((arr[end]-arr[start])>target) start++;
//         else end++; 
//     }
//     cout<<"-1";
//     return 0;
// }