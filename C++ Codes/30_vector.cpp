#include <iostream>
#include <vector> // Including the vector library
using namespace std;
int main() {
  // A vector with 3 elements
  vector<string> cars = {"Volvo", "BMW", "Ford"};
  
  // Adding another element to the vector
  cars.push_back("Tesla"); //Single Car added
//   cars.push_back("Car Name"); //For Multiple Cars Addition
  
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
