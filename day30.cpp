// How to store 2 numbers in 1 posititon
// Given a number between 1 and 99 with some frequency,
// we have to store the number with its freq at the same place.

// ex : 2 and frequency 6

// freq * 100 + number
// we are multiplying by 100 since its just greater than 99.

// The number which we will store is 6*100+2 = 602 will be stored
// for getting the data back we'll take -
// number = 602 % 100 and freq = 602 / 100



// Problem 1 - Given an array from 1 to n, a number is missing and a number is repeated. find those.
// ex : array : |4|3|2|1|2|7|6|
// missing - 5, repeated - 2

// Time Complexity O(n) Space Complexity O(n)
// #include <iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int> arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) cout<<arr[i]<<" ";
//     vector<int> count(len,0);
//     for (int i=0 ; i<len ; i++) count[arr[i]-1]++;
//     for (int i=0 ; i<len ; i++) {
//         if (count[i]==0) cout<<"<<endl<<Missing number is : "<<i+1;
//         if (count[i]==2) cout<<endl<<"Repeated number is : "<<i+1;
//     }
//     return 0;
// }

// Space Complexity O(1)
// #include <iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int> arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) cout<<arr[i]<<" ";
//     for (int i=0 ; i<len ; i++) arr[i]--;
//     for (int i=0 ; i<len ; i++) {
//         arr[arr[i] % len] += len;
//     }
//     for (int i=0 ; i<len ; i++) {
//         if (arr[i] / len == 2) cout<<"Repeated Number is : "<<i+1;
//         if (arr[i] / len == 0) cout<<"Missing Number is : "<<i+1;
//     }
//     return 0;
// }



// Problem 2 - Find the occurance of number present in an Array.
// #include <iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int> arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) cout<<arr[i]<<" ";
//     for (int i=0 ; i<len ; i++) arr[i]--;
//     for (int i=0 ; i<len ; i++) arr[arr[i] % len] += len;
//     cout<<endl<<"Occurances of all numbers : "<<endl;
//     for (int i=0 ; i<len ; i++) {
//         cout<<i+1<<" : "<<arr[i]/len<<" times."<<endl;
//     }
//     return 0;
// }



// Problem 3 - Majority Element, print the number which appears more than n/2 times

// Time Complexity : O(nlogn)
// #include <iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int> arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) cout<<arr[i]<<" ";
//     // Since the element occurs more than n/2 times then it must be present at the mid of the same sorted array.
//     sort(arr.begin(),arr.end());
//     cout<<"Element is : "<<arr[len/2];
//     return 0;
// } 


// Time Complexity : O(n)
// #include <iostream>
// using namespace std;

// int main() {
//     int len;
//     cout<<"Enter length of the array : ";
//     cin>>len;
//     vector<int> arr(len);
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Array : ";
//     for (int i=0 ; i<len ; i++) cout<<arr[i]<<" ";
//     int ans=arr[0], freq=1;
//     for (int i=1 ; i<len ; i++) {
//         if (arr[i] == ans) freq ++;
//         else if (freq == 0) {
//             ans = arr[i];
//             freq++;
//         }
//         else freq--;

//     }
//     cout<<"Element is : "<<ans;
//     return 0;
// } 