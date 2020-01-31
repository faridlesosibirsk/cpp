#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food
    string f2;
    f2 = food;
    food = "test";
    f2 = "food2";
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    cout << f2 << "\n";

    return 0;
}