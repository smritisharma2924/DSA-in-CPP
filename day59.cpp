// Josephus problem
// predict the winnner of the game

// Brute force
// time complexity O(n2)

// #include<iostream>
// using namespace std;

// int winner(vector<bool> &person, int n, int index, int person_left, int k) {

//     // Base case: only one person is alive.
//     // Find and return that person's index.
//     if (person_left == 1) {
//         for (int i = 0; i < n; i++) {
//             if (person[i] == 0)
//                 return i;
//         }
//     }

//     // We are currently standing on an alive person. person[index] = 0.
//     // Since that person is counted as 1st person then 2nd then 3rd.., we need to move k-1 times to reach the kth alive person.
//     //
//     // Taking % person_left avoids unnecessary full rounds when k is greater than the number of people still alive.
//     int kill = (k - 1) % person_left;
//     kill tells us how many alive people we need to skip before eliminating the kth person. We will move in a circular manner, skipping over eliminated people (person[i] = 1) until we reach the kth alive person.

//     while (kill--) {

//         // Move to the next position in circular order.
//         index = (index + 1) % n;

//         // If this person has already been eliminated,
//         // keep moving until we find an alive person.
//         while (person[index] == 1) {
//             index = (index + 1) % n;
//         }
//     }

//     // 'index' now points to the kth alive person.
//     // Eliminate them.
//     person[index] = 1;

//     // Counting for the next round starts from the next alive person after the eliminated person.
//     while (person[index] == 1) {
//         index = (index + 1) % n;
//     }

//     // Continue with one fewer person alive.
//     return winner(person, n, index, person_left - 1, k);
// }

// int main() {
//     int n, k;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter k: ";
//     cin>>k;
//     vector<bool> person(n,0);
//     cout<<"Winner is the person at index: "<<winner(person, n, 0, n, k);
//     return 0;
// }



// Optimized solution
// time complexity O(n)

// #include<iostream>
// using namespace std;

// int winner(int n, int k) {
//     if (n == 1) return 0;
//     return (winner(n-1,k) + k) % n;
// }

// int main() {
//     int n, k;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter k: ";
//     cin>>k;
//     cout<<"Winner is the person at index: "<<winner(n, k);
//     return 0;
// }