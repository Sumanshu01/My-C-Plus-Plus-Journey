// Object ki properties ki baat krte hai.
// 'this' is a special pointer in C++ that point to current object

// this->prop is same as *(this).prop :-> ye dono same kaam krenge

#include <iostream>
#include <string>
using namespace std;

class Teacher{
    public:
       string name;
       string dept;
       string subject;
    // non parameterized constructor:
    Teacher(){
        dept = "Computer Science";
    }
    // Parameterized Constructor
        Teacher(string name, string dept, string subject, double salary){
          this->name = name; // isse hame pta lag jayega ki ye this wali object ki property hai
          this->dept = dept;
          this->subject = subject;
          this->salary  = salary;
        }

    // properties or attributes
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

    return 0;
}