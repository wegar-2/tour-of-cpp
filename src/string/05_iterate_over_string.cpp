#include <iostream>
#include <string>

using namespace std;


int main() {

    int my_int = 123'456'789;

    for (const char& c : to_string(my_int)) {
        cout << c << endl;
    }
}

