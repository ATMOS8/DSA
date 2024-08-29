#include <iostream>
#include <algorithm>
using namespace std;
void reverseArray(int arr[], int n, int i = 0) {
    if (i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(arr, n, i + 1);
}
int main() {
    int n;
    cin >> n; 
    if (n <= 0) {
        cout << "Invalid array size" << endl;
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}