#include <iostream>
using namespace std;
int onceNumber(const int arr[], int n) {
    int XOR = 0;
    for(int i = 0; i < n; i++) {
        XOR ^= arr[i];
    }
    return XOR;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = onceNumber(arr, n);
    cout << "The number that appears only once is: " << result << endl;
    return 0;
}