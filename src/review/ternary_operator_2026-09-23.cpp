#include <iostream>
#include <string>

using namespace std;


int main() {
    int x = 123;
    string msg = "x is ";
    string verdict = (x > 100) ? "greater" : "lower";
    msg += (verdict + " than 100");
    cout << msg << endl;
}
