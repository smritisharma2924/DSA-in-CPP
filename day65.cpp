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