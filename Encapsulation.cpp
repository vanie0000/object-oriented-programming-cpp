#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accNumber, balance;

public:
    Customer(string name, int accNumber, int balance)
    {
        this->name = name;
        this->accNumber = accNumber;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else cout << "invalid deposit" << endl;
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
        } else {
            cout << "invalid withdrawal" << endl;
        }
    }

    void display(){
        cout << name << " " << accNumber << " " << balance << endl;
    }

};


int main()
{
    Customer A1("Shraavani", 1, 1000);
    Customer A2("Sukirti", 2, 1020);
    Customer A3("Daksh", 3, 500);
    A1.deposit(-100);
    A1.display();
}