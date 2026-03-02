// Vector in 2D

// Creating : vector<vector<int> >matrix(rows,vector<int>(col,initialization_value));
// Functions :
// matrix.size() returns number of rows present
// matrix[0].size() returns number of columns



// Program 1 - Creating a 2D Array
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     vector<vector<int>>matrix(row,vector<int>(col,0));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"You entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<"   ";
//         }
//         cout<<endl;
//     }
//     cout<<"Rows : "<<matrix.size()<<endl;
//     cout<<"Columns : "<<matrix[0].size()<<endl;
//     return 0;
// }



// Program 2 - Print elements in Wave Form
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     cout<<endl;
//     vector<vector<int>>matrix(row,vector<int>(col,0));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<endl<<"You entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<"     ";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<"Printing elements in wave form : "<<endl;
//     for (int j=0 ; j<col ; j++) {
//         if (j%2==0) for (int i=0 ; i<row ; i++) cout<<matrix[i][j]<<" ";
//         else for (int i=row-1 ; i>=0 ; i--) cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



// Problem 3 - Print elements in Spiral Form
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     cout<<endl;
//     vector<vector<int>>matrix(row,vector<int>(col,0));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<endl<<"You entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<"     ";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<"Printing elements in spiral form : "<<endl;
//     int top=0, right=col-1, bottom=row-1, left=0, i, j;
//     while (top<=bottom && right>=left) {
//         for (j=left ; j<=right ; j++) cout<<matrix[top][j]<<" "; top++;
//         for (i=top ; i<=bottom ; i++) cout<<matrix[i][right]<<" "; right--;
//         if (top<=bottom) for (j=right ; j>=left ; j--) cout<<matrix[bottom][j]<<" "; bottom--;
//         if (left<=right) for (i=bottom ; i>=top ; i--) cout<<matrix[i][left]<<" "; left++;
//     }
//     cout<<endl;
//     return 0;
// }



// Problem 4 - Transpose Matrix
// #include<iostream>
// using namespace std;

// int main() {
//     int row,col;
//     cout<<"Enter number of rows : ";
//     cin>>row;
//     cout<<"Enter number of columns : ";
//     cin>>col;
//     cout<<endl;
//     vector<vector<int>>matrix(row,vector<int>(col,0));
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<"Enter element at index "<<i<<","<<j<<" : ";
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<endl<<"You entered : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<"     ";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<"Printing transpose of this matrix : "<<endl;
//     for (int i=0 ; i<row ; i++) {
//         for (int j=i+1 ; j<col ; j++) {
//             if (i==j) continue;
//             else swap(matrix[i][j],matrix[j][i]);
//         }
//     }
//     for (int i=0 ; i<row ; i++) {
//         for (int j=0 ; j<col ; j++) {
//             cout<<matrix[i][j]<<"     ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }