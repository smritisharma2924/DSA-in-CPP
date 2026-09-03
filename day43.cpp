/*
MEMORY ALLOCATION IN C++

Memory is mainly divided into:
1. Stack Memory -> Static/Automatic allocation
2. Heap Memory  -> Dynamic allocation


1. STATIC / AUTOMATIC MEMORY ALLOCATION

Memory size is known at compile time.
Local variables are generally stored on the stack.
Memory is automatically released when the scope ends.

Example:
int x = 10;
int arr[5];

No need to manually delete the memory.


2. DYNAMIC MEMORY ALLOCATION

Memory is allocated at runtime from the HEAP.
We use the 'new' keyword to allocate memory.

Example:
int *ptr = new int;

Here:
- 'new int' creates an integer on the heap.
- new returns its address.
- ptr stores that address.

We can assign a value:
*ptr = 10;


Dynamic Array:

int *arr = new int[20];

Creates an array of 20 integers on the heap.
'arr' stores the address of the first element.


DEALLOCATING MEMORY

Memory created using 'new' must be manually released.

Single variable:
int *ptr = new int;
delete ptr;

Array:
int *arr = new int[20];
delete[] arr;


IMPORTANT:

new int       -> allocate one int
new int[20]   -> allocate array of 20 ints

delete ptr    -> delete single dynamically allocated value
delete[] arr  -> delete dynamically allocated array

Stack -> automatic memory management
Heap  -> manual memory management using new/delete

Not deleting heap memory when it is no longer needed can cause a MEMORY LEAK.
*/



// #include<iostream>
// using namespace std;

// int main() {
//     // int value allocation
//     int *ptr1 = new int;
//     *ptr1 = 5;
//     cout<<"Integer: "<<*ptr1<<endl;

//     // float value allocation
//     float *ptr2 = new float;
//     *ptr2 = 3.6;
//     cout<<"Float: "<<*ptr2<<endl;

//     // array value allocation
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int *p = new int[n];
//     for (int i=0 ; i<n ; i++) p[i] = i+1;
//     for (int i=0 ; i<n ; i++) cout<<p[i]<<" ";

//     // free memory
//     delete ptr1;
//     delete ptr2;
//     delete[] p;

//     return 0;
// }