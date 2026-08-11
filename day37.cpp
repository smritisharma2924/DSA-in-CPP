// Problem 1 - String Matching

// Brute Force
#include<iostream>
using namespace std;

int main() {
    string haystack, needle;
    cout<<"Enter haystack: ";
    cin>>haystack;
    cout<<"Enter needle: ";
    cin>>needle;
    int n = haystack.size(), m = needle.size();
    int first, second;
    for (int i=0 ; i <= n-m ; i++) {
        first = i, second = 0;
        while (second < m && haystack[first] == needle[second]) {
            first++;
            second++;
        }
        if (second == m) {
            cout<<"Found at index: "<<i;
            return 0;
        }
    }
    cout<<"Not found.";
    return 0;
}