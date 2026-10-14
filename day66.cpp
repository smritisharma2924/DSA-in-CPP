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


// #include<iostream>
// using namespace std;

// class Engineer{
//     public:
//     string specialization;

//     Engineer() {
//         cout<<"Hello engineer\n";
//     }

//     ~Engineer() {
//         cout<<"Bye engineer\n";
//     }

//     void work() {
//         cout<<"I have specialization in "<<specialization<<endl;
//     }
// };

// class Youtuber{
//     public:
//     int subscriber;

//     Youtuber() {
//         cout<<"Hello youtuber\n";
//     }

//     ~Youtuber() {
//         cout<<"Bye youtuber\n";
//     }

//     void content_creator() {
//         cout<<"I have "<<subscriber<<" subscribers on my channel"<<endl;
//     }
// };

// class CodeTeacher: public Engineer, public Youtuber{
//     public:
//     string name;

//     CodeTeacher(string name, string specialization, int subscriber) {
//         cout<<"Hello code teacher\n";
//         this->name = name;
//         this->specialization = specialization;
//         this->subscriber = subscriber;
//     }

//     ~CodeTeacher() {
//         cout<<"Bye code teacher\n";
//     }

//     void showcase() {
//         cout<<"My name is "<<name<<endl;
//         work();
//         content_creator();
//     }
// };

// int main() {
//     CodeTeacher c1("Smriti", "AIML", 5000);
//     c1.showcase();
//     return 0;
// }



// ========================
// HIERARCHICAL INHERITANCE
// ========================

/*
HIERARCHICAL INHERITANCE

1. Two or more derived classes inherit from the same base class.
   Example: A -> B and A -> C.

2. Syntax:
   class B : public A {};
   class C : public A {};

3. Each derived class reuses accessible base members and can
   add its own data members and functions.

4. Sibling classes do not inherit each other's members.
   B cannot directly access C's members through inheritance.

5. For each derived object, the base constructor runs first,
   then the derived constructor. Destructors run in reverse order.
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

// class Teacher: public Human{
//     int salary;

//     public:
//     Teacher(string name, int age, int salary) {
//         cout<<"Hello teacher\n";
//         this->name = name;
//         this->age = age;
//         this->salary = salary;
//     }
//     ~Teacher() {
//         cout<<"Goodbye teacher\n";
//     }
//     void display() {
//         cout<<"My name is "<<name<<endl;
//         cout<<"My age is "<<age<<endl;
//         cout<<"My salary is "<<salary<<endl;
//     }
// };

// int main() {
//     Student a1("Smriti", 19, 1, 99); //parent class's constructor is called first, then derived class's constructor is called. the destructor is called in reverse order.
//     a1.work();
//     Teacher t1("John", 30, 50000);
//     t1.display();
// }



// ==================
// HYBRID INHERITANCE
// ==================

/*
HYBRID INHERITANCE

1. Hybrid inheritance combines two or more inheritance types
   in the same class hierarchy.

2. Example: diamond inheritance combines hierarchical
   and multiple inheritance:
       A
      / \
     B   C
      \ /
       D

3. Syntax:
   class B : public A {};
   class C : public A {};
   class D : public B, public C {};

4. In this diamond, D normally contains TWO A base subobjects,
   which can cause ambiguity when accessing A's members.

5. Use virtual inheritance on BOTH paths to share ONE A:
   class B : virtual public A {};
   class C : virtual public A {};
   // The most-derived class D initializes the virtual base A.
*/


// #include<iostream>
// using namespace std;

// class Student{

//     public:
//     Student() {
//         cout<<"Hello student\n";
//     }
//     Student(int roll_no, int  section) {
//         cout<<"I am student\n";
//     }
//     ~Student() {
//         cout<<"Goodbye student\n";
//     }
// };

// class Male{
    
//     public:
//     Male() {
//         cout<<"Hello male\n";
//     }
//     Male(int age) {
//         cout<<"I am male\n";
//     }
//     ~Male() {
//         cout<<"Goodbye male\n";
//     }
// };

// class Female{
    
//     public:
//     Female() {
//         cout<<"Hello female\n";
//     }
//     Female(int age) {
//         cout<<"I am female\n";
//     }
//     ~Female() {
//         cout<<"Goodbye female\n";
//     }
// };

// class Boy: public Student, public Male{

//     public:
//     Boy() {
//         cout<<"Hello boy\n";
//     }
//     Boy(int roll_no, int section, int age) {
//         cout<<"I am boy\n";
//     }
//     ~Boy() {
//         cout<<"Goodbye boy\n";
//     }
// };

// class Girl: public Student, public Female{

//     public:
//     Girl() {
//         cout<<"Hello girl\n";
//     }
//     Girl(int roll_no, int section, int age) {
//         cout<<"I am girl\n";
//     }
//     ~Girl() {
//         cout<<"Goodbye girl\n";
//     }
// };

// int main() {
//     Girl g1;
//     Boy b1;
// }



// =====================
// MULTIPATH INHERITANCE
// =====================

/*
MULTIPATH INHERITANCE

1. A derived class inherits from the same base class through
   more than one path. Example: A -> B -> D and A -> C -> D.

2. Diamond structure:
       A
      / \
     B   C
      \ /
       D

3. Without virtual inheritance, D contains TWO A base subobjects.
   Accessing A's non-static members can therefore be ambiguous.
   This is called the DIAMOND PROBLEM.

4. Use virtual inheritance on BOTH paths to share ONE A:
   class B : virtual public A {};
   class C : virtual public A {};
   class D : public B, public C {};

5. The most-derived class (D) initializes the virtual base (A).
   A is constructed before B and C and destroyed after them.
*/


// #include<iostream>
// using namespace std;

// class Human{
//     public:
//     string name;

//     void display() {
//         cout<<"My name is "<<name<<endl;
//     }
// };

// class Engineer: public virtual Human{ //added to remove the ambiguity error. now the name variable is shared between Engineer and Youtuber classes. so now we can access the name variable from CodeTeacher class without any ambiguity error.
//     public:
//     string specialization;

//     Engineer() {
//         cout<<"Hello engineer\n";
//     }

//     ~Engineer() {
//         cout<<"Bye engineer\n";
//     }

//     void work() {
//         cout<<"I have specialization in "<<specialization<<endl;
//     }
// };

// class Youtuber: public virtual Human{ //added to remove the ambiguity error. now the name variable is shared between Engineer and Youtuber classes. so now we can access the name variable from CodeTeacher class without any ambiguity error.
//     public:
//     int subscriber;

//     Youtuber() {
//         cout<<"Hello youtuber\n";
//     }

//     ~Youtuber() {
//         cout<<"Bye youtuber\n";
//     }

//     void content_creator() {
//         cout<<"I have "<<subscriber<<" subscribers on my channel"<<endl;
//     }
// };

// class CodeTeacher: public Engineer, public Youtuber{
//     public:
//     int salary;

//     CodeTeacher(string name, string specialization, int subscriber, int salary) {
//         cout<<"Hello code teacher\n";
//         this->name = name; // this->name is causing an ambiguity cause it has inherited from Engineer and Youtuber both have which have their own name. thats why the confusing is arising here
//         this->specialization = specialization;
//         this->subscriber = subscriber;
//         this->salary = salary;
//     }

//     ~CodeTeacher() {
//         cout<<"Bye code teacher\n";
//     }
// };

// int main() {
//     CodeTeacher c1("Smriti", "AIML", 5000, 100000);
//     c1.display(); // this will cause an ambiguity error because display() is inherited from both Engineer and Youtuber classes. to resolve this we have to use scope resolution operator like c1.Engineer::display() or c1.Youtuber::display()
//     return 0;
// }