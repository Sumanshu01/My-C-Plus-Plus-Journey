#include <iostream>
#include <string.h>
using namespace std;

int main() {
   
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;

// 2nd Method
    string name;
    cout << "Type your full name: ";
    getline (cin, name);
    cout << "Your name is: " << name;

    return 0;
}