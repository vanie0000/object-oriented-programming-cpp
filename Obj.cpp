#include <iostream>
using namespace std;

class a{
    char c;
    char d;
    int b;
    double e;
};

int main(){
    a obj;
    cout << sizeof(obj) << endl;
}