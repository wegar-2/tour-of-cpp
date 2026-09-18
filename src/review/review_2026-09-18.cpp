#include <iostream>
#include <vector>

using namespace std;


void print_vec(const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }
}


void another_print_vec(const vector<int>& vec) {
    for (int x : vec) {
        cout << "element: " << x << endl;
    }
}


int main() {
    vector<int> v = {1, 2, 3};
    print_vec(v);

    v.push_back(4);
    print_vec(v);

    v.pop_back();
    cout << "Popped once..." << endl;
    print_vec(v);

    cout << "another printing..." << endl;
    another_print_vec(v);

    vector<int> v2;
    v2 = {10, 4, 123};
    v2.push_back(909);
    v2.pop_back();

    // initializing vectors
    vector<int> v3(10); // vector of 10 zeros
    vector<int> v4(10, 1); // vector of 10 ones

    // accessing elements using indexing: you can reach beyond end of the list!
    int danergous = v4[10];

    // using .at() method safeguards against reaching beyond end of the vector
    try {
        int res = v4.at(10);
    } catch (const out_of_range& error) {
        cerr << "Trying to reach out beyond end of vector! " << error.what() << endl;
    }
}