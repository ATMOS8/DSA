#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int count = 0;        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
            } else {
                maxOnes = max(maxOnes, count);
                count = 0;
            }
        }
        maxOnes = max(maxOnes, count);
        
        return maxOnes;
    }
};
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);    
    cout << "Enter the elements of the array (0s and 1s): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    int result = sol.findMaxConsecutiveOnes(nums);
    cout << "The maximum number of consecutive 1s is: " << result << endl;   
    return 0;
}