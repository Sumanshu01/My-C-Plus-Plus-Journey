#include <iostream>
#include <string>
using namespace std;

// Creating a class:
class Teacher{
    public:                 // By default everything is private in C++.
    // properties or attributes
    string name;
    string dept;
    string subject;
    double salary; //  here instead of double we can use float also.

    // methods or member function
    void changedept(string newdept){
        dept = newdept;
    }

};
// Class is created.
int main() {
    // creating an object:
    Teacher t1;                 
    // Object 't1' is created.
        t1.name = "Sumanshu";
        t1.subject = "C++";
        t1.dept = "Computer Science and Engineering";
        t1.salary = 2500000;
    
    cout << t1.name;

    return 0;
}