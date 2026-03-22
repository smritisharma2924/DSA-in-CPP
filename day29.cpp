// Problem 1 - Binary Search in 2D Array
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
//     int target;
//     cout<<"Enter the number you want to search : ";
//     cin>>target;
//     int start = 0, end = row*col-1, mid, row_idx = -1, col_idx = -1;
//     while (start <= end) {
//         mid = start + (end-start)/2;
//         row_idx = mid / col;
//         col_idx = mid % col;
//         if (matrix[row_idx][col_idx] == target) {
//             cout<<"Element is present at : "<<row_idx<<","<<col_idx;
//             break;
//         }
//         else if (matrix[row_idx][col_idx] < target) start = mid+1;
//         else end = mid-1;
//     }
//     cout<<"Element is not present.";
//     return 0;
// }



// Problem 2 - Binary Search in 2D Array with Sorted rows and columns
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
//     int target;
//     cout<<"Enter the number you want to search : ";
//     cin>>target;
//     int i=0, j=col-1;
//     while (i<row && j>=0) {
//         if (matrix[i][j] == target) {
//             cout<<"Element is present at : "<<i<<","<<j;
//             return 0;
//         }
//         else if (matrix[i][j] < target) i++;
//         else j--;
//     }
//     cout<<"Element is not present.";
//     return 0;
// }
