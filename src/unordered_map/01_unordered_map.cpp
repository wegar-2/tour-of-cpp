#include <iostream>
#include <unordered_map>


int main() {

    std::unordered_map<char, int> my_map;

    my_map['a'] = 123;
    my_map['b'] = 23;
    my_map['c'] = 329;

    // iterating over elements of unordered_map
    for (auto& [k, v] : my_map) {
        std::cout << "my_map[" << k << "] = " << v << std::endl;
    }

    if (my_map.contains('b')) {
        std::cout << "my_map contains key 'b'! " << std::endl;
    }

    if (!my_map.contains('d')) {
        std::cout << "my_map does not contain key 'd'! " << std::endl;
    }
}
