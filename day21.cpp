// Binary Search - Top Interview Problems

// Problem 1 - Book Allocation
// - every student get at least one book 
// - books are allocated in contiguous ways
// - out of all permutation student with most number of books get minimum pages

// #include<iostream>
// using namespace std;

// int bookAllocation(int a[], int n, int k) {
//     if (k>n) return -1;
//     int low=0, high=0, mid, ans, page, count;
//     for (int i=0 ; i<n ; i++) {
//         low = max(low,a[i]);
//         high += a[i];
//     }
//     while (low <= high) {
//         mid = low + (high-low)/2;
//         page = 0;
//         count = 1;
//         for (int i=0 ; i<n ; i++) {
//             page += a[i];
//             if (page>mid) {
//                 count++;
//                 page = a[i];
//             }
//         }
//         if (count <= k) {
//             ans = mid;
//             high = mid-1;
//         }
//         else low = mid+1;
//     }
//     return ans;
// }

// int main() {
//     int len;
//     cout<<"Enter number of books : ";
//     cin>>len;
//     int arr[len];
//     cout<<"Enter the pages in the books : "<<endl;
//     for(int i=0 ; i<len ; i++) {
//         cout<<"Book "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Pages are : ";
//     for(int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     int k;
//     cout<<endl<<"Enter number of students to allocate the books : ";
//     cin>>k;
//     cout<<"Each student will have to read a maximum of : "<<bookAllocation(arr,len,k)<<" pages";
//     return 0;
// }



// Problem 2 - Aggressive Cows
// - an array is given with numbers which represents the position of the stalls
// - assign stall to k cows
// - minimum distance between any two of them is the maximum possible
// - return the maximum distance

// #include<iostream>
// using namespace std;

// int aggressiveCows(int stalls[], int n, int k) {
//     int low, high, mid, ans, count, pos;
//     sort(stalls,stalls+n);
//     low = 1;
//     high = stalls[n-1]-stalls[0];
//     while (low <= high) {
//         mid = low + (high-low)/2;
//         pos = stalls[0];
//         count = 1;
//         for (int i=0 ; i<n; i++) {
//             if (pos+mid <= stalls[i]) {
//                 count++;
//                 pos = stalls[i];
//             }
//         }
//         if (count>=k) {
//             ans = mid;
//             low = mid+1;
//         }
//         else high = mid-1;
//     }
//     return ans;
// }

// int main() {
//     int len;
//     cout<<"Enter number of stalls : ";
//     cin>>len;
//     int arr[len];
//     cout<<"Enter position of the stalls : "<<endl;
//     for (int i=0 ; i<len ; i++) {
//         cout<<"Stall "<<i+1<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"Stalls Position : ";
//     for (int i=0 ; i<len ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     int cows;
//     cout<<endl<<"Enter number of cows you want to assign : ";
//     cin>>cows;
//     cout<<"Minimum distance would be such that distance between any two is maximum possible : "<<aggressiveCows(arr,len,cows);
//     return 0;
// }