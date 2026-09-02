// Pointers with char array
// #include<iostream>
// using namespace std;

// int main() {
//     char arr[] = "1 2 3 4";
//     char *ptr = arr;
//     cout<<arr<<endl;
//     cout<<ptr<<endl;

//     int arr1[] = {1, 2, 3, 4};
//     int *ptr1 = arr1;
//     cout << arr1 << endl;
//     cout << ptr1;
//     return 0;
// }


// int*  with cout -> prints the address
// char* with cout -> treated as a C-string and prints characters until '\0'
// The pointer-array relationship itself is the same.


// printing the address of the char array
// #include<iostream>
// using namespace std;

// int main() {
//     char arr[] = "1 2 3 4";
//     char *ptr = arr;
//     cout<<(void*)arr<<endl;
//     cout<<(void*)ptr;
//     return 0;
// }





// PRINTING ADDRESS OF A CHAR ARRAY

// Normally, cout treats char* as a C-style string.
// Therefore:
// cout << arr;
// cout << ptr;
// print the characters starting from that address until '\0'.

// To print the actual memory address, we typecast char* to void*.

// (void*)arr converts the char* into a generic pointer (void*).
// cout treats void* as an address and prints the memory address.

// Since ptr = arr, both point to the first element of the array.
// Therefore, (void*)arr and (void*)ptr print the same address.

// Example:
// arr  -> char* -> cout prints string
// (void*)arr -> void* -> cout prints address

// Better C++ syntax:
// static_cast<void*>(arr)





// #include<iostream>
// using namespace std;

// int main() {
//     char name = 'a';
//     char *ptr = &name;
//     cout<<ptr<<endl;
//     cout<<(void*)ptr;
//     return 0;
// }
// here the same implementation is working too.





// FUNCTIONS

// PASS BY VALUE
// A copy of num is passed to n.
// Changes are made only to the copy.
// Original variable remains unchanged.
// num = 5
//       ↓ copy
// n   = 5 → 6
// num = 5 (unchanged)

// #include <iostream>
// using namespace std;

// void update(int n) {
//     n = n + 1;
// }
// int main() {
//     int num = 5;
//     update(num);
//     cout << num;   // 5
// }


// PASS BY REFERENCE USING POINTER

// &num  -> address of num
// ptr   -> stores address of num
// *ptr  -> accesses the original num
// Therefore, changing *ptr changes num itself.
// num = 5
//  ↑
// ptr points to num
//  ↓
// *ptr = *ptr + 1
// num becomes 6

// #include <iostream>
// using namespace std;

// void update(int *ptr) {
//     *ptr = *ptr + 1;
// }
// int main() {
//     int num = 5;
//     update(&num);
//     cout << num;   // 6
// }


// Pass by Value:
// update(num)
// Copy is passed → original value does NOT change.

// Pass by Reference using Pointer:
// update(&num)
// Address is passed → original value CAN be changed.

// &num = address of num
// ptr  = stores the address
// *ptr = value present at that address



// Problem - Double the values of a given array
// #include<iostream>
// using namespace std;

// void dob(int* nums) {
//     for (int i=0 ; i < 5 ; i++) {
//         *(nums+i) *= 2;
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     dob(arr);
//     for (int i=0 ; i < 5 ; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Problem - Swap the values
// #include<iostream>
// using namespace std;

// void swap(int* p1, int* p2) {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// int main() {
//     int a,b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;
//     cout<<"Swapping..."<<endl;
//     swap(&a, &b);
//     cout<<"a: "<<a<<endl;
//     cout<<"b: "<<b;
//     return 0;
// }





// REFERENCE VARIABLE

// int num = 10;
// int &ref = num;

// ref is an alias/another name for num.
// ref does NOT create a separate copy of num.
// Changes made using ref also change num.

// ref++;
// num becomes 11

// Both have the same address:
// cout << &num << endl;
// cout << &ref << endl;