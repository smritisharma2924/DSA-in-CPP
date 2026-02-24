// 2D Arrays

// Row Major Order
// All elements of the first row are stored first, followed by all elements of the second row, and so on.

// 2D Logical view
//        Col 0  Col 1  Col 2
// Row 0 [ A      B      C  ]
// Row 1 [ D      E      F  ]

// 1D Physical Memory layout
// Address:  100    104    108    112    116    120
// Element: [ A ]  [ B ]  [ C ]  [ D ]  [ E ]  [ F ]
//         |-------Row 0------|  |-------Row 1------|

// Address(A[i][j]) = BaseAddress + (i×TotalCols + j) × SizeOfElement


// Column Major Order
// All elements of the first column are stored first, followed by the second column, etc.

// 2D Logical view
// Col 0  Col 1  Col 2
// Row 0 [ A      B      C  ]
// Row 1 [ D      E      F  ]

// 1D Physical Memory layout
// Address:  100    104    108    112    116    120
// Element: [ A ]  [ D ]  [ B ]   [ E ]  [ C ]  [ F ]
//         |---Col 0---|  |---Col 1---|  |---Col 2---|

// Address(A[i][j]) = BaseAddress + (j×TotalRows + i) × SizeOfElement



// Initialize Array
// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     int table[row][col];
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>table[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<table[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Search Element in an Array 
// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     int table[row][col];
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>table[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<table[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     int key;
//     cout<<"Enter element you want to search : ";
//     cin>>key;
//     int flag=0;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             if (table[i][j]==key) {
//                 cout<<"Element present at index "<<i<<","<<j<<".";
//                 flag=1;
//                 break;
//             }
//         }
//     }
//     if (flag==0) cout<<"Element is not present.";
//     return 0;
// }



// Add two matrices
// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     int mat1[row][col];
//     int mat2[row][col];
//     cout<<"Enter elements of matrix 1 : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>mat1[i][j];
//         }
//     }
//     cout<<"Enter elements of matrix 2 : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>mat2[i][j];
//         }
//     }
//     cout<<"Matrix 1 : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<mat1[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     cout<<"Matrix 2 : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<mat2[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     int sum[row][col];
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             sum[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
//     cout<<"Addition is : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<sum[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Print row index with maximum sum
// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     int table[row][col];
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>table[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<table[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     int idx, max_sum=INT_MIN, current_sum;
//     for (int i=0 ; i<row ; i++) {
//         current_sum=0;
//         for (int j=0 ; j<col ;j++) {
//             current_sum += table[i][j];
//         }
//         if (current_sum > max_sum) {
//             max_sum = max(current_sum,max_sum);
//             idx=i;
//         }
//     }
//     cout<<"The row with maximum sum is : "<<idx;
//     return 0;
// }



// Print sum of diagonal elements - Time Complexity : O(n^2)
// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     int table[row][col];
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>table[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<table[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     int diag_sum=0;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ;j++) {
//             if (i==j) diag_sum += table[i][j];
//         }
//     }
//     cout<<"The sum of diagonal elements is : "<<diag_sum;
//     return 0;
// }



// Reverse each row of matrix
// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     int mat[row][col];
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>mat[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<mat[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     cout<<"Reversing the rows : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col/2 ; j++) {
//             swap(mat[i][j],mat[i][col-j-1]);
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<mat[i][j]<<"    ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }