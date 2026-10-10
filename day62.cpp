// Object Oriented programming
// it is an approach or a programming pattern where the programs are structured around object rather than function and logic.

// #include<iostream>
// using namespace std;

// class Student{
// public: // Access modifier is by default set to private. other types are: public, static and protected
//     string name;
//     int age, roll_no;
//     string grade; 
// };

// int main() {
//     Student S1;
//     S1.name = "Rohit";
//     S1.age = 10;
//     S1.roll_no = 1342;
//     S1.grade = "A-";

//     cout<<S1.name<<" "<<S1.age<<" "<<S1.roll_no<<" "<<S1.grade;
//     return 0;
// }



// HOW TO ACCESS IF THE MODIFIER IS SET TO PRIVATE?
// private access modifier is used for safety of our critical data
// we dont want imp data to be accessed and changed by anyone


// #include<iostream>
// using namespace std;

// // define a public function inside the class itself
// class Student{
//     string name;
//     int age, roll_no;
//     string grade;

//     // FUNCTION GETTER AND SETTER
//     // used for assigning values to the attributes
//     public:
//     void setName(string s) {
//         if (s.size() == 0) cout<<"invalid name.";
//         name = s;
//     }
//     void setAge(int n) {
//         if (age<0 || age>100) cout<<"invalid age.";
//         age = n;
//     }
//     void setRollno(int n) {
//         roll_no = n;
//     }
//     void setGrade(string s) {
//         grade = s;
//     }

//     // for extracting information
//     string getName() {
//         return name;
//     }
//     int getAge() {
//         return age;
//     }
//     int getRollno() {
//         return roll_no;
//     }
//     string getGrade(int pin) {
//         if (pin == 123) return grade;
//         cout<<"incorrect pin";
//         return "none";
//     }
// };

// int main() {
//     Student s1;
//     s1.setName("smriti");
//     s1.setAge(19);
//     s1.setRollno(3424);
//     s1.setGrade("A+");
//     cout<<s1.getAge();
//     cout<<s1.getGrade(123);
//     return 0;
// }




// OBJECT
// an entity that has a state and behavior
// anything that exists in physical world
// CLASS DOES NOT EXISTS IN THE PHYSICAL WORLD. IT IS ONLY A BLUEPRINT OF THE OBJECT

// class doesnt have any size.
// its object does occupies space



// #include<iostream>
// using namespace std;

// class a{
//     int b;
// };

// int main() {
//     a obj;
//     cout<<sizeof(obj)<<" ";
//     return 0;
// }
// the size is 4 bytes here(ofc because of integer)



// lets try to get the size of an empty class
// #include<iostream>
// using namespace std;

// class a{
    
// };

// int main() {
//     a obj;
//     cout<<sizeof(obj)<<" ";
//     return 0;
// }

// EVEN THOUGH THIS CLASS HAS NO MEMBERS, 
// obj IS A COMPLEETE OBJECT AND MUST OCCUPY SOME STORAGE
// SO IT HAS A DISTINCT ADDRESS.

// COMPILERS USUALLY ALLOCATE 1 BYTE AS
// """IT IS THE SMALLEST POSSIBLE SIZE IN C++"""



// but if we try to get the size of a class which has diff types of data fields. 
// its size is not what we expect it to be


// ex: for 2 int 
// #include<iostream>
// using namespace std;

// class a{
//     int b;
//     int c;
// };

// int main() {
//     a obj;
//     cout<<sizeof(obj)<<" ";
//     return 0;
// }
// 4+4 = 8 bytes


// ex: for 1 int and 1 char
// #include<iostream>
// using namespace std;

// class a{
//     int b;
//     char c;
// };

// int main() {
//     a obj;
//     cout<<sizeof(obj)<<" ";
//     return 0;
// }
// it gives us the answer as 8 but it should be 5 according to the normal summation
// 4+1 != 8???
// here comes the concept of padding




/*
PADDING IN C++
==============

1. Padding means extra unused bytes added by the compiler inside
   or at the end of a class/struct to satisfy alignment requirements.

2. Alignment means placing a member at a suitable memory address.
   For example, an int commonly requires an address divisible by 4.

3. Example (assuming char has size/alignment 1 and int has size/alignment 4):

   struct Example {
       char a;  // 1 byte
                // 3 padding bytes
       int b;   // 4 bytes
       char c;  // 1 byte
                // 3 trailing padding bytes
   };

   Member sizes total: 1 + 4 + 1 = 6 bytes
   sizeof(Example): typically 12 bytes

4. Internal padding is added BETWEEN members to align the next member.
   Trailing padding is added AFTER the last member so that elements
   in an array of these objects also satisfy alignment requirements.

5. Member order can affect the amount of padding:

   struct Better {
       int b;   // 4 bytes
       char a;  // 1 byte
       char c;  // 1 byte
                // 2 trailing padding bytes
   };

   sizeof(Better): typically 8 bytes

   Grouping members with stricter alignment first often reduces padding.

6. For ordinary structs like these, the object's alignment is usually
   the strictest alignment required by any member. Its size is a
   multiple of that alignment.

7. Use sizeof(Type) to check size and alignof(Type) to check alignment.

8. Exact sizes, alignment, and padding depend on the compiler and
   target platform. The numbers above are common, not universal.

9. An empty class's nonzero size is a separate object-identity rule;
   it is not padding added between data members.
*/



// DYNAMIC MEMORY ALLOCATION ====================================================

// #include<iostream>
// using namespace std;

// class Student{
// public: 
//     string name;
//     int age, roll_no;
//     string grade; 
// };

// int main() {
//     Student *s = new Student;
//     (*s).name = "Smriti";
//     (*s).age = 10;
//     (*s).roll_no = 3423;
//     (*s).grade = "A+";

//     cout<<s->name<<" ";
//     cout<<s->age<<" ";
//     cout<<s->roll_no<<" ";
//     cout<<s->grade<<endl;
//     return 0;
// }