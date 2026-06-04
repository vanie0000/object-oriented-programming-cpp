#include <iostream>
using namespace std;

class Customer {
    string name;
    int accountNumber;
    int balance;
    //int* roi;

    public:
    //default constructor
    Customer(){
        name = "Shraavani";
        accountNumber = 5;
        balance = 100;
        //roi = new int[100];
    }

    //parametrized constructor
    Customer(string name, int accountNumber, int balance){
        this -> name = name;
        this -> accountNumber = accountNumber;
        this -> balance = balance;
    }

    //constructor overloading
    Customer(string a, int b){
        name = a;
        accountNumber = b;
        balance = 50;
    }

    //inline constructor
    //inline Customer(string a, int b, int c): name(a), accountNumber(b), balance(c){

    //}

    void display(){
        cout << name << accountNumber << balance << endl;
    }

    //copy constructor
    Customer(Customer &B){
        name = B.name;
        accountNumber = B.accountNumber;
        balance = B.balance;
    }
};

int main(){
    Customer A1;
    Customer A2("Shraavani", 23, 500);
    Customer A3("Shraavani", 55);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    Customer A5;
    A5 = A3;
    A5.display();
}