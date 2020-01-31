#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 3;
    cout << (x < 5 && x < 10) << endl;
    cout << (x < 5 || x < 4) << endl;
    cout << !(x < 5 && x < 10) << endl;

    return 0;
}