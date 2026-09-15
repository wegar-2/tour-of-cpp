#include <cstddef>
#include <iostream>
#include <string>


int main() {

    std::string s = "asdf";
    std::cout << "my s: " << s << std::endl;

    /* 
    Note - important:
        std::string --> double quoted "asdf"
        char ---------> single quotes 'l'
    */
    // first method of iterating over the string
    for (std::size_t i = 0; i < s.length(); ++i) {
        std::cout << "s[" << i << "] = " << s[i] << std::endl;
    }

    // natural iteration
    for (const char& c : s) {
        std::cout << "next char: " << c << std::endl;
    }
}
