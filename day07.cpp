// Pattern Printing-4

// Example 1
//     1
//    121
//   12321
//  1234321
// 123454321

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=n-1 ; j>=i ; j--) {
//             cout<<" ";
//         }
//         for(int k=1 ; k<=i ; k++) {
//             cout<<k;
//         }
//         for(int l=i ; l>1 ; l--) {
//             cout<<l-1;
//         }
//         cout<<endl;
//     }
// }



// Example 2
// *********
//  *******
//   *****
//    ***
//     *

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int k=1 ; k<=i-1 ; k++) {
//             cout<<" ";
//         }
//         for(int j=1 ; j<=2*(n-i)+1 ; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// Example 3
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=n-i+1 ; j>=1 ; j--) {
//             cout<<"* ";
//         }
//         for(int k=1 ; k<2*i-1 ; k++) {
//             cout<<"  ";
//         }
//         for(int j=n-i+1 ; j>=1 ; j--) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         for(int k=2*(n-i+1)-1 ; k>1 ; k--) {
//             cout<<"  ";
//         }
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Example 4
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         for(int k=2*(n-i) ; k>=1 ; k--) {
//             cout<<"  ";
//         }
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1 ; i>=1 ; i--) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         for(int k=2*(n-i) ; k>=1 ; k--) {
//             cout<<"  ";
//         }
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Example 5
//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++) {
        for(int j=n-i+1 ; j>=1 ; j--) {
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n ; i>=1 ; i--) {
        for(int j=n-i+1 ; j>=1 ; j--) {
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}