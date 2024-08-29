#include <iostream>
#include <vector>
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; 
            }
        }
    }
    return {};
}
int main() {
    int n, target;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> nums(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cout << "Enter the target value: ";
    std::cin >> target;
    std::vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No solution found!" << std::endl;
    }
    return 0;
}