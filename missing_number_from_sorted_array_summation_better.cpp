#include <iostream>
#include <vector>
using namespace std;
int findMissingNumber(vector<int>& arr, int n) {
    int first = arr[0];  
    int last = arr[n-1]; 
    int expectedSum = ((last - first + 1) * (first + last)) / 2;
    int actualSum = 0;
    for(int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
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