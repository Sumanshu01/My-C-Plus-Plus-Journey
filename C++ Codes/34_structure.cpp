// To create a structure, use the struct keyword and declare each of its members inside curly braces.

// SYNTAX   
    // struct {             // Structure declaration
    // int myNum;         // Member (int variable)
    // string myString;   // Member (string variable)
    // } myStructure;       // Structure variable

// EXAMPLE
    #include <iostream>
    #include <string>
    using namespace std;
    int main() {
        
    struct {
        int myNum;
        string myString;
    } myStructure;
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
    return 0;
    }
