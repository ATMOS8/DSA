#include <bits/stdc++.h>
#include <vector>
using namespace std;
void sortArrayBruteForce(vector<int>& arr) {
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for(int num : arr) {
        if(num == 0) count_0++;
        else if(num == 1) count_1++;
        else if(num == 2) count_2++;
    }
    int index = 0;
    for(int i = 0; i < count_0; i++) {
        arr[index++] = 0;
    }
    for(int i = 0; i < count_1; i++) {
        arr[index++] = 1;
    }
    for(int i = 0; i < count_2; i++) {
        arr[index++] = 2;
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
    sortArrayBruteForce(arr);
    cout << "Sorted array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;   
    return 0;
}