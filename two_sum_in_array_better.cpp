#include <bits/stdc++.h>
using namespace std;
vector<int> read(int n, vector<int>& book, int target) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int a = book[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {}; 
}
int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n); 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = read(n, nums, target); 
    if (!result.empty()) {
        cout << result[0] << ", " << result[1] << endl;  
    } else {
        cout << "NO" << endl;
    }
    return 0;
}