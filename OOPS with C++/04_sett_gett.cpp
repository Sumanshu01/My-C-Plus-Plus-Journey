#include <iostream>
#include <string>
using namespace std;

// Creating a class:
class Teacher{
    private:
    double salary;
    public:                 // By default everything is private in C++.
    // properties or attributes
    string name;
    string dept;
    string subject;
    // double salary; //  here instead of double we can use float also.

    // methods or member function
    void changedept(string newdept){
        dept = newdept;
    }

    // Setter Function
    void setSalary(double s){
        salary = s;
    }
    // Getter Function
    double getSalary(){
        return salary;
    }

};
// Class is created.
int main() {
    // creating an object:
    Teacher t1;         //CONSTRUCTOR CALL          
    // Object 't1' is created.
        t1.name = "Sumanshu";
        t1.subject = "C++";
        t1.dept = "Computer Science and Engineering";
     // t1.salary = 2500000; // now we cannot access to salary because we have made it private
        // firstly we have access to salary because we have made it public.

        // now if we want to print salary we need/create special functions called 'setter' & 'getter'.
    // TO ACCESS SALARY:
    t1.setSalary(250000);


    cout << t1.name <<"\n";
    cout << t1.getSalary();
    return 0;
}
