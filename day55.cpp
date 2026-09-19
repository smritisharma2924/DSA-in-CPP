// Problem 1 - perfect sum
#include<iostream>
using namespace std;

int ways(int arr[], int current, int idx, int n, int target) {
    if (idx == n) {
        return current == target;
    }
    // inlcude current element
    int include = ways(arr, current+arr[idx], idx+1, n, target);
    // dont include current element
    int exclude = ways(arr, current, idx+1, n, target);
    return include+exclude;
}

int main() {
    int arr[] = {2,5,6,1};
    cout<<ways(arr, 0, 0, 4, 8);
    return 0;
}