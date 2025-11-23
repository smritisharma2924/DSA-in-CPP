// Number System Conversions

//Decimal to Binary conversion

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter decimal number : ";
//     cin>>num;
//     int bin=0,rem=0,mul=1;
//     while (num>0) {
//         rem = num%2;
//         bin += rem*mul;
//         num/=2;
//         mul *= 10;
//     }
//     cout<<"Binary equivalent is : "<<bin;
// }



// Binary to Decimal conversion

// #include<iostream>
// using namespace std;

// int main() {
//     int bin;
//     cout<<"Enter binary number : ";
//     cin>>bin;
//     int dec=0,rem=0,mul=1;
//     while (bin>0) {
//         rem = bin%10;
//         bin /= 10;
//         dec += rem*mul;
//         mul *= 2;
//     }
//     cout<<"Decimal equivalent is : "<<dec;
// }