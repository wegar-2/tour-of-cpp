#include <tuple>
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;


void print_string(string s) {
    for (size_t i = 0; i < s.length(); ++i) {
        cout << "s[" << i << "] = " << s[i] << endl;
    }
}

template <typename T>
void print_vector(const vector<T>& vec) {
    cout << "printing vector elements: " << endl;
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "vector[" << i << "] = " << vec[i] << endl;
    }
}

template <typename T1, typename T2>
void print_pair(pair<T1, T2> p) {
    cout << "pair.first = " << p.first << "; pair.second = " << p.second << endl;
}


int main() {
    string msg = string("hello world!");
    print_string(msg);

    int value = 123'456;
    string str_value = to_string(value);
    print_string(str_value);

    vector<int> vec1 = {1, 10, 23, 32, 5, 2};
    print_vector(vec1);

    // an arbitrary tuple
    auto t = make_tuple(string("qwerty"), 123, 909.22, 'Q');
    auto [x1, x2, x3, x4] = t;

    // vector of pairs
    vector<pair<int, string>> v;
    v.push_back(make_pair(123, "qwerty"));
    v.push_back(make_pair(3232, "polio"));
}