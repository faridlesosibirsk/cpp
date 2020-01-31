#include <iostream>
using namespace std;

// Create a function
void myFunction() {
  cout << "I just got executed!" << endl;
}

int main() {
  myFunction(); // call the function
  myFunction();
  myFunction();
  return 0;
}

// Outputs "I just got executed!"