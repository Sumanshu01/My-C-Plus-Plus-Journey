// FOR MULTI PARAMETERS ALL TYPES OF PARAMETERS SHOULD HAVE DIFFERENT PARAMETERS.

#include <iostream>
#include <string>
using namespace std;

class Teacher{
    public:

    // // non parameterized constructor:
    // Teacher(){
    //     dept = "Computer Science";
    // }

    // // Parameterized Constructor
    //     Teacher(string n, string d, string s, double sal){
    //         name = n;
    //         dept = d;
    //         subject = s;
    //         salary  = sal;
    //     }

    // HERE NON PARA CONS HAS 1 PARAMETER AND PARA CONS HAS 4 PARAMETERS

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

    return 0;
}
// ONE CLASS CAN HAVE MULTIPLE CONSTRUCTORS ALSO.
// THIS TYPE/PHENOMENON IS CALLED AS 'CONSTRUCTOR OVERLOADING'
// "CONSTRUCTOR OVERLOADING IS ALSO CALLED POLYMORPHISM".