/*
Bitwise AND (a & b)
Bitwise OR (a | b)
Bitwise XOR (a ^ b)
Bitwise NOT (~a)
Left Shift (a << 1)
Right Shift (a >> 1)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3; // Binary: a = 0101, b = 0011

    // Bitwise AND
    cout << "Bitwise AND (a & b): " << (a & b) << endl; // 0101 & 0011 = 0001 (1)

    // Bitwise OR
    cout << "Bitwise OR (a | b): " << (a | b) << endl;  // 0101 | 0011 = 0111 (7)

    // Bitwise XOR
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl; // 0101 ^ 0011 = 0110 (6)

    // Bitwise NOT
    cout << "Bitwise NOT (~a): " << (~a) << endl;       // ~0101 = 1010 (two's complement, -6)

    // Left Shift
    cout << "Left Shift (a << 1): " << (a << 1) << endl; // 0101 << 1 = 1010 (10)

    // Right Shift
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl; // 0101 >> 1 = 0010 (2)

    return 0;
}
