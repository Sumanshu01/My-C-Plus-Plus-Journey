#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        // cout << "Parent Constructor\n";
    }
};

class Student : public Person {
    //name,age,rollno
    public:
    int rollno;

    // Student(){
    //     cout << "Child Constructor.......\n";
    // }

void getInfo(){
    cout << name <<endl;
    cout << age << endl;
    cout << rollno << endl;
}
};

int main() {
   Student s1;
   s1.name = "Sumanshu";
   s1.age = 19;
   s1.rollno = 41;
   
   s1.getInfo();
    return 0;
}
// Firstly 'Parent class constructor' will call itself then 'child class constructor' will call
