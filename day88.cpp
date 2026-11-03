/*
1. Queue is a linear data structure that follows FIFO (First In, First Out).
2. Insertion (enqueue/push) happens at the REAR, and deletion (dequeue/pop) happens at the FRONT.
3. Main operations: push(), pop(), front(), back(), empty(), size().
4. Types: Simple Queue, Circular Queue, Priority Queue, and Deque (Double-Ended Queue).
5. Applications: BFS, CPU scheduling, task scheduling, buffering, and printer queues.
*/


// IMPLEMENTING QUEUE USING ARRAY
// #include<iostream>
// using namespace std;

// class Queue{
//     int *arr;
//     int front, rear;
//     int size;
//     public:
//     Queue(int n) {
//         arr = new int[n];
//         front = -1, rear = -1;
//         size = n;
//     }
//     bool isEmpty() {
//         return front == -1;
//     }
//     bool isFull() {
//         return (rear+1)%size == front;
//     }
//     void push(int x) {
//         if (isEmpty()) {
//             front = rear = 0;
//             arr[0] = x;
//         }
//         else if (isFull()) {
//             cout<<"Queue overflow.";
//             return;
//         }
//         else {
//             rear = (rear+1)%size;
//             arr[rear] = x;
//         }
//     }
//     void pop() {
//         if (isEmpty()) {
//             cout<<"Queue underflow.";
//             return;
//         }
//         else {
//             if (front==rear) front = rear = -1;
//             else front = (front+1)%size;
//         }
//     }
//     int start() {
//         if (isEmpty()) {
//             cout<<"Queue is empty.";
//             return -1;
//         }
//         else return arr[front];
//     }
// };

// int main() {
//     Queue q(5);
//     q.push(5);
//     q.push(11);
//     q.push(7);
//     q.push(3);
//     q.push(6);
//     q.push(11);
//     q.pop();
//     q.pop();
//     q.pop();
//     return 0;
// }



// IMPLEMENTING QUEUE USING LINKED LIST
// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node *next;
//     node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// class Queue{
//     node *front;
//     node *rear;
//     public:
//     Queue() {
//         front = rear = NULL;
//     }
//     bool isEmpty() {
//         return front == NULL;
//     }
//     void push(int x) {
//         if (isEmpty()) {
//             front = new node(x);
//             rear = front;
//             return;
//         }
//         else {
//             rear->next = new node(x);
//             rear = rear->next;
//         }
//     }
//     void pop() {
//         if (isEmpty()) {
//             cout<<"Queue underflow.";
//             return;
//         }
//         else {
//             node *temp = front;
//             front = front->next;
//             delete temp;
//         }
//     }
//     int start() {
//         if (isEmpty()) {
//             cout<<"Queue empty.";
//             return -1;
//         }
//         else return front->data;
//     }
// };