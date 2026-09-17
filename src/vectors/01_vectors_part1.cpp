#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;


void print_double_vector(const vector<double>& vec);


int main() {

    cout << "Basics of vectors in C++" << endl;

    // initializing empty vector and assigning to it afterwards
    vector<double> vec1;
    vec1 = {123.2, 90, 12.22};

    // initializing non-empty vector
    vector<double> vec2 {1, 2, 3.44};

    // printing vectors using user-defined function
    cout << "Printing out vec1: " << endl;
    print_double_vector(vec1);
    cout << "Printing out vec2: " << endl;
    print_double_vector(vec2);

    // appending elements to the vector
    vec1.insert(vec1.end(), 102.2);
    cout << "Printing vec1 after appending at its end: " << endl;
    print_double_vector(vec1);

    // popping two elements from the end
    vec1.pop_back();
    vec1.pop_back();
    cout << "Printing vec1 after two pops from its end: " << endl;
    print_double_vector(vec1);

    
    return 0;
}


void print_double_vector(const vector<double>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "vec[" << i << "] = " << vec[i] << endl; 
    }
}
