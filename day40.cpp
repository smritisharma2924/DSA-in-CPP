// POINTERS & ARRAYS

// Array elements are stored in contiguous memory locations.

// The array name represents the address of its first element.
// arr == &arr[0]

// Pointer arithmetic:
// arr + i == &arr[i]

// Accessing values using pointers:
// *(arr + i) == arr[i]

// arr + 1 moves to the next element, not the next byte.
// The address increases by sizeof(data_type).

// A pointer can point to the first element of an array:
// int *ptr = arr;

// ptr can be modified (ptr++), but the array name cannot (arr++ is invalid).



// Print the addresses of the array elements
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     for (int i=0 ; i < 5 ; i++) {
//         cout<<"Address of "<<arr[i]<<": "<<arr+i<<endl;
//     }
//     return 0;
// }



// Print the addresses of the array elements using a pointer
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int *ptr = arr;
//     for (int i=0 ; i < 5 ; i++) {
//         cout<<ptr+i<<endl;
//     }
//     return 0;
// }