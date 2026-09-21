// Problem - Tower of Hanoi

//        |              |              |
//       [1]             |              |
//      [ 2 ]            |              |
//     [  3  ]           |              |
//   ---------        ---------      ---------
//    Source(A)        Helper(B)      Destination(C)


// Rules
// 1. Move only one disk at a time.
// 2. You can move only the topmost disk of a rod.
// 3. A larger disk can never be placed on a smaller disk.
// 4. You need to move all N disks from Source to Destination.
// 5. You can use the third rod as a helper.
// 6. Usually the goal is to do it in the minimum number of moves.


// #include<iostream>
// using namespace std;

// void toh(int n, int sour, int help, int dest, int* ans) {
//     if (n == 1) {
//         cout<<"Move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
//         return;
//     }
//     (*ans)++;
//     toh(n-1, sour, dest, help, ans);
//     cout<<"Move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
//     toh(n-1, help, sour, dest, ans);
// }

// int main() {
//     int n = 4;
//     int ans = 0;
//     toh(n, 1, 2, 3, &ans);
//     cout<<"No of steps: "<<ans;
//     return 0;
// }

// Time complexity: O(2^n)
// Space complexity: O(n)