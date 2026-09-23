#include <iostream>
#include <vector>
#include <string>

using namespace std;


void print_vec(vector<int> vec, bool multiline = true) {
    cout << "Printing the vector: " << endl;
    if (multiline) {
        for (size_t i = 0; i < vec.size(); ++i) {
            cout << "vec[" << i << "] = " << vec[i] << endl;
        }
    } else {
        string out = "vec = [ ";
        for (size_t i = 0; i < vec.size(); ++i) {
            if (i < vec.size() - 1) {
                out += (to_string(vec[i]) + string(" | "));
            } else {
                out += to_string(vec[i]);
            }
        }
        out += " ]";
        cout << out << endl;
    }
}


void double_vec_in_place(vector<int>& vec) {
    for (auto& el : vec) { el *= 2; }
}


vector<int> double_vec(const vector<int>& vec) {
    vector<int> out(vec.size());
    for (size_t i = 0; i < vec.size(); ++i) { out[i] = 2 * vec[i]; }
    return out;
}



int main() {
    vector<int> vec = {1, 323, 19, 3, 8, 23};

    cout << "STEP 1: Printing vec in multiple line..." << endl;
    print_vec(vec, true);

    cout << "STEP 2: Printing vec in single line..." << endl;
    print_vec(vec, false);

    cout << "STEP 3: doubling the vector in place..." << endl;
    double_vec_in_place(vec);
    print_vec(vec, false);

    cout << "STEP 4: doubling and returning copy..." << endl;
    vector<int> vec_copy = double_vec(vec);
    print_vec(vec_copy, false);
}
