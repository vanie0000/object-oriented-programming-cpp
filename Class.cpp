#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int age, rollNumber;
        string grade;

    public:
        void setName(string s){
            if (s.size() == 0) {
                cout << "invalid name" << endl;
                return;
            }
            name = s;
        }
        void setAge(int a){
            if (a < 0 || a > 100){
                cout << "invalid age" << endl;
                return;
            }
            age = a;
        }
        void setRollNumber(int r){
            rollNumber = r;
        }
        void setGrade(string g){
            grade = g;
        }
        void getName(){
            cout << name << endl;
        }
        void getAge()
        {
            cout << age << endl;
        }
        int getRollNumber()
        {
            return rollNumber;
        }
        string getGrade(int pin)
        {
            if (pin == 123) {
                return grade;
            } 
            return "";
        }
};

int
main()
{
    Student S1;
    S1.setName("Shraavani");
    S1.setAge(22);
    S1.setRollNumber(23);
    S1.setGrade("B");
    S1.getName();
    S1.getAge();
    cout << S1.getRollNumber() << endl;
    cout << S1.getGrade(123) << endl;
}