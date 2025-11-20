// Loop Advance

// Print Numbers from 101 to 200

// #include<iostream>
// using namespace std;

// int main() {
//     for (int i = 101; i <= 200; i++) {
//         cout<<i<<endl;
//     }
// }



// Print letters from a to z

// #include<iostream>
// using namespace std;

// int main() {
//     for(char name = 'a' ; name <= 'z' ; name++) {
//         cout<<name<<" ";
//     }
// }



// Print numbers in reverse order

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=10 ; i>0 ; i--) {
//         cout<<i<<" ";
//     }
// }



// Print numbers from 1 to 100 in this pattern 1 4 7 ...100

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1 ; i<=100 ; i+=3) {
//         cout<<i<<" ";
//     }
// }



// Print the table of 7

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1 ; i<=10 ; i++) {
//         cout<<7*i<<endl;
//     }
// }



// Calculating power of a number

// #include<iostream>
// using namespace std;

// int main() {
//     int num,pow;
//     cout<<"Enter base : ";
//     cin>>num;
//     cout<<"Enter exponent : ";
//     cin>>pow;
//     int ans=1;
//     for(int i=1 ; i<=pow ; i++) {
//         ans*=num;
//     }
//     cout<<ans;
// }



// Sum of n natural numbers

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum=0;
//     cout<<"Enter n : ";
//     cin>>n;
//     for (int i=0 ; i<=n ; i++) {
//         sum+=i;
//     }
//     cout<<"Sum upto "<<n<<" is : "<<sum;
// }



// Factorial of a number

// #include<iostream>
// using namespace std;

// int main() {
//     int fact=1, num;
//     cout<<"Enter number : ";
//     cin>>num;
//     for(int i=1 ; i<=num ; i++) {
//         fact*=i;
//     }
//     cout<<"Factorial is : "<<fact;
// }



// Check if a number is prime or not

// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cout<<"Enter number";
//     cin>>num;
//     if(num<2) {
//         cout<<"Not prime";
//         return 0;
//     }
//     else if(num==2) {
//         cout<<"is prime.";
//     }
//     else {
//         for(int i=2 ; i<num ; i++) {
//             if(num%i == 0) {
//                 cout<<"Not prime";
//                 return 0;
//             }
//             else{
//                 cout<<"is prime.";
//             }
//         }
//     }
//     return 0;
// }



// Fibonacci series

// #include<iostream>
// using namespace std;

// int main() {
//     int first = 0, second = 1;
//     int n,next=0;
//     cout<<"Enter number of term : ";
//     cin>>n;
//     for (int i=3 ; i<=n ; i++) {
//         next = first+second;
//         first = second;
//         second = next;
//     }
//     cout<<next;
//     return 0;
// }