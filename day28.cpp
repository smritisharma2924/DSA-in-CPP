// Problem 1 - Rotate a matrix by 90 degrees clockwise
// Time Complexity - O(n^2)    Space Complexity - O(n^2)
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     vector<vector<int>>matrix(row,vector<int>(col));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Rotating the matrix by 90 degrees clockwise : "<<endl;
//     vector<vector<int>>rotatedmat(row,vector<int>(col));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             rotatedmat[j][col-i-1] = matrix[i][j];
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<rotatedmat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Space Complexity - O(1) 
// without using any extra space
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     vector<vector<int>>matrix(row,vector<int>(col));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Rotating the matrix by 90 degrees clockwise : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=i+1 ; j<col ; j++) {
//             swap(matrix[i][j],matrix[j][i]);
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col/2 ; j++) {
//             swap(matrix[i][j],matrix[i][col-j-1]);
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Problem 2 - Rotating by 180 degrees
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     vector<vector<int>>matrix(row,vector<int>(col));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Rotating the matrix by 180 degrees clockwise : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col/2 ; j++) {
//             swap(matrix[i][j],matrix[i][col-j-1]);
//         }
//     }
//     for (int j=0 ; j<col ; j++) {
//         for (int i=0 ; i<row/2 ; i++) {
//             swap(matrix[i][j],matrix[row-i-1][j]);
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Problem 3 - Rotate Matrix by 90 degrees anticlockwise
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     vector<vector<int>>matrix(row,vector<int>(col));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Rotating the matrix by 90 degrees anticlockwise : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=i+1 ; j<col ; j++) {
//             swap(matrix[i][j],matrix[j][i]);
//         }
//     }
//     for (int j=0 ; j<col ; j++) {
//         for (int i=0 ; i<row/2 ; i++) {
//             swap(matrix[i][j],matrix[row-i-1][j]);
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Problem 4 - Rotate matrix by k time (one time = 90 degrees)
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     vector<vector<int>>matrix(row,vector<int>(col));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"You have entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int k;
//     cout<<"How many times you want to rotate the matrix by 90 degrees? ";
//     cin>>k;
//     cout<<"Rotating the matrix "<<k<<" times by 90 degrees clockwise : "<<endl;
//     if (k%4==1) {
//         for (int i=0 ; i<row ; i++) {
//             for (int j=i+1 ; j<col ; j++) {
//                 swap (matrix[i][j],matrix[j][i]);
//             }
//         }
//         for (int i=0 ; i<row ; i++) {
//             for (int j=0 ; j<col/2 ; j++) {
//                 swap(matrix[i][j],matrix[i][col-j-1]);
//             }
//         }
//     }
//     else if (k%4==2) {
//         for (int i=0 ; i<row ; i++) {
//             for (int j=0 ; j<col/2 ; j++) {
//                 swap(matrix[i][j],matrix[i][col-j-1]);
//             }
//         }
//         for (int j=0 ; j<col ; j++) {
//             for (int i=0 ; i<row/2 ; i++) {
//                 swap(matrix[i][j],matrix[row-i-1][j]);
//             }
//         }
//     }
//     else if (k%4==3) {
//         for (int i=0 ; i<row ; i++) {
//             for (int j=i+1 ; j<col ; j++) {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         for (int j=0 ; j<col ; j++) {
//             for (int i=0 ; i<row/2 ; i++) {
//                 swap(matrix[i][j],matrix[row-i-1][j]);
//             }
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }