#include <bits/stdc++.h>
using namespace std;
int onceNumber(int arr[], int n) {
    int maxi = arr[0];
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    vector<int> hash(maxi + 1, 0);
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(hash[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1; 
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
    if(result != -1) {
        cout << "The number that appears only once is: " << result << endl;
    } else {
        cout << "No number appears exactly once." << endl;
    }
    return 0;
}