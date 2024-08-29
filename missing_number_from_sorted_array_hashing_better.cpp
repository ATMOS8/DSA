#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int findMissingNumber(vector<int>& arr, int n) {
    unordered_set<int> elementsSet(arr.begin(), arr.end());
    for (int i = arr[0]; i <= arr[n-1]; i++) {
        if (elementsSet.find(i) == elementsSet.end()) {
            return i;
        }
    }
    return arr[n-1] + 1;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int missingNumber = findMissingNumber(arr, n);    
    cout << "The missing number is: " << missingNumber << endl;   
    return 0;
}