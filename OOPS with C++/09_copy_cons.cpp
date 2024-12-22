// COPY CONSTRUCTOR
// SPECIAL CONSTRUCTOR (DEFAULT) USED TO COPY PROPERTIES OF ONE OBJ INTO ANOTHER.
// WE CAN MAKE OUR OWN COPY CONSTRUCTOR TOO.
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
    // t1.getInfo();

    Teacher t2(t1);
    t2.getInfo();
    return 0;
}
