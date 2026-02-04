#include<iostream>
using namespace std;

int binary_search(int a[], int n,int key) {
    int low=0, high=n, idx=(low+high)/2;
    while (a[idx] != key) {
        if (a[idx] > key) {
            high = idx;
        }
        else low = idx;
        idx = (low+high)/2;
    }
    return idx;
}

int main() {
    int len;
    cout<<"Enter length of the array : ";
    cin>>len;
    int arr[len];
    for (int i=0 ; i<len ; i++) {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Array : ";
    for (int i=0 ; i<len ; i++) {
        cout<<arr[i]<<" ";
    }
    int search;
    cout<<endl<<"Enter element you want to search : ";
    cin>>search;
    cout<<"Element is present at index : "<<binary_search(arr,len,search);
    return 0;
}