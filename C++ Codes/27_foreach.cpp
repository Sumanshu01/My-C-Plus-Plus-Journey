// The foreach Loop
// Syntax
// for (type variableName : arrayName) {
//   // code block to be executed
// }

#include <iostream>
using namespace std;
int main() {

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
    }

    return 0;
}