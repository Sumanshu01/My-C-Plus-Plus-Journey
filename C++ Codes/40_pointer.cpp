// string food = "Pizza"; // A food variable of type string

// cout << food;  // Outputs the value of food (Pizza)
// cout << &food; // Outputs the memory address of food (0x6dfed4)

// EXAMPLE
    #include <iostream>
    #include <string>
    using namespace std;
    int main() {
    string food = "Pizza";  // A string variable
    string* ptr = &food;  // A pointer variable that stores the address of food
    // string *ptr = &food; = IT IS ALSO VALID
    
    // Output the value of food
    cout << food << "\n";
    // Output the memory address of food
    cout << &food << "\n";
    // Output the memory address of food with the pointer
    cout << ptr << "\n";
    return 0;
    }
