// #include<iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     cout<<&a<<endl;
//     int *ptr1 = &a;
//     cout<<ptr1<<endl;
//     float b = 2.6;
//     float *ptr2 = &b;
//     cout<<ptr2<<endl;
//     return 0;
// }


// Size of pointers?
// int is 4 bytes and char is 1 bit, so their respective pointers will be of same size?
// no. the size of all types of pointers is the same.
// it depends on RAM, for 4 gb RAM it is 4 byte and respectively for 8 gb RAM.
// so why do we need to mention data type for pointers? like why int *ptr? instead of *ptr?
// it is mentioned for the pointer to identify how much data to read like if its a int pointer then it will read for 4 bytes from the location etc.


// Derefrencing Operator
// used to get the value whose address is stored in the pointer

// we need to writte *ptr only when we are creating the pointer. after that when we are just changing it we may only write ptr instead of *ptr

// #include<iostream>
// using namespace std;

// int main() {
//     // size of pointers
//     int a = 10;
//     int *ptr = &a;
//     cout<<sizeof(ptr)<<endl;
//     float m = 2.6;
//     float *ptr1 = &m;
//     cout<<sizeof(ptr1)<<endl;

//     // derefrence
//     cout<<ptr<<endl; // address of a
//     cout<<*ptr<<endl; // value inside a
//     return 0;
// }