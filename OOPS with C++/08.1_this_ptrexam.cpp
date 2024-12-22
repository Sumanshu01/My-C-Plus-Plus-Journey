#include <iostream>

class Box {
private:
    int length;

public:
    // Constructor
    Box(int length) {
        this->length = length; // 'this' is used to refer to the class member
    }

    void displayLength() {
        std::cout << "Length: " << this->length << std::endl; // Using 'this' is optional here
    }
};

int main() {
    Box box(10);
    box.displayLength(); // Output: Length: 10
    return 0;
}
