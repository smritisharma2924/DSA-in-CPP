// Functions 
// Syntax to define a fucntion :
//     return_type function_name(variable_type variable_name) {
//         /*
//         code
//         */
//         return value;
//     }



// Example 1
// Take two numbers a,b as input and then calculate
// 1. is 'a' a prime number
// 2. factorial of 'a'
// 3. is 'b' a prime number
// 4. factorial of 'b'
// 5. is 'a-b' a prime number
// 6. fcatorial of 'a-b'

// #include<iostream>
// using namespace std;

// bool prime_number (int num) {
//     if (num<2) return 0;
//     else if (num==2) return 1;
//     else {
//         for(int i=2 ; i<num ; i++) {
//             if(num%i == 0) return 0;
//         }
//     }
//     return 1;
// }

// long long factorial(int num) {
//     long long fact=1;
//     if(num<0) {
//         cout<<"Factorial doesn't exists.";
//         return 0;
//     }
//     else {
//         for(int i=1 ; i<=num ; i++) {
//             fact *= i;
//         }
//     }
//     return fact;
// }

// int main() {
//     int a,b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     if(prime_number(a)==0) {
//         cout<<"a is not prime."<<endl; 
//     }
//     else {
//         cout<<"a is prime."<<endl; 
//     }
//     cout<<"Factorial of a : "<<factorial(a)<<endl;
//     if(prime_number(b)==0) {
//         cout<<"b is not prime."<<endl;
//     }
//     else {
//         cout<<"b is prime."<<endl;
//     }
//     cout<<"Factorial of b : "<<factorial(b)<<endl;
//     int n=a-b;
//     if(prime_number(n)==0) {
//         cout<<"n is not prime."<<endl;
//     }
//     else {
//         cout<<"a-b is prime."<<endl;
//     }
//     cout<<"Factorial of a-b : "<<factorial(n)<<endl;
// }



// Example 2 
// Function with no return type

// #include<iostream>
// using namespace std;

// void fun() {
//     cout<<"Hello World!";
// }

// int main() {
//     fun();
//     return 0;
// }



//Example 3
// Pass by value
// A copy of the variable is passed into the function.
// Changes made inside the function do NOT affect the original variable.

// #include <iostream>
// using namespace std;

// void fun(int x) {
//     x = x + 10;  // changes only the copy
// }

// int main() {
//     int a = 5;
//     fun(a);
//     cout << a;   // Output: 5 (unchanged)
// }



// Example 4
// Pass by Reference
// The actual variable is passed to the function, using &.
// Changes inside the function directly modify the original variable.

// #include <iostream>
// using namespace std;

// void fun(int &x) {
//     x = x + 10;   // modifies the original variable
// }

// int main() {
//     int a = 5;
//     fun(a);
//     cout << a;    // Output: 15 (changed)
// }



// Example 5
// Swap two numbers

// #include<iostream>
// using namespace std;

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int a, b ;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     swap(a,b);
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b;
// }



// Function Overloading
// We can write several functions with the same name, but:
// 	-	number of parameters must differ OR
// 	-	type of parameters must differ OR
// 	-	order of parameters must differ


// Example 1 : Overloading by number of parameters
// #include <iostream>
// using namespace std;
// void show(int a) {
//     cout << "Integer: " << a << endl;
// }
// void show(int a, int b) {
//     cout << "Two integers: " << a << " and " << b << endl;
// }
// int main() {
//     show(5);
//     show(5, 10);
// }


// Example 2 : Overloading by different parameter types
// void print(int x) {
//     cout << "Integer: " << x << endl;
// }
// void print(double x) {
//     cout << "Double: " << x << endl;
// }
// void print(string x) {
//     cout << "String: " << x << endl;
// }


// Example 3 : Overloading by order of parameters
// void test(int a, char b) {
//     cout << "int, char" << endl;
// }
// void test(char b, int a) {
//     cout << "char, int" << endl;
// } 