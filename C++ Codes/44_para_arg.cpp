// C++ Function Parameters
// Parameters and Arguments

// Syntax
//     void functionName(parameter1, parameter2, parameter3) {
//     // code to be executed
//     }

#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}
int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
//The following example has a function that takes a string called fname as parameter. 
// So, from the example above: fname is a parameter, while Liam, Jenny and Anja are arguments.
