#include<iostream>
#include<vector>
using namespace std;
vector<int> linearSearch(int arr[], int n, int target) {
    vector<int> indices;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {
    int n, target;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;
    vector<int> result = linearSearch(arr, n, target);
    if (!result.empty()) {
        cout << "Target found at index: ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
        if (result.size() > 1) {
            cout << "Target found multiple times." << endl;
        }
    } else {
        cout << "Target not found in the array." << endl;
    }
}