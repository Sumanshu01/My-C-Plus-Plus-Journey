// 2 INHERITANCE AT ONCE
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

class gradstudent : public Student, public Person { // Similarly we can add more classes also.

};

int main() {

    return 0;
}