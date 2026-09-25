#include <iostream>
#include <string>

using namespace std;


void print_int_vec(const vector<int>& vec) {
    cout << "Printing out the vector: " << endl;
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }
}

vector<int> make_vec(int n = 10) {
    vector<int> out(n);
    for (int i = 0; i < n; ++i) { out[i] = i; }
    return out;
}


int main() {
    
    vector<int> vec = {1, 10, 5, 21, 19};
    print_int_vec(vec);
    
    // append
    vec.push_back(1023);
    print_int_vec(vec);

    // insert at the given position
    vec.insert(vec.begin() + 1, 777);
    print_int_vec(vec);

    // multiple inserts 
    vector<int> vx = {0, 1, 2, 6, 7};
    vector<int> vy = {3, 4, 5};
    for (int i = 0; i < vy.size(); ++i) {
        vx.insert(vx.begin() + 3 + i, vy[i]);
    }
    print_int_vec(vx);

    // removing element from vector
    vector<int> v = {0, 1, 2, 3};
    v.erase(v.begin() + 2);
    print_int_vec(v);

    // removing a range of elements
    vector<int> v0 = make_vec(10);
    v0.erase(v0.begin() + 1, v0.begin() + 5); // remove 1, 2, 3, 4
    print_int_vec(v0);

}
