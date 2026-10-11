/*
STATIC DATA MEMBERS IN C++

1. A static data member belongs to the CLASS and is shared by all its objects.
   Each object does not get a separate copy.

2. Declare it inside the class using the 'static' keyword:
   static int count;

3. Usually, define and initialize it once outside the class:
   int Customer::count = 0;
   // Do not repeat 'static' here.

4. A public static member can be accessed using the class name:
   Customer::count;
   // No object is required.

5. Changing it through one object affects the shared value seen by all objects.

6. Access rules still apply:
   a private static member cannot be accessed directly from main().

7. Static data members are not included in sizeof(object).

8. Since C++17, you can define and initialize it inside the class:
   inline static int count = 0;
*/



// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int acc_no, balance;
//     static int total_customer; // it will be shared by all the objects of the class. It is not a part of any object. It is a part of the class itself.
//     public:
//     Customer(string name, int acc_no, int balance) {
//         this->name = name;
//         this->acc_no = acc_no;
//         this->balance = balance;
//         total_customer++;
//     }
//     void display_total() {
//         cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customer<<endl;
//     }
// };
// int Customer::total_customer = 0; // static data members are initialized outside the class. It is not a part of any object. It is a part of the class itself.

// int main() {
//     Customer a1("Smriti", 1, 1000);
//     a1.display_total();
//     Customer a2("Shruti", 2, 2000);
//     a1.display_total();
//     a2.display_total();
//     Customer a3("Siddhi", 3, 1500);
//     a1.display_total();
//     a2.display_total();
//     a3.display_total();
//     return 0;
// }





/*
STATIC MEMBER FUNCTIONS IN C++

1. A static member function belongs to the CLASS.
   Call it without creating an object:
   Customer::display_total();

2. Declare it inside the class using 'static':
   static void display_total() {
       cout << total_customer;
   }

3. It can directly access static data members and call other
   static member functions, including private ones of its class.

4. It cannot directly access non-static members.
   To access them, it needs a specific object.

5. It has NO 'this' pointer because it is not tied to an object.

6. It can also be called through an object:
   a1.display_total();
   // Using the class name makes its purpose clearer.

7. If defined outside the class, do not repeat 'static':
   void Customer::display_total() {
       cout << total_customer;
   }

8. Static member functions cannot be virtual or marked const.
*/