#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    unordered_map<char, int> map1;
    unordered_map<char, int> map2;

    map1['a'] = 10;
    map2['a'] = 10;

    if (map1 == map2) {
        cout << "Maps are equal! " << endl;
    }
}