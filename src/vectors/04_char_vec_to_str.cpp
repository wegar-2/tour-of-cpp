#include <iostream>
#include <string>

using namespace std;


int main() {
    vector<char> chars = {'q', 'w', 'e', 'r', 't', 'y', ' ', 'a', 's', 'd', 'f'};
    string str1 = string(chars.begin(), chars.end());
    cout << "str1 = " << str1 << endl;
}
