#include <iostream>

using namespace std;


int main() {
    bool x = true;
    bool y = false;

    if (x && !y) { cout << "(x && !y) is true" << endl; }
    if (x || y) { cout << "(x || y) is true" << endl; }
    if (!y) { cout << "(!y) is true" << endl; }

}
