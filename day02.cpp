// Taking input using cin

// #include<iostream>
// using namespace std;

// int main() {
//     int a,b;
//     cout<<"Enter first number : ";
//     cin>>a;
//     cout<<"Enter second number : ";
//     cin>>b;
//     cout<<"Sum is : "<<a+b;
// };



// TypeCasting

// #include<iostream>
// using namespace std;

// int main() {
//     int a=66;
//     char c='b';
//     cout<<"The initial value of a : "<<a;
//     a=c; //the ASCII value of c is used here 
//     cout<<"\nThe new value of a : "<<a; 
//     float b = 132.34;
//     char d = 'e';
//     cout<<"\nThe initial value of d : "<<d;
//     d = b;
//     cout<<"\nThe new value of d : "<<d; //data loss is possible during typecasting
// };



// If-Else Statement

// Example 1
// #include<iostream>
// using namespace std;

// int main() {
//     int package;
//     cout<<"Enter package offered : ";
//     cin>>package;
//     if(package>10) {
//         cout<<"Accepted";
//     }
//     else {
//         cout<<"Rejected";
//     }
// };

// Example 2
// #include<iostream>
// using namespace std;

// int main() {
//     int marks;
//     cout<<"Enter your marks : ";
//     cin>>marks;
//     if (marks>33) {
//         cout<<"Pass";
//     }
//     else {
//         cout<<"Fail";
//     }
// };

// Example 3 - Compare two numbers
// #include<iostream>
// using namespace std;

// int main() {
//     int a,b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     if(a>b) {
//         cout<<"a is greater than b.";
//     }
//     else if (a==b) {
//         cout<<"a is equal to b.";
//     }
//     else {
//         cout<<"b is greater than a.";
//     }
// };

// Example 4 - Chcek if a number is even or odd
// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cout<<"Enter a number : ";
//     cin>>num;
//     if (num%2 == 0) {
//         cout<<"Number is even.";
//     }
//     else {
//         cout<<"Number is odd";
//     }
// };

// Example 5 - Check if a number is positive, negative or zero
// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cout<<"Enter a number : ";
//     cin>>num;
//     if(num>0) {
//         cout<<"Number is positive.";
//     }
//     else if(num==0) {
//         cout<<"Number is zero.";
//     }
//     else {
//         cout<<"Number is negative.";
//     }
// };

// Example 6 - Check if an alphabet entered is a vowel or consonant
// #include<iostream>
// using namespace std;

// int main() {
//     char a;
//     cout<<"Enter a character : ";
//     cin>>a;
//     if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u') {
//         cout<<"Vowel.";
//     }
//     else {
//         cout<<"Consonant.";
//     }
// };



// For Loop

// Example 1 - Print numbers from 1 to 5
// #include<iostream>
// using namespace std;

// int main() {
//     for (int i=1 ; i<=5 ; i++) {
//         cout<<i<<endl;
//     }
// };

// Example 2 - Print squares from 1 to n
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the value for n : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++) {
//         cout<<(i+1)*(i+1)<<endl;
//     }
// };

// Example 3 - Print DSA 10 times
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0 ; i<10 ; i++) {
//         cout<<"DSA"<<endl;
//     }
// };

// Example 4 - Print "n" natural numbers
// #include<iostream>
// using namespace std;

// int main() {
//     int n ;
//     cout<<"Enter the value for n : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++) {
//         cout<<i+1<<endl;
//     }
// };

// Example 5 - Print square of first n natural numbers
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter n :";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         cout<<"Square of "<<i<<" is "<<i*i<<endl;
//     }
// };

// Example 6 - Print even numbers upto a given number n
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++) {
//         if(i%2==0) {
//             cout<<i<<endl;
//         }
//     }
// }; 