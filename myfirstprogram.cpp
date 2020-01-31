#include <iostream>
using namespace std;

// Create a function
void myFunction(string country = "Norway") {
    cout << country << "\n";
}

int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");

    return 0;
}

// Outputs "I just got executed!"