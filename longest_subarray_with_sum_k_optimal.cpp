#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> &a, long long k) {
    int left = 0, right = 0;
    long long sum = 0;
    int maxLen = 0;
    int n = a.size();
    while (right < n) {
        sum += a[right];
        while (sum > k && left <= right) {
            sum -= a[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}
int main() {
    int n;
    long long k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    int result = longestSubarrayWithSumK(a, k);
    cout << "Length of the longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}