// SHALLOW COPY EXAMPLE/UNDERSTANDING
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
        Student(Student &obj){
            this->name = obj.name;
            this->cgpaPtr = obj.cgpaPtr;
        }
        void getInfo(){
            cout << "name :" << name << endl;
            cout << "cgpa :" << *cgpaPtr <<endl;
    }
    };

int main() {

    Student s1("Sumanshu Jindal", 9.8);
    Student s2(s1); // Jatin Jindal suppose~
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    return 0;
}
// This code also shows the 'problem' that comes in shallow copy constructor.
// Isme agar hum 'default' constructor bhi use krenge to bhi same issue aayega.

// To solve this issue we use deep copy.