// ABSTRACT CLASSES
#include <iostream>
#include <string>
using namespace std;

class Shape{
    virtual void draw() = 0; // Pure Virtual Function = Abstract Class;
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"Draw a Circle";
        }
};

int main() {
    Circle c1;
    c1.draw();

    return 0;
}
