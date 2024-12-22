// TILL NOW WE ARE STUDYING SINGULAR INHERITANCE.
// NOW WE WILL STUDY MULTI LEVEL INHERITANCE
#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;

};

class Student : public Person {
    public:
    int rollno;

};

class gradstudent : public Student{
    public:
    string researcharea;
};
int main() {
    gradstudent s1;
    s1.name = "Sumanshu Jindal";
    s1.researcharea = "Quantum Physics";

    cout << s1.name<<endl;
    cout<<s1.researcharea<<endl;
    return 0;
}