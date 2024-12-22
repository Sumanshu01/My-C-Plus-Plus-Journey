// RUN TIME POLYMORPHISM
// FUNCTION OVERRIDING

// 2 INHERITANCE AT ONCE
#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
    void getInfo(){
        cout<<"Parent Class"<<endl;
    }
};

class Child : public Parent {
    public:
    void getInfo(){
    cout<<"Child Class"<<endl;
    }
};
// Is case me child class ka func parent class ke func ko override kr raha ha.
int main() {
    Child c1;
    c1.getInfo(); 
    return 0;
}
