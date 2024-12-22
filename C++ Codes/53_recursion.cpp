// Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.
#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1); //It is like 10+9+8......so on
  } else {
    return 0;
  }
}

int main() {
  int result = sum(15);
  cout << result;
  return 0;
}

// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0