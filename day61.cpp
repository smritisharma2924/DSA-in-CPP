// N bit binary number
// find all n bit binary numbers having more than or equal to 1's than 0's in all prefixes of the number

// #include<iostream>
// using namespace std;

// void find(int n, vector<string> &ans, string &temp, int zero, int one) {
//     if(temp.size() == n) {
//         ans.push_back(temp);
//         return;
//     }
//     // inserting zero only if it is less than one
//     if (zero < one) {
//         temp.push_back('0');
//         find(n, ans,temp, zero+1, one);
//         temp.pop_back();
//     }
//     // inserting one in any case
//     temp.push_back('1');
//     find(n, ans, temp, zero, one+1);
//     temp.pop_back();
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     vector<string> ans;
//     string temp = "";
//     find(n, ans, temp, 0, 0);
//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << endl;
//     }
//     return 0;
// }