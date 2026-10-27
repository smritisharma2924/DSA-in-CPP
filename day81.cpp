// STACK

// it is a linear data structure, in which insertion and deletion 
// are only allowed at the end, called the top of stack

// when we define a stack as an abstract data type, then we are only 
// interested in knowing the stack operation from the users's POV.
// it simply means, we are not interested in knowing the implementation,
// we are only interested in what type of output we can perform on it.

// PUSH: add element on top
// POP: delete element on top
// PEEK: view the top element
// ISISZE: size of the stack/no of elements in stack currently
// ISEMPTY: if empty 1 is returned

// LIFO: Last In First Out <= STACK
// FILO: First in Last Out <= also a stack property but not confirmed and justified in all casees
// FIFO: First In First Out
// LILO: Last in Last Out



// IMPLEMENTATION USING ARRAY

// #include<iostream>
// using namespace std;

// class Stack {
//     int *arr;
//     int size;
//     int top;
//     public:
//     bool flag; // if stack is empty then flag is 1
//     Stack(int s) {
//         size = s;
//         top = -1;
//         arr = new int[s];
//         flag = 1;
//     }
//     void push(int value) {
//         if (top == size-1) cout<<"Stack overflow.\n";
//         else {
//             top++;
//             arr[top] = value;
//             cout<<"Pushed "<<value<<" into the stack.\n";
//             flag = 0; // stack isnt empty
//         }
//         return;
//     }
//     void pop() {
//         if (top == -1) cout<<"Stack underflow.\n";
//         else {
//             cout<<"Popped "<<arr[top]<<" from the stack.\n";
//             top--;
//             if (top == -1) flag = 1;
//         }
//         return;
//     }
//     int peek() {
//         if (top == -1) {
//             cout<<"Stack is empty.\n";
//             return -1;
//         }
//         else return arr[top];
//     }
//     bool isEmpty() {
//         return top == -1;
//     }
//     int isSize() {
//         return top+1;
//     }
// };

// int main() {
//     Stack s(5);
//     s.push(4);
//     s.push(2);
//     s.push(7);
//     s.push(9);
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.push(1);
//     s.push(8);
//     cout<<s.peek()<<endl;
//     cout<<s.isSize()<<endl;
//     cout<<s.isEmpty()<<endl;


//     Stack s2(3);
//     s2.push(-1);
//     cout<<s2.peek()<<endl;

//     int value = s2.peek();
//     if (s2.flag == 0) cout<<value<<endl;
// }



// IMPLEMENTATION USING LINKEDLIST

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

// class Stack{
//     node *top;
//     int size; // actual size
    
//     public:
//     Stack() {
//         top = NULL;
//         size = 0;
//     }
//     void push(int value) {
//         node *temp = new node(value);
//         if (temp == NULL) {
//             cout<<"Stack Overflow.\n";
//             return;
//         }
//         temp->next = top;
//         top = temp;
//         size++;
//         cout<<"Pushed "<<value<<" into the stack.\n";
//         return;
//     }
//     void pop() {
//         if (top == NULL) {
//             cout<<"Stack Underflow.\n";
//             return;
//         }
//         node *temp = top;
//         cout<<"Popped "<<top->data<<" from the stack.\n";
//         top = top->next;
//         delete temp;
//         size--;
//         return;
//     }
//     int peek() {
//         if (top == NULL) {
//             cout<<"Stack is empty.\n";
//             return -1;
//         }
//         return top->data;
//     }
//     bool isEmpty() {
//         return top == NULL;
//     }
//     int isSize() {
//         return size;
//     }
// };

// int main() {
//     Stack s;
//     s.push(6);
//     s.push(16);
//     s.push(62);
//     s.push(7);
//     s.pop();
//     cout<<s.peek()<<endl;
//     cout<<s.isEmpty()<<endl;
//     cout<<s.isSize()<<endl;
//     return 0;
// }



// IMPLEMENTATION USING STL

// #include<iostream>
// using namespace std;

// int main() {
//     stack<int>s;
//     s.push(6);
//     s.push(16);
//     s.push(26);
//     cout<<s.size()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     cout<<s.empty()<<endl;
//     return 0;
// }



// ACTUAL IMPLEMENTATION OF STACK IN STL: DEQUE