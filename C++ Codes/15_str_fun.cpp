#include <iostream>
#include <string.h>
using namespace std;

int main() {
   
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string(by txt.length) is: " << txt.length() << "\n";
    cout << "The length of the txt string(by txt.size) is: " << txt.size() << "\n";

// Access Strings
string myString = "Hello";
cout << myString[1]; // Outputs e

string myString = "Hello";
cout << myString[myString.length() - 1]; // Outputs o

string myString = "Hello";
myString[0] = 'J';
cout << myString; // Outputs Jello instead of Hello

// The at() function
string myString = "Hello";
cout << myString; // Outputs Hello

cout << myString.at(0);  // First character
cout << myString.at(1);  // Second character
cout << myString.at(myString.length() - 1);  // Last character

myString.at(0) = 'J';
cout << myString;  // Outputs Jello
    return 0;
}