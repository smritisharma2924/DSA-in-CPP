// Recursion
// a function which calls itself again and again
// until a specifc condition is met


// #include<iostream>
// using namespace std;

// void bdayWish(int n) {
//     if (n == 0) cout<<"Happy Bdayyy!!!";
//     else {
//         cout<<n<<" days left for bday..."<<endl;
//         bdayWish(n-1);
//     }
// }

// int main() {
//     int n=5;
//     bdayWish(n);
//     return 0;
// }



// Problem 1 - Print from 1 to N
// #include<iostream>
// using namespace std;

// void print(int n) {
//     if (n == 1) {
//         cout<<1<<" ";
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }

// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     print(num);
//     return 0;
// }