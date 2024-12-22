#include <iostream>
#include <string>
using namespace std;

class Teacher{
    public:
    // Parameterized Constructor
        Teacher(string n, string d, string s, double sal){
            name = n;
            dept = d;
            subject = s;
            salary  = sal;
        }
    // properties or attributes
    string name;
    string dept;
    string subject;
    double salary;
    // methods or member function
    void changedept(string newdept){
        dept = newdept;
    }
    void getInfo(){
        cout << name << endl;
        cout << subject << endl;
    }
};

int main() {
    Teacher t1("Sumanshu", "CSE", "OOPS with C++", 2500000);     
    t1.getInfo();
    return 0;
}
// ONE CLASS CAN HAVE MULTIPLE CONSTRUCTORS ALSO.