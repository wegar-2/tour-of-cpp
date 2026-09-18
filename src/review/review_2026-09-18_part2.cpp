#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> empty_vec{};
    if (empty_vec.empty()) {
        cout << "empty vector!" << endl;
    }

    vector<int> v = {10, 5, 3, 12, 9, 7, 12};
    while (!v.empty()) {
        cout << "emptying the vector... " << v.back() << endl;
        v.pop_back();
    }

    // vector size vs capacity

}
