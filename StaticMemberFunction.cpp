#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accNumber, balance;
    static int totalCustomer;
    static int totalBalance;

public:
    Customer(string name, int accNumber, int balance)
    {
        this->name = name;
        this->accNumber = accNumber;
        this->balance = balance;
        totalCustomer++;
        totalBalance += balance;
    }

    static void accessStatic(){
        cout << totalCustomer << endl;
        cout << totalBalance << endl;
    }

    void deposit(int amount){
        if (amount > 0){
            balance += amount;
            totalBalance += amount;
        }
    }

    void withdraw(int amount){
        if (amount <= balance && amount > 0){
            balance -= amount;
            totalBalance -= amount;
        }
    }

    void display()
    {
        cout << name << " " << accNumber << " " << balance << " " << totalCustomer;
    }

    void displayTotal()
    {
        cout << totalCustomer << endl;
    }
};

int Customer::totalCustomer = 0;
int Customer::totalBalance = 0;

int main()
{
    Customer A1("Shraavani", 1, 1000);
    Customer A2("Sukirti", 2, 1020);
    Customer::accessStatic();
    A1.displayTotal();
}