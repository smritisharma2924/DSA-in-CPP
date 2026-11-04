// DEQUEUE
// double ended queue

// IMPLEMENTATION USING LINKED LIST
// #include<iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node *next;
//     node *prev;
//     node (int value) {
//         cout << "Creating node with value " << value << endl;
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class dequeue{
//     public:
//     node *front, *rear;
//     dequeue() {
//         cout << "Creating an empty dequeue" << endl;
//         front = rear = NULL;
//     }
//     void push_front(int x) {
//         cout << "Pushing " << x << " at the front" << endl;
//         if (front == NULL) {
//             front = rear = new node(x);
//             return;
//         }
//         else {
//             node *temp = new node(x);
//             temp->next = front;
//             front->prev = temp;
//             front = temp;
//             return;
//         }
//     }
//     void push_back(int x) {
//         cout << "Pushing " << x << " at the back" << endl;
//         if (front == NULL) {
//             front = rear = new node(x);
//             return;
//         }
//         else {
//             node *temp = new node(x);
//             rear->next = temp;
//             temp->prev = rear;
//             rear = temp;
//             return;
//         }
//     }
//     void pop_front() {
//         cout << "Popping from the front" << endl;
//         if (front == NULL) return;
//         else {
//             node *temp = front;
//             front = front->next;
//             delete temp;
//             // if it was a single node
//             if (front) front->prev = NULL;
//             else rear = NULL;
//         }
//     }
//     void pop_back() {
//         cout << "Popping from the back" << endl;
//         if (rear == NULL) return;
//         else {
//             node *temp = rear;
//             rear = rear->prev;
//             delete temp;
//             // if it was a single node
//             if (rear) rear->next = NULL;
//             else front = NULL;
//         }
//     }
//     int start() {
//         cout << "Getting the front value (-1 if empty)" << endl;
//         if (front == NULL) return -1;
//         else return front->data;
//     }
//     int end() {
//         cout << "Getting the back value (-1 if empty)" << endl;
//         if (front == NULL) return -1;
//         else return rear->data;
//     }
// };

// void view_dequeue(dequeue &d) {
//     cout << "Dequeue (front to back): ";
//     if (d.front == NULL) {
//         cout << "empty" << endl;
//         return;
//     }
//     node *temp = d.front;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     cout << "Demonstrating a dequeue using a linked list" << endl;
//     dequeue d1;

//     d1.push_front(5);
//     view_dequeue(d1);
//     d1.push_front(3);
//     view_dequeue(d1);
//     d1.push_back(7);
//     view_dequeue(d1);
//     d1.push_back(9);
//     view_dequeue(d1);

//     int front_value = d1.start();
//     cout << "Front value: " << front_value << endl;
//     int back_value = d1.end();
//     cout << "Back value: " << back_value << endl;

//     d1.pop_front();
//     view_dequeue(d1);
//     d1.pop_back();
//     view_dequeue(d1);
//     return 0;
// }



// IMPLEMENTATION USING ARRAY
// #include<iostream>
// using namespace std;

// class dequeue{
//     int front, rear, size;
//     int *arr;
//     public:
//     dequeue(int n) {
//         size = n;
//         arr = new int[n];
//         front = rear = -1;
//     }
//     bool isEmpty() {
//         return front == -1;
//     }
//     bool isFull() {
//         return (rear+1)%size == front;
//     }
//     void push_front(int x) {
//         if (isEmpty()) {
//             front = rear = 0;
//             arr[0] = x;
//             return;
//         }
//         else if (isFull()) {
//             cout<<"Overflow.";
//             return;
//         }
//         else {
//             front = (front-1+size)%size;
//             arr[front] = x;
//             return;
//         }
//     }
//     void push_back(int x) {
//         if (isEmpty()) {
//             front = rear = 0;
//             arr[0] = x;
//             return;
//         }
//         else if (isFull()) {
//             cout<<"Overflow.";
//             return;
//         }
//         else {
//             rear = (rear+1+size)%size;
//             arr[rear] = x;
//             return;
//         }
//     }
//     void pop_front() {
//         if (isEmpty()) return;
//         else if (front == rear) {
//             front = rear = -1;
//             return;
//         }
//         else {
//             front = (front+1+size)%size;
//             return;
//         }
//     }
//     void pop_back() {
//         if (isEmpty()) return;
//         else if (front == rear) {
//             front = rear = -1;
//             return;
//         }
//         else {
//             rear = (rear-1+size)%size;
//             return;
//         }
//     }
//     int start() {
//         if (isEmpty()) return -1;
//         else return arr[front];
//     }
//     int end() {
//         if (isEmpty()) return -1;
//         else return arr[rear];
//     }
//     void display() {
//         cout << "Dequeue (front to back): ";
//         if (isEmpty()) {
//             cout << "empty" << endl;
//             return;
//         }
//         int i = front;
//         while (true) {
//             cout << arr[i] << " ";
//             if (i == rear) break;
//             i = (i+1)%size;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     dequeue d1(5);

//     d1.push_front(5);
//     d1.display();
//     d1.push_front(3);
//     d1.display();
//     d1.push_back(7);
//     d1.display();
//     d1.push_back(9);
//     d1.display();
//     d1.push_back(11);
//     d1.display();

//     cout << "Front value: " << d1.start() << endl;
//     cout << "Back value: " << d1.end() << endl;
//     cout << "Is empty: " << d1.isEmpty() << endl;
//     cout << "Is full: " << d1.isFull() << endl;

//     d1.pop_front();
//     d1.display();
//     d1.pop_back();
//     d1.display();

//     return 0;
// }
