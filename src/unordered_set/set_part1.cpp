#include <set>
#include<iostream>

using namespace std;


void print_set_of_ints(const set<int>& s); 


int main() {
    
    set<int> s1 {1, 3, 2};
    set<int> s2;

    s2.insert(1);
    s2.insert(23);
    s2.insert(333);
    cout << "s2.size() = " << s2.size() << endl;

    print_set_of_ints(s1);
    print_set_of_ints(s2);
}


void print_set_of_ints(const set<int>& s) {
    cout << "Printing contents of a set: " << endl;
    int counter = 0;
    for (auto x : s) {
        counter++;
        cout << "Element #" << counter << " = " << x << endl;
    }
};
