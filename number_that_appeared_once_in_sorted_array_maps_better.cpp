#include <iostream>
#include <map>
#include <vector>
using namespace std;
int onceNumber(const vector<int>& arr) {
    map<int, int> freqMap;
    for(int num : arr) {
        freqMap[num]++;
    }
    for(const auto& entry : freqMap) {
        if(entry.second == 1) {
            return entry.first;
        }
    }
    return -1;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = onceNumber(arr);
    if(result != -1) {
        cout << "The number that appears only once is: " << result << endl;
    } else {
        cout << "No number appears exactly once." << endl;
    }
    return 0;
}