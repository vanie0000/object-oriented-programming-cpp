#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age, rollNumber;
    string grade;
};

int main()
{
    Student *S = new Student;
    (*S).name = "Shraavani";
    (*S).age = 22;
    (*S).rollNumber = 23;
    (*S).grade = "B";

    cout << S -> name << endl;
    cout << S -> age << endl;
    cout << S -> rollNumber << endl;
    cout << S -> grade << endl;
}