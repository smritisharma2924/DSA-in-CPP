// While Loop
// Syntax :
//     intitialization
//     while (condition)
//     {
//         /* code */
//     }



// Example 1
// Print numbers from 1 to 10

// #include<iostream>
// using namespace std;

// int main() {
//     int i=1;
//     while(i<=10) {
//         cout<<i<<" ";
//         i++;
//     }
// }



// Example 2
// Multiplication Table Program

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int i=1;
//     while(i<=10) {
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//         i++;
//     }
// }



// Example 3
// Find factorial of a number

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     int i=1,fact=1;
//     cout<<"Enter number : ";
//     cin>>n;
//     while(i<=n) {
//         fact *= i;
//         i++;
//     }
//     cout<<"Factorial is : "<<fact;
// }



// Do While loop
// Syntax :
//     initialization
//     do
//     {
//         /* code */
//     } while (condition);
    


// Example 1
// Sum of n natural numbers

// #include<iostream>
// using namespace std;

// int main() {
//     int i=1, n, sum=0;
//     cout<<"Enter number : ";
//     cin>>n;
//     do {
//         sum+=i;
//         i++;
//     } while(i<=n);
//     cout<<"Sum is : "<<sum;
// }



// Break and Continue statements

// break Statement : stops the loop immediately and exits from it.
// continue Statement : skips the current iteration and moves to the next one.



// Example 1
// Print numbers from 1 to 10 and stop when the number entered by the user is about to print.

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int i=1;
//     do {
//         cout<<i<<" ";
//         i++;
//         if(i==n) {
//             break;
//         }
//     } while(i<=10);
// }



// Example 2
// Print numbers from 1 to 10 and skip the number which is entered by the user.

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int i=1;
//     do {
//         if(i==n) {
//             i++;
//             continue;
//         }
//         cout<<i<<" ";
//         i++;
//     } while(i<=10);
// }



// Switch Statement
// used when you want to compare a variable against multiple constant values and execute different code depending on which case matches.
// It’s a cleaner alternative to using multiple if…else if conditions.

// Syntax :
//     switch(expression) {
//     case constant1:
//         // code
//         break;
//     case constant2:
//         // code
//         break;
//     default:
//         // code if no case matches
// }



// Example 1
// Print day name based on the entered day number by the user.

// #include <iostream>
// using namespace std;

// int main() {
//     int day;
//     cout << "Enter day number (1-7): ";
//     cin >> day;

//     switch(day) {
//         case 1: cout << "Monday"; break;
//         case 2: cout << "Tuesday"; break;
//         case 3: cout << "Wednesday"; break;
//         case 4: cout << "Thursday"; break;
//         case 5: cout << "Friday"; break;
//         case 6: cout << "Saturday"; break;
//         case 7: cout << "Sunday"; break;

//         default:
//             cout << "Invalid day!";
//     }
// }



// Scope of a variable

// Scope of a variable means the region or part of a program where a variable is accessible and can be used.
// A variable only works within its scope—outside that region, it cannot be accessed.

// Local Scope - A variable declared inside a function or block { } is local and can only be used there.
// Global Scope - A variable declared outside all functions is global and can be accessed anywhere in the program.

// Example 1 - Local Scope 
// #include<iostream>
// using namespace std;

// int main() {
//     int x = 10; // local to main()

//     {
//         int y = 20; // local to this block
//         cout << y;  // valid
//     }

//     cout << x;  // valid
//     // cout << y; // ERROR: y not accessible here
// }

// Example 2 - Global Scope 
// #include<iostream>
// using namespace std;

// int g = 5; // global variable

// int main() {
//     cout << g;  // valid
// }