// Pattern Printing-3

// Example 1
//     *
//    **
//   ***
//  ****
// *****

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=n-i ; j++) {
//             cout<<"  ";
//         }
//         for(int k=1 ; k<=i ; k++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Example 2
//     1
//    22
//   333
//  4444
// 55555


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=n-i ; j++) {
//             cout<<" ";
//         }
//         for(int k=1 ; k<=i ; k++) {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }



// Example 3
//     1
//    12
//   123
//  1234
// 12345

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=n-i ; j++) {
//             cout<<" ";
//         }
//         for(int k=1 ; k<=i ; k++) {
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }



// Example 4
//     A 
//    AB 
//   ABC 
//  ABCD
// ABCDE

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=n-i ; j++) {
//             cout<<" ";
//         }
//         for(char k='A' ; k<='A'+i-1 ; k++) {
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }



// Example 5
//     1
//    21
//   321
//  4321
// 54321

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=n-i ; j++) {
//             cout<<" ";
//         }
//         for(int k=i ; k>=1 ; k--) {
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }



// Example 6
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=n-i ; j++) {
//             cout<<"  ";
//         }
//         for(int k=1 ; k<=i ; k++) {
//             cout<<"* ";
//         }
//         for(int l=1 ; l<=i-1 ; l++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }