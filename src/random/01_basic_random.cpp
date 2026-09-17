#include <iostream>
#include <random>

using namespace std;

int main() {

    unsigned int seed = 123'456;

    // 1. random integers from a range
    mt19937 rng = mt19937(seed);
    int upper_threshold = 1'000;
    uniform_int_distribution<int> uid = uniform_int_distribution<int>(1, upper_threshold);
    cout << "Generating random integers from interval 1 to " << upper_threshold << " (both inclusive)..." << endl;
    for (int k = 0; k < 10; ++k) {
        cout << "random integer #" << k << ": " << uid(rng) << endl;
    }


    // 2. random integers from a range (0, 1)
    
    
}
