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
