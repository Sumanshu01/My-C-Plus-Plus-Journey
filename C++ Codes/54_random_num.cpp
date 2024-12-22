// C++ How To Generate Random Numbers
// Random Number
// You can use the rand() function, found in the <cstdlib> library, to generate a random number:

// Example
// cout << rand();
//............................................................................
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {  
  // Generate a random number between 0 and 100
  int randomNum = rand() % 101;
  
  cout << randomNum;
  return 0;
}
// Ye jo number generate krega wo hi same rahega
// like agar 41 generate krega to wo hi rhega