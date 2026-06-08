#include <iostream>
using namespace std;

class Customer {
    string name;
    int accNumber, balance;

    public:
    static int total_customer;
    Customer (string name, int accNumber, int balance){
        this -> name = name;
        this -> accNumber = accNumber;
        this -> balance = balance;
        total_customer++;
    }

    void display(){
        cout << name << " " << accNumber << " " << balance << " " << total_customer;
    }

    void displayTotal(){
        cout << total_customer << endl;
    }
};

int Customer::total_customer = 0;

int main(){
    Customer A1("Shraavani", 1, 1000);
    Customer A2("Sukirti", 2, 1020);
    Customer::total_customer = 5;
    A1.displayTotal();
}