#include <iostream>
using namespace std;

class Customer {
    string name;
    int accNumber, balance;
    static int total_customer;

    public:
    Customer (string name, int accNumber, int balance){
        this -> name = name;
        this -> accNumber = accNumber;
        this -> balance = balance;
        total_customer++;
    }

    void display(){
        cout << name << " " << accNumber << " " << balance << " " << total_customer;
    }
};

int Customer::total_customer = 0;

int main(){
    Customer A1("Shraavani", 1, 1000);
    Customer A2("Sukirti", 2, 1020);
    A1.display();
    A2.display();
}