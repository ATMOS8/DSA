#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int writeIndex = 1; 
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[writeIndex] = nums[i];
            writeIndex++;
        }
    }
    return writeIndex;
}
int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int newLength = removeDuplicates(arr);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}