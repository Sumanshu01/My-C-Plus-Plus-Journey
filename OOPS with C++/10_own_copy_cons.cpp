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
    // copy constructor
    Teacher(Teacher &orgobj){   // pass by reference
        cout << "I am custom copy constructor" << endl; // inplace of 'endl' we can write \n after constructor.
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
    }
    void getInfo(){
        cout << name << endl;
        cout << subject << endl;
    }
};
int main() {
        Teacher t1("Sumanshu", "CSE", "OOPS with C++", 2500000); 
        
        Teacher t2(t1);
        t2.getInfo();
    return 0;
}

/* THIS IS ALSO KNOWN AS SHALLOW COPY.
    IN THIS IN GENERAL NO ISSUE OCCURS BUT 
    ISSUE OCCURS WHEN WE HAVE TO DO DMA.
*/