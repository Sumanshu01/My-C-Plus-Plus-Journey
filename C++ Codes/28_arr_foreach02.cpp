#include <iostream>
using namespace std;

int main() {
   
    // Create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    // Loop through strings
    for (string car : cars) { //In this line after string where 'car' is written and same word 'car' is written it is changable it is not fixed..we can change it
    cout << car << "\n";
    }

    return 0;
}