#include <iostream>
using namespace std;

int main() {


// If - Else
    // if (condition) {
    //   // block of code to be executed if the condition is true
    // } else {
    //   // block of code to be executed if the condition is false
    // }

// C++ Short Hand If Else
    // Syntax
    // variable = (condition) ? expressionTrue : expressionFalse;

    // Example1
        int time = 20;
        if (time < 18) {
        cout << "Good day.";
        } 
        else {
        cout << "Good evening.";
        }
    // Example2
        int t = 20;
        string result = (t < 18) ? "Good day." : "Good evening.";
        cout << result;

    return 0;
}