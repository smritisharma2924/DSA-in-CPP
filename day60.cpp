// Rat in a Maze
// Given an N x N maze where:
// 1 represents an open cell and 0 represents a blocked cell.
//
// A rat starts from the top-left cell (0, 0) and has to reach
// the bottom-right cell (N-1, N-1).
//
// The rat can move in four directions:
// D -> Down
// L -> Left
// R -> Right
// U -> Up
//
// Find "all possible paths" through which the rat can reach the
// destination without visiting the same cell more than once.
//
// Return/store the paths as strings containing the characters
// 'D', 'L', 'R', and 'U'.
//
// Example:
// Maze:
// 1 0 0 0
// 1 1 0 1
// 1 1 0 0
// 0 1 1 1
//
// Possible paths: "DDRDRR", "DRDDRR"





// #include<iostream>
// using namespace std;

// int row[] = {-1,1,0,0};
// int col[] = {0,0,-1,1};
// string dir = "UDLR";

// bool valid(int i, int j, int n) {
//     return (i>=0 && j>=0 && i<n && j<n);
// }

// void total(vector<vector<int>> &matrix, int i, int j, int n, string path, vector<string> &ans, vector<vector<bool>> &visited) {
//     if (i == n-1 && j == n-1) {
//         ans.push_back(path);
//         return;
//     }
//     visited[i][j] = 1;
//     // we can go L,R,U,D but following rules must be obeyed
//     // 1. cant go out the matrix
//     // 2. cant go on the block marked 0
//     // 3. cant go on already visited blocks
//     for (int k=0 ; k<4 ; k++) {
//         if (valid(i+row[k], j+col[k], n) && matrix[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]]) {
//             path.push_back(dir[k]);
//             total(matrix, i+row[k], j+col[k], n, path, ans, visited);
//             path.pop_back();
//         }
//     }
//     visited[i][j] = 0;
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     vector<vector<int>> matrix(n, vector<int>(n));

//     cout << "Enter matrix:" << endl;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     vector<vector<bool>> visited(n, vector<bool>(n, 0));
//     vector<string> ans;
//     string path = "";

//     if (matrix[0][0] == 1) {
//         total(matrix, 0, 0, n, path, ans, visited);
//     }

//     for (int i=0; i<ans.size(); i++) {
//         cout << ans[i] << endl;
//     }

//     return 0;
// }