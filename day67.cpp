/*
POLYMORPHISM

1. Polymorphism means "many forms": the same interface can
   perform different actions depending on the arguments or object.

2. COMPILE-TIME POLYMORPHISM:
   Resolved by the compiler.
   Examples: function overloading and operator overloading.

3. RUNTIME POLYMORPHISM:
   Achieved through virtual functions overridden in derived classes.
   The implementation is selected at runtime based on the object.

4. Use a BASE-class pointer or reference to call a virtual function:
   Base* ptr = &derivedObject;
   ptr->display();  // Calls the derived override, if provided.

5. Use 'override' in the derived class to check correct overriding:
   void display() override;
   A base class should have a virtual destructor if derived objects
   will be deleted through base-class pointers.
*/