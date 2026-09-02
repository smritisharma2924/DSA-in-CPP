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