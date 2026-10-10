/*
CONSTRUCTORS IN C++

1. A constructor initializes an object automatically when it is created.

2. It has the SAME name as the class and NO return type, not even void.

3. It is usually declared public.

4. Main types:
   - Default constructor: can be called without arguments.
   - Parameterized constructor: takes arguments to initialize members.
   - Copy constructor: creates an object from another existing object.

5. Constructors can be overloaded using different parameter lists.

6. If you declare no constructors, the compiler normally provides
   a default constructor. If you declare one, it does not automatically
   provide a default constructor.

7. Prefer a member initializer list to initialize data members:
   Student(int a) : age(a) {}

8. Members initialize in their declaration order in the class.

9. Constructors cannot be static or virtual.

10. A constructor does NOT automatically set every variable to zero.
*/



#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_no;
    int balance;

};

int main() {
    Customer a1;
}