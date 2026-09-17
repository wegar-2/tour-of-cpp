#include <iostream>
#include <vector>


void print_int_vec(const std::vector<int>& vec);

int main() {

    std::vector<int> vec1 {10, 12, 32};
    std::vector<int> vec2(5); // vector of five zeros
    std::vector<int> vec3(5, 1); // vector of five ones

    std::cout << "vec1: " << std::endl;
    print_int_vec(vec1);
    std::cout << "vec2: " << std::endl;
    print_int_vec(vec2);
    std::cout << "vec3: " << std::endl;
    print_int_vec(vec3);

    // secured access to vector elements - using .at() method;
    //std::cout << vec1.at(3) << std::endl;  // will throw an error during execution;
    //std::cout << vec1[3] << std::endl; // will execute insecurely; 

    // accessing front and back of a vector
    std::cout << "front of vec1: " << vec1.front() << std::endl;
    std::cout << "back of vec1: " << vec1.back() << std::endl;
    
    /*
    Mini exercise: translate to C++ from Python:
    nums = [4, 8, 15]
    nums[1] = nums[0] + nums[2]
    last = nums[-1]
    */
    std::vector<int> nums {4, 8, 15};
    nums[1] = nums[0] + nums[2];
    int last = nums.back();
    
    std::cout << "nums: " << std::endl;
    print_int_vec(nums);

}

void print_int_vec(const std::vector<int>& vec) {
    for (std::size_t i = 0; i < vec.size(); ++i) {
        std::cout << "vec[" << i << "] = " << vec[i] << std::endl;
    }
}
