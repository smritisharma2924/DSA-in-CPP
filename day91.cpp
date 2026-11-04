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
