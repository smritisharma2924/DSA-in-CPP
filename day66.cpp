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



// ===================
// SINGLE INHERITANCE
// ===================

/*
SINGLE INHERITANCE

1. One derived (child) class inherits from one base (parent) class.
   Syntax: class Child : public Parent {};

2. The child can reuse accessible parent members and add
   its own data members and functions.

3. Parent private members cannot be accessed directly by the child;
   public/protected access depends on the inheritance mode.

4. The parent constructor runs before the child constructor;
   destructors run in reverse order.

5. Public inheritance represents an "IS-A" relationship:
   a Dog IS AN Animal.
*/


// #include<iostream>
// using namespace std;

// class Human{
//     protected:
//     string name;
//     int age;

//     public:
//     Human() {
//         cout<<"Hello human\n";
//     }
//     ~Human() {
//         cout<<"Goodbye human\n";
//     }
//     void work() {
//         cout<<"I am working\n";
//     }
// };

// class Student: public Human{
//     int roll_no, fees;

//     public:
//     Student(string name, int age, int roll_no, int fees) {
//         cout<<"Hello student\n";
//         this->name = name;
//         this->age = age;
//         this->roll_no = roll_no;
//         this->fees = fees;
//     }
//     ~Student() {
//         cout<<"Goodbye student\n";
//     }
// };

// int main() {
//     Student a1("Smriti", 19, 1, 99); //parent class's constructor is called first, then derived class's constructor is called. the destructor is called in reverse order.
//     a1.work();
// }



// ======================
// MULTILEVEL INHERITANCE
// ======================

/*
MULTILEVEL INHERITANCE

1. A class inherits from another derived class, forming a chain:
   A -> B -> C.

2. Syntax:
   class B : public A {};
   class C : public B {};

3. C can use accessible members from both A and B.
   Access depends on member access modifiers and inheritance modes.

4. Private members of A cannot be accessed directly by B or C;
   private members of B cannot be accessed directly by C.

5. Constructor order: A -> B -> C.
   Destructor order:  C -> B -> A.
*/


// #include<iostream>
// using namespace std;

// class Person{
//     protected:
//     string name;
//     int age;

//     public:
//     void introduce() {
//         cout<<"Hello, my name is "<<name<<endl;
//     }
// };

// class Employee: public Person{
//     protected:
//     int salary;

//     public:
//     void monthly_salary() {
//         cout<<"My monthly salary is "<<salary<<endl;
//     }
// };

// class Manager: public Employee{
//     public:
//     string department;

//     public:
//     Manager(string name, int salary, string department) {
//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     }

//     void work() {
//         cout<<"I am leading the department of "<<department<<endl;
//     }
// };

// int main() {
//     Manager m1("Smriti", 10000, "HR");
//     m1.introduce();
//     m1.monthly_salary();
//     m1.work();
// }



// =====================
// MULTIPLE INHERITANCE
// =====================

/*
MULTIPLE INHERITANCE

1. One derived class inherits from two or more base classes.

2. Syntax:
   class C : public A, public B {};

3. The derived class can use accessible members of each base class.
   Each base can have a different inheritance access mode.

4. Same-named members from different bases can cause ambiguity.
   Resolve it using qualification: obj.A::display();

5. Base constructors run in the order listed in the inheritance
   declaration, then the derived constructor runs.
   Destructors run in reverse order.
*/