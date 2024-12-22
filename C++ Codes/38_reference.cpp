#include <iostream>
#include <string>
using namespace std;
int main() {
  string food = "Pizza";
  string & meal = food;
  string &juice = food;

  cout << food << "\n"; // Outputs Pizza
  cout << meal << "\n"; // Outputs Pizza
  cout << juice << "\n"; // Outputs Pizza
  return 0;
}