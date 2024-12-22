// Create a variable of type string and assign it a value:
// string greeting = "Hello";

#include <iostream>
#include <string>
using namespace std;

int main() {

    string greeting = "Simple String\n";
    cout << greeting;

// String Concatenation
    string firstName = "Concatenation";
    string middleName = "of";
    string lastName = "Strings";
    string fullName = firstName +" " + middleName+" " + lastName;
    cout << fullName << "\n";
// Append
    string first = "Appending ";
    string last = "Strings";
    string appended = first.append(last);
    cout << appended;

    return 0;
}