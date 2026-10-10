/*
===================
CONSTRUCTORS IN C++
===================

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



// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int acc_no;
//     int balance;

// public:
//     // Default Constructor
//     Customer() { // a function with no return type + name same as the class -> CONSTRUCTOR
//         cout<<"Constructor is called.";
//     }
//     // Parameterized Constructor
//     Customer(string a, int b, int c) {
//         name = a;
//         acc_no = b;
//         balance = c;
//     }
//     void display() {
//         cout<<name<<" "<<acc_no<<" "<<balance<<endl;
//     }
// };

// int main() {
//     Customer a1("Smriti", 1101, 1000);
//     a1.display();
//     return 0;
// }


// In case of parameterized constructor, the following thing will cause an error
// Customer(string name, int acc_no, int balance) {
//     name = name;
//     acc_no = acc_no;
//     balance = balance;
// }

// THEREFORE, "this" keyword is used



// WRITING SOME INFO IN THE CONSTRUCTOR DEFINITION ONLY
// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int acc_no;
//     int balance;
// public:
//     // Default Constructor
//     Customer() {
//         this->name = "Smriti";
//         this->acc_no = 1101;
//         this->balance = 1000;
//     }
//     // Parameterized Constructor
//     // Customer(string a, int b, int c) {
//     //     this->name = a;
//     //     this->acc_no = b;
//     //     this->balance = c;
//     // }
//     // Inline Constructor
//     inline Customer(string a, int b, int c): name(a), acc_no(b), balance(c){
        
//     }
//     // we can only keep one consturctor with the same structure of the parameters.
//     Customer(string a, int b) {
//         this->name = a;
//         this->acc_no = b;
//     }
//     // Copy Constructor
//     Customer(Customer &a) {
//         this->name = a.name;
//         this->acc_no = a.acc_no;
//         this->balance = a.balance;
//     }
//     void display() {
//         cout<<name<<" "<<acc_no<<" "<<balance<<endl;
//     }
// };

// int main() {
//     Customer a1;
//     Customer a2("Smriti", 1100, 1000);
//     Customer a3("Smriti", 1111);
//     Customer a4(a1); // Copy constructor is called here, it is present by default just like the "default constructor".
//     // we can also write our own copy constructor if we want to do some specific things when the copy constructor is called.
//     a1.display();
//     a2.display();
//     a3.display();
//     a4.display();
//     return 0;
// }


/*
==========================================
CONSTRUCTOR OVERLOADING — IMPORTANT POINTS
==========================================

1. A class can have multiple constructors with DIFFERENT parameter lists
   (different number, types, or order of parameter types).

2. All constructors have the SAME name as the class and NO return type.

3. The compiler selects a matching constructor based on the arguments:
   Customer a1;                      // Default constructor
   Customer a2("Smriti", 1100, 1000);  // Parameterized constructor

4. Changing only parameter NAMES does not create a new overload:
   Customer(int a);
   Customer(int b);  // Same signature, NOT a different overload

5. If you declare a parameterized constructor, the compiler does not
   automatically provide a default constructor. Define one if needed.

6. Constructors must be public to create objects directly from main().

7. Avoid overloads or default arguments that make a call ambiguous.
   The compiler must be able to select one best matching constructor.

8. Each constructor should initialize all necessary data members.
*/



/*
==================
DESTRUCTORS IN C++
==================

1. A destructor runs automatically when an object's lifetime ends.
   It is used to release resources owned by the object.

2. Its name is the class name preceded by '~':
   ~Customer() {
       cout << "Destructor called";
   }

3. It has NO return type, not even void, and takes NO arguments.

4. A class normally has one destructor. It cannot be overloaded.

5. It is usually declared public.

6. If you do not declare a destructor, the compiler provides one.

7. Local objects are destroyed when their scope ends, in reverse
   order of construction.

8. For an object created using new, delete calls its destructor
   and releases its memory. Use delete[] for arrays created with new[].

9. Members such as string clean themselves up automatically.
   Raw pointers do NOT automatically delete the objects they point to.

10. A base class needs a virtual destructor if derived objects will
    be deleted through a pointer to that base class.
*/


// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int *balance = nullptr; // dynamically allocated memory is used to store the balance of the customer
// public:
//     Customer(string name, int bal) {
//         cout<<"Constructor called."<<endl;
//         this->name = name;
//         balance = new int;
//         *balance = bal;
//     }
//     Customer(string name) {
//         this->name = name;
//         cout<<"Constructor called."<<name<<endl;
//     }
//     ~Customer() {
//         cout<<"Destructor called."<<name<<endl;
//         delete balance; // all the memory locations which are allocated dynamically are deleted via destructor
//     }
// };

// int main() {
//     Customer a1("Smriti", 1000);
//     Customer a2("A"), a3("B"), a4("C");
//     return 0;
// }

// For local objects in the same scope, destructors run in the reverse order of construction
// —like a stack: last in, first out (LIFO).
// Construction: a1 → a2 → a3 → a4
// Destruction:  a4 → a3 → a2 → a1