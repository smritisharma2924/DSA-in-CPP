// EXCEPTION HANDLING
// an exception is an unexpected problem that arises during the execution of a program and our program terminates suddenly with errors/issues

// TRY:
// it represents a block of code that may through an exception placed inside the code block

// CATCH:
// it represents a block of code that is executed when a particular exception is thrown from the try block of the code

// THROW:
// an exception in c++ can be thrown using the throw keyword



#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance, acc_no;


    public:
    Customer(string name, int balance, int acc_no) {
        this->name = name;
        this->balance = balance;
        this->acc_no = acc_no;
    }

    // deposit
    void deposit(int amount) {
        if (amount>0) {
            balance += amount;
            cout<<amount<<"rs is credited successfully.\n";
        }
        else {
            throw "Deposit amount must be greater than 0.\n";
        }
    }

    // withdraw
    void withdraw(int amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout<<amount<<"rs is debited successfully.\n";
        }
        else if (amount == 0) {
            throw "Amount must be greater than 0.\n";
        }
        else {
            throw "Insufficient balance.\n";
        }
    }
};

int main() {
    Customer c1("Smriti", 5000, 1);
    try {
    c1.deposit(500);
    c1.withdraw(6000);
    }
    catch(const char *e) {
        cout<<"Exception occured: "<<e<<endl;
    }
    return 0;
}
