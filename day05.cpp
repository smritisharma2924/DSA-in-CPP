// Pattern Printing-2

// Example 1
// *
// * *
// * * *
// * * * *
// * * * * *

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1 ; i<=5 ; i++) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Example 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1 ; i<=5 ; i++) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }



// Example 3
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1 ; i<=5 ; i++) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }



// Example 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1 ; i<=5 ; i++) {
//         for(int j=i ; j>=1 ; j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }



// Example 5
// a
// b b
// c c c 
// d d d d 
// e e e e e 

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1 ; i<=5 ; i++) {
//         for(char name = 'a' ; name<='a'+i-1 ; name++) {
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }



// Example 6
// * * * * *
// * * * *
// * * *
// * *
// *

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=5 ; i>=1 ; i--) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Example 7
// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=5 ; i>=1 ; i--) {
//         for(int j=1 ; j<=i ; j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }



// Example 8
// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=5 ; i>=1 ; i--) {
//         for(int j=5 ; j>=i ; j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }