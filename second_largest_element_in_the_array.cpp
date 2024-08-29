#include<bits/stdc++.h>
using namespace std;
int arr[] = {1, 2, 4, 7, 7, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int main() {
    if (n < 2) {
        cout << "Array should have at least two elements" << endl;
        return -1;
    }
    int largest = arr[0];
    int second_largest = INT_MIN; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; 
        }
    }
    if (second_largest == INT_MIN) {
        cout << "There is no second largest element" << endl;
    } else {
        cout << "The second largest element is: " << second_largest << endl;
    }
    return 0;
}