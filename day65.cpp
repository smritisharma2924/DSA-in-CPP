/*
INHERITANCE IN C++

1. Inheritance allows a derived (child) class to build upon
   a base (parent) class, reusing and extending its features.

2. Syntax:
   class Child : public Parent {
       // Additional members
   };

3. The derived class cannot directly access PRIVATE members
   of the base class. It can access them through accessible
   base-class functions.

4. With PUBLIC inheritance:
   - Base public members remain public.
   - Base protected members remain protected.

5. PROTECTED members can be accessed inside the class and
   its derived classes, but not directly from main().

6. Types: single, multilevel, multiple, hierarchical, and hybrid.

7. The base constructor runs BEFORE the derived constructor.
   Destructors run in the reverse order.

8. Public inheritance represents an "IS-A" relationship:
   A Dog IS AN Animal.

9. Inheritance supports code reuse and polymorphism.
*/



/*
ACCESS MODIFIERS IN C++

Modifier    Same class    Derived class    Outside class
---------------------------------------------------------
public         YES            YES              YES
protected      YES            YES              NO
private        YES            NO               NO

NOTE:
- Members are private by default in a class.
- Members are public by default in a struct.
- Inheritance mode can further restrict inherited access.
- A derived class accesses protected non-static members through
  its own object (or an object of a further derived class).
*/



// Accessing within the same class using access modifiers
// #include<iostream>
// using namespace std;

// class Human{
//     private:
//     int a;

//     protected:
//     int b;

//     public:
//     int c;

//     public:
//     void func() {
//         a = 10; // OK: 'a' is private, accessible within the class
//         b = 20; // OK: 'b' is protected, accessible within the class
//         c = 30; // OK: 'c' is public, accessible within the class
//     }
// };

// int main() {
//     Human h;
//     h.func(); // OK: public function can be called from main()
//     return 0;
// }



// Accessing outside the class using access modifiers
// #include<iostream>
// using namespace std;

// class Human{
//     private:
//     int a;

//     protected:
//     int b;

//     public:
//     int c;
// };

// int main() {
//     Human h;
//     // h.a = 10; // Error: 'a' is private
//     // h.b = 20; // Error: 'b' is protected
//     h.c = 30; // OK: 'c' is public
//     return 0;
// }



// =============
// DERIVED CLASS
// =============


/*
MEMBER ACCESS UNDER DIFFERENT INHERITANCE MODES

Parent member    | Public          Protected       Private
access modifier  | inheritance     inheritance     inheritance
-------------------------------------------------------------
public            public          protected       private
protected         protected       protected       private
private           inaccessible    inaccessible    inaccessible
*/

// #include<iostream>
// using namespace std;

// class Human{
//     // these are private by default
//     string name;
//     int age, weight;
// };

// class Student: public Human{ // public inheritance
//     int roll_no, fees;
// };

// int main() {
//     Student a;
//     // a.name = "Smriti"; // Error: 'name' is private in 'Human'

//     return 0;
// }
