#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int>& arr, int n) {
    for(int i = 0; i < n-1; i++) {
        if(arr[i+1] != arr[i] + 1) {
            return arr[i] + 1;
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
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;   
    return 0;
}