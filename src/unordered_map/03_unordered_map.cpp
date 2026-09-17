#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


int main() {
    string s = "asdfa";
    unordered_map<char, int> my_counts;

    for (char& c : s) {
        cout << "next letter: " << c << endl;
        cout << "updating counts..." << endl;
        my_counts[c]++;
    }
    
}
