// Insertion Sort
// Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time.

// 1. Divide : The array is virtually split into a sorted and an unsorted part.
// 2. Pick : Take the first element from the unsorted part (let's call it the key).
// 3. Compare & Shift : Compare the key with elements in the sorted part (from right to left). If an element in the sorted part is larger than the key, shift that element one position to the right to make space.
// 4. Insert : Once you find the correct spot (where the element is smaller than or equal to the key), drop the key there.
// 5. Repeat : Move to the next unsorted element.

// Metric          Complexity
// Best Case       O(n)
// Average Case    O(n^2)
// Space           O(1)

// Implementing Insertion Sort
#include<iostream>
using namespace std;

void insertion_sort(int a[], int n) {
    for(int i=0 ; i<n-1 ; i++) {
        for(int j=i+1 ; j>0 ; j--) {
            if (a[j-1]>a[j]) swap(a[j-1],a[j]);  
        }
    }
}

int main() {
    int arr[] = {10,8,2,3,1,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array : ";
    for(int i=0 ; i<len ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Sorted Array : ";
    insertion_sort(arr,len);
    for(int i=0 ; i<len ; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}