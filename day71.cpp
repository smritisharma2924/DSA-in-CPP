// DELETING THE FIRST NODE
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int value) {
        data = value;
        next = NULL;
    }
};

node* createLinkedList(int arr[], int index, int size) {
    if (index == size) return NULL;
    node *temp;
    temp = new node(arr[index]);
    temp->next = createLinkedList(arr, index+1, size);
    return temp;
};

int main() {
    int arr[] = {2,4,6,8,10};
    node *head = createLinkedList(arr,0,5);
    node *temp = head;
    head = head->next;
    delete temp;

    while(head) {
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}