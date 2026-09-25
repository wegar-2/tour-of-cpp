#include <iostream>
#include<vector>

using namespace std;


int main() {
    
    cout << "" << endl;
    vector<int> vec = {10, 4, 23, 232, 12};
    cout << "vec.size() = " << vec.size() << endl;
    cout << "vec.capacity() = " << vec.capacity() << endl;
    
    vector<int> vec_ = {1, 2, 3, 1, 2, 3, 5, 6, 7};
    vec.reserve(vec.size() + vec_.size());
    vec.insert(vec.end(), vec_.begin(), vec_.end());
    cout << "vec.size() = " << vec.size() << endl;
    cout << "vec.capacity() = " << vec.capacity() << endl;
}
