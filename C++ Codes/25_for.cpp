// Syntax
// for (statement 1; statement 2; statement 3) {
//   // code block to be executed
// }

// Statement 1 is executed (one time) before the execution of the code block.

// Statement 2 defines the condition for executing the code block.

// Statement 3 is executed (every time) after the code block has been executed.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
    cout << i << "\n";
    }
    return 0;
}