// C++ Functions
    // Syntax
    // void myFunction() {
    //   // code to be executed
    // }

// EX1
    #include <iostream>
    using namespace std;

    void myFunction() {
    cout << "I just got executed!";
    }

    int main() {
    myFunction();
    return 0;
    }

// EX2
    #include <iostream>
    using namespace std;

    // Function declaration
    void myFunction();

    // The main method
    int main() {
    myFunction();  // call the function
    return 0;
    }

    // Function definition
    void myFunction() {
    cout << "I just got executed!";
    }
