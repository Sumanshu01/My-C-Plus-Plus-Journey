// Local Scope
// A variable created inside a function belongs to the local scope of that function, and can only be used inside that function:
    // void myFunction() {
    //   // Local variable that belongs to myFunction
    //   int x = 5;
    //   // Print the variable x
    //   cout << x;
    // }
    // int main() {
    //   myFunction();
    //   return 0;
    // }

// Global Scope
// A variable created outside of a function, is called a global variable and belongs to the global scope.

#include <iostream>
using namespace std;
// Global variable x
int x = 5;
void myFunction() {
  // We can use x here
  cout << x << "\n";
}
int main() {
  myFunction(); 
  // We can also use x here
  cout << x;
  return 0;
}

// Naming Variables
// The function will print the local x, and then the code will print the global x:

    // // Global variable x
    // int x = 5;

    // void myFunction() {
    // // Local variable with the same name as the global variable (x)
    // int x = 22;
    // cout << x << "\n"; // Refers to the local variable x
    // }

    // int main() {
    // myFunction();

    // cout << x; // Refers to the global variable x
    // return 0;
    // }
