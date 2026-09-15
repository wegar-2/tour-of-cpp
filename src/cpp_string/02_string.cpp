#include <iostream>
#include <string>


void print_string(std::string& s) {
    std::cout << "Printing string letter by letter:" << std::endl;
    for (std::size_t i = 0; i < s.length(); ++i) {
        std::cout << "s[" << i << "] = " << s[i] << std::endl;
    }
}


int main() {
    std::string s = "Set theory rocks!";
    print_string(s);
    std::string t = "But number theory is great, too! ";

    // concatentation 
    std::string cct = s + " " + t;
    std::cout << cct << std::endl;

    // append to string
    

    // C++ string is mutable ----> change select elements

}
