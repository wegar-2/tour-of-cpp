#include<iostream>
#include<vector>

using namespace std;

void print_vec(const vector<int>& vec) {
    cout << "Printing out the vector: " << endl;
    for (int i = 0; i < vec.size(); ++i) { cout << "vec[" << i << "] = " << vec[i] << endl; }
}


int main() {

    vector<int> vec1 = {10, 23, 4};
    vector<int> vec2 = {690, 1, 32};

    bool check = vec1.empty(); // false

    // .back() vs .pop_back()
    int temp;
    int elems_count = vec1.size();
    for (int i = 0; i < elems_count; ++i) {
        temp = vec1.back();
        cout << "temp = " << temp << endl;
        vec1.pop_back();
    }

    // inserting a whole slice into another vector
    vector<int> v1 = {1, 2, 5, 6};
    vector<int> v2 = {3, 4};
    v1.insert(v1.begin() + 2, v2.begin(), v2.end());
    print_vec(v1);

    // get a slice of a vector
    vector<int> v3 = {4, 2, 90, 232, 32, 2};
    vector<int> v4 = vector<int>(v3.begin() + 1, v3.begin() + 4);
    print_vec(v4);
}
