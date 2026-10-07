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

#include<iostream>
using namespace std;



void total(vector<vector<int>> &matrix, int i, int j, int n, string path, vector<string> &ans, vector<vector<bool>> &visited) {
    if (i == n-1 && j == n-1) {
        ans.push_back(path);
        return;
    }
    visited[i][j] = 1;
    // we can go L,R,U,D but following rules must be obeyed
    // 1. cant go out the matrix
    // 2. cant go on the block marked 0
    // 3. cant go on already visited blocks

}