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