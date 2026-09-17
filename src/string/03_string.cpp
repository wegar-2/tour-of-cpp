#include <string>
#include <iostream>

using namespace std;

/*
Topics covered:
(1) converting integer to string
(2) appending to string
*/ 


template <typename T>
void print_var(const T& var, string name);

string make_intertwined(char c, int n);

string make_curiously_intertwined(char c, int n);

int main() {
    
    int n = 5;
    char c = 'X';
    print_var(n, "n");
    print_var(c, "c");
    
    string intertwined_n_c = make_intertwined(c, n);
    string curiously_intertwined_n_c = make_curiously_intertwined(c, n);

    print_var(intertwined_n_c, "intertwined_n_c");
    print_var(curiously_intertwined_n_c, "curiously_intertwined_n_c");
}


template <typename T>
void print_var(const T& var, string name) {
    cout << "variable " << name << " = " << var << endl;
}


string make_intertwined(char c, int n) {
    string out;

    for (int i = 0; i < n; ++i) {
        out.push_back(c);
        out += to_string(n);
    }

    return out;
}


string make_curiously_intertwined(char c, int n) {
    string out;

    for (int i = 0; i < n; i++) {
        out.push_back(c);
        out += to_string(i);
    }

    return out;
}