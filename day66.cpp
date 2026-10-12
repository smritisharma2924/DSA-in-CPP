/*
TYPES OF INHERITANCE IN C++

1. SINGLE INHERITANCE
   One derived class inherits from one base class.

   A -> B

   class B : public A {};


2. MULTILEVEL INHERITANCE
   A class inherits from another derived class, forming a chain.

   A -> B -> C

   class B : public A {};
   class C : public B {};


3. MULTIPLE INHERITANCE
   One derived class inherits from more than one base class.

   A   B
    \ /
     C

   class C : public A, public B {};

   If both parents have a member with the same name,
   qualify it when needed: obj.A::display();


4. HIERARCHICAL INHERITANCE
   Multiple derived classes inherit from the same base class.

       A
      / \
     B   C

   class B : public A {};
   class C : public A {};


5. HYBRID INHERITANCE
   A combination of two or more inheritance types.

   Example: diamond inheritance combines hierarchical
   and multiple inheritance.

       A
      / \
     B   C
      \ /
       D

   Normally, D contains TWO A base subobjects.
   Virtual inheritance makes B and C share ONE A base subobject:

   class B : virtual public A {};
   class C : virtual public A {};
   class D : public B, public C {};


REMEMBER:
- Arrows/branches above lead from base to derived classes.
- These types describe the STRUCTURE of inheritance.
- public, protected, and private describe inheritance ACCESS modes.
*/



// ======================
// SINGLE INHERITANCE
// ======================

#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    Human() {
        cout<<"Hello human\n";
    }
    ~Human() {
        cout<<"Goodbye human\n";
    }
    void work() {
        cout<<"I am working\n";
    }
};

class Student: public Human{
    int roll_no, fees;

    public:
    Student(string name, int age, int roll_no, int fees) {
        cout<<"Hello student\n";
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }
    ~Student() {
        cout<<"Goodbye student\n";
    }
};

int main() {
    Student a1("Smriti", 19, 1, 99); //parent class's constructor is called first, then derived class's constructor is called. the destructor is called in reverse order.
    a1.work();
}