#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    std::vector<int> vec {10, 1, 23, 10, 1, 2222, 5, 80, 2, 1, 32};
    std::unordered_map<int, int> counts;

    cout << "calculating counts of the members of vector vec..." << endl;
    for (std::size_t i = 0; i < vec.size(); ++i) {
        int el = vec[i];

        if (!counts.contains(el)) {
            counts[el] = 1;
        } else {
            counts[el] += 1;
        }
    }

    cout << "counts of various elements are: " << endl;
    for (auto& [k, v] : counts) {
        cout << "Element: " << k << "; #occurrences: " << v << endl;
    }
}
