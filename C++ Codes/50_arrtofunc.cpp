// C++ Pass Array to a Function
// Pass Arrays as Function Parameters

#include <iostream>  
using namespace std;  

void myFunction(int myNumbers[6]) {
  for (int i = 0; i < 4; i++) {  
    cout << myNumbers[i] << "\n";    
  } 
}

int main() {  
  int myNumbers[6] = {10, 20, 30, 40, 50, 60};  
  myFunction(myNumbers);
  return 0;
}  

/*Example Explained
The function (myFunction) takes an array as its parameter (int myNumbers[5]), 
and loops through the array elements with the for loop.

When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.

Note that when you call the function, you only need to use the name of the array when passing it as an 
argument myFunction(myNumbers). However, the full declaration of the array is needed in the 
function parameter (int myNumbers[5]).*/