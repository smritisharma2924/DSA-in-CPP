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



// =========================
// COMPILE TIME POLYMORPHISM
// =========================


// FUNCTION OVERLOADING
// #include<iostream>
// using namespace std;

// class Area{
//     public:

//     int calculateArea(int r) { // circle
//         return 3.14*r*r;
//     }

//     int calculateArea(int l, int b) { // rectangle
//         return l*b;
//     }
// };

// int main() {
//     Area a1;
//     cout<<"Area of circle is: "<<a1.calculateArea(5)<<endl;
//     Area a2;
//     cout<<"Area of rectangle is: "<<a2.calculateArea(5, 10)<<endl;
//     return 0;
// }



// OPERATOR OVERLOADING
// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//     int real;
//     int imag;

//     public:
//     Complex(int real, int imag) {
//         this->real = real;
//         this->imag = imag;
//     }

//     Complex operator +(Complex &c) {
//         Complex ans(c.real, c.imag);
//         ans.real = real + c.real;
//         ans.imag = imag + c.imag;
//         return ans;
//     }

//     void display() {
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }
// };

// int main() {
//     Complex c1(3,2);
//     Complex c2(4,6);
//     Complex c3 = c1+c2;
//     c3.display();
//     return 0;
// }