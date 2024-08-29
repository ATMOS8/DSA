#include <iostream>
#include <vector>
using namespace std;
void sortArray(vector<int>& arr, int n) {
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements (0, 1, 2 only): " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortArray(arr, n);
    cout << "Sorted array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}