#include <iostream>
#include <utility>
#include <string>

using namespace std;


int main () {
    pair <int, int> p1 = {123, 323};
    
    cout << p1.first << "; " << p1.second << endl;

    auto p2 = make_pair(to_string(123), string("qwerty"));

    cout << p2.first << "; " << p2.second << endl;
}
