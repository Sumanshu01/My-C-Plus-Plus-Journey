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
    }

    // DESTRUCTION
    ~Student(){
        cout <<"I am Destructor\n";
        delete cgpaPtr; // If not done with delete it can lead to issues like Memory Leak.
    }

        void getInfo(){
            cout << "name :" << name << endl;
            cout << "cgpa :" << *cgpaPtr <<endl;
    }
    };

int main() {

    Student s1("Sumanshu Jindal", 9.8);
    s1.getInfo();
    return 0;
}