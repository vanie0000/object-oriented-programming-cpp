#include <iostream>
using namespace std;

class Customer{
    string name;
    int* data;

    public:

    //default constructor 
    Customer(){
        cout << "constructor is " << name << endl;
    }

    Customer(string name){
        this -> name = name;
        cout << "constructor is " << name << endl;
    }
    
    /*
    Customer(){
        name = "Shraavani";
        data = new int;
        * data = 22;
        cout << "constructor is called" << "\n";
    } */

    /*~Customer(){
        delete data;
        cout << "destructor is called" << "\n";
    }*/

    ~Customer(){
        cout << "destructor is " << name << endl;
    }
};

int main(){
    Customer A1("1"), A2("2"), A3("3");
    Customer *A4 = new Customer;
    delete A4;
}