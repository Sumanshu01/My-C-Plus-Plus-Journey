#include <iostream>
using namespace std;
int main() {

    // Method 1: Simple 2D array
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };
    // Print the matrix
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// string letters[rows][columns]
//   string letters[2][4] = {
//     { "A", "B", "C", "D" },
//     { "E", "F", "G", "H" }
//   };

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 4; j++) {
//       cout << letters[i][j] << " ";
//     }
//     cout << "\n";
//   }
