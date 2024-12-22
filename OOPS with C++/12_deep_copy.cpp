// DEEP COPY EXAMPLE/UNDERSTANDING
#include <iostream>
#include <string>
using namespace std;

    class Student {
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa) {
            this->name = name; 
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
            // this->cgpa = cgpa;   
    }
        Student(Student &obj){  // heap
            this->name = obj.name;
            cgpaPtr = new double;
            *cgpaPtr = *obj.cgpaPtr;
            // this->cgpaPtr = obj.cgpaPtr;
        }
        void getInfo(){
            cout << "name :" << name << endl;
            cout << "cgpa :" << *cgpaPtr <<endl;
    }
    };

int main() {

    Student s1("Sumanshu Jindal", 9.8);
    Student s2(s1); 
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;

    s2.name = "Jatin Jindal";
    s2.getInfo();
    return 0;
}