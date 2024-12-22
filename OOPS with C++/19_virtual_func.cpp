// VIRTUAL FUNCTIONS (RUNTIME POLYMORPHISM)
#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
    void getInfo(){
        cout<<"Parent Class"<<endl;
    }
    virtual void hello(){
        cout<<"Hello from Parent class"<<endl;
    }
};

class Child : public Parent {
    public:
    void getInfo(){
    cout<<"Child Class"<<endl;
    }
    void hello(){
        cout<<"Hello from Child class"<<endl;
    }
};
int main() {
    Child c1;
    c1.hello();
    return 0;
}
