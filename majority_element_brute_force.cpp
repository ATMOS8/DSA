#include <iostream>
#include <vector>
using namespace std;
void MajorityElement(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) {
        int count = 0; 
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > n / 2) {
            cout << "Majority Element: " << arr[i] << endl;
            return;
        }
    }
    cout << "No Majority Element found." << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    MajorityElement(arr, n);
    return 0;
}