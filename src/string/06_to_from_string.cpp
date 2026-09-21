#include <iostream>
#include <string>

using namespace std;


int main() {

    // int -----> string -----> int
    int x = 123'456;
    string str_x = to_string(x);
    int recov_x = stoi(str_x);

    // float -----> string -----> float
    float y = 123.456;
    string str_y = to_string(y);
    float recov_y = stof(str_y);

    // double -----> string -----> double
    double z = 123.909;
    string str_z = to_string(z);
    double recov_z = stod(str_z);
}