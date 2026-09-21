#include <iostream>
#include <utility>
#include <string>

using namespace std;

template <typename T1, typename T2>
void print_pair(pair<T1, T2> p) {
    cout << "This pair is: " << endl;
    cout << "p.first = " << p.first << endl;
    cout << "p.second = " << p.second << endl;
}


int main() {
    
    // create pair using make_pair
    pair<int, string> p1 = make_pair(1, string("Alice"));
    // create pair using curly braces syntax
    pair<int, string> p2 = {22, string("Bob")};

    print_pair(p1);
    print_pair(p2);

    // unpack pair using [] syntax & auto keyword
    auto [id1, name1] = p1;
    auto [id2, name2] = p2;

    cout << "id1 = " << id1 << endl;
    cout << "id2 = " << id2 << endl;

    cout << "name1 = " << name1 << endl;
    cout << "name2 = " << name2 << endl;

}
