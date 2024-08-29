#include <iostream>
#include <vector>
using namespace std;
int longestSubarrayWithSumK(const vector<int>& arr, int k) {
    int n = arr.size();
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += arr[j];
            if (currentSum == k) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }
    return maxLength;
}
int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int k = 12;
    int result = longestSubarrayWithSumK(arr, k);
    cout << "Length of the longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}