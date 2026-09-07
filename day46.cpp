// Problem 1 - Find factorial of a number
// #include<iostream>
// using namespace std;

// int fact(int n) {
//     if (n == 1 || n == 0) return 1;
//     else return n * fact(n-1);
// }

// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     cout<<"Factorial: "<<fact(num);
//     return 0;
// }



// Problem 2 - Find the sum of first N natural number
// #include<iostream>
// using namespace std;

// int sum(int n) {
//     if (n == 0) return 0;
//     else return n + sum(n-1);
// }

// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     cout<<"Sum is: "<<sum(num);
//     return 0;
// }



// Problem 3 - Power of 2
// #include<iostream>
// using namespace std;

// int pow2(int n) {
//     if (n == 1) return 2;
//     else return 2 * pow2(n-1);
// }

// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     cout<<"Power of 2: "<<pow2(num);
//     return 0;
// }



// Problem 4 - Sum of square of N natural numbers
// #include<iostream>
// using namespace std;

// int sOs(int n) {
//     if (n == 0) return 0;
//     else return (n*n) + sOs(n-1);
// }

// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     cout<<"Sum of sq: "<<sOs(num);
//     return 0;
// }



// Problem 5 - Fibonacci series
// #include<iostream>
// using namespace std;

// int fib(int n) {
//     if (n == 0 || n == 1) {
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     cout<<"Fibonacci: "<<fib(num);
//     return 0;
// }



// Problem 6 - Climbing stairs
// #include<iostream>
// using namespace std;

// int ways(int n) {
//     if (n == 1 || n == 2) return n;
//     return ways(n-1) + ways(n-2);
// }

// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     cout<<"Ways are: "<<ways(num);
// }