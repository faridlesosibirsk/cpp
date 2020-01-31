#include <iostream>
using namespace std;

// Create a function
void myFunction(string fname) {
    cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam"); // call the function
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Outputs "I just got executed!"