#include <iostream>
using namespace std;

int main() {

    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers) << "\n"; // output = 20 bytes
    // It is because the sizeof() operator returns the size of a type in bytes.
    // int type is usually 4 bytes

    int arrnum[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(arrnum) / sizeof(arrnum[0]);
    cout << getArrayLength; // output = 5

    return 0;
}