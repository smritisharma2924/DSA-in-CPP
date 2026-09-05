/*
DYNAMIC MEMORY ALLOCATION OF 2D ARRAY

For a dynamic 2D array, we can use a DOUBLE POINTER (int **ptr).
Example: Create a 5 x 4 array dynamically.

int rows = 5, cols = 4;

int **ptr = new int*[rows];
for(int i = 0; i < rows; i++) {
    ptr[i] = new int[cols];
}


MEMORY REPRESENTATION:
ptr
 |
 |----|ptr[0]|----> [ 3 ][ 4 ][ 11 ][ 8 ]
 |    |      |
 |----|ptr[1]|----> [ 7 ][ 9 ][  1 ][ 4 ]
 |    |      |
 |----|ptr[2]|----> [ 2 ][ 8 ][  3 ][ 9 ]
 |    |      |
 |----|ptr[3]|----> [11 ][ 6 ][ 25 ][ 0 ]
 |    |      |
 |----|ptr[4]|----> [ 9 ][ 8 ][ 13 ][ 4 ]

HOW IT WORKS:

1. int **ptr = new int*[rows];
   Creates an array of 'rows' pointers on the heap.
   Each ptr[i] can store the address of one row.

2. ptr[i] = new int[cols];
   Dynamically creates each row containing 'cols' integers.

ACCESSING ELEMENTS:

ptr[i][j]
is equivalent to:

*(*(ptr + i) + j)

Explanation:
ptr + i          -> address of ith row pointer
*(ptr + i)       -> ptr[i] -> address of ith row
*(ptr + i) + j   -> address of jth element in ith row
*(*(ptr+i)+j)    -> value at ptr[i][j]

Example:

ptr[2][1]
is same as:
*(*(ptr + 2) + 1)

Both access row 2, column 1 -> value 8.

IMPORTANT POINT:

Unlike a normal static 2D array, dynamically allocated
rows do NOT necessarily have to be contiguous in memory.

Each ptr[i] stores the address of a separately allocated row.


DEALLOCATING MEMORY:

First delete every row:

for(int i = 0; i < rows; i++) {
    delete[] ptr[i];
}

Then delete the array of pointers:

delete[] ptr;


IMPORTANT:
Always delete rows FIRST and ptr LAST to avoid memory leaks.
*/



// 2D array with DMA
// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout<<"Enter no. of row: ";
//     cin>>row;
//     cout<<"Enter no. of col: ";
//     cin>>col;

//     // create array of row pointers
//     int **ptr = new int*[row];

//     // create 2d array
//     for (int i=0 ; i < row ; i++) {
//         ptr[i] = new int[col];
//     }
    
//     // fill the values
//     for (int i=0 ; i < row ; i++) {
//         for (int j=0 ; j < col ; j++) {
//             cin>>ptr[i][j];
//         }
//     }

//     // print the values
//     for (int i=0 ; i < row ; i++) {
//         for (int j=0 ; j < col ; j++) {
//             cout<<ptr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     // release the memory
//     for (int i=0 ; i < row ; i++) delete[] ptr[i];
//     delete[] ptr;

//     return 0;
// }