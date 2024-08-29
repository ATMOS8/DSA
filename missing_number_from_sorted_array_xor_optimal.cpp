#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < N-1; i++) {
        xor2 = xor2 ^ a[i];
    }
    for (int i = 1; i <= N; i++) {
        xor1 = xor1 ^ i;
    }
    return xor1 ^ xor2;
}
int main() {
    int N;
    cout << "Enter the size of the array (N): ";
    cin >> N;
    vector<int> a(N-1);
    cout << "Enter " << N-1 << " elements of the array: ";
    for (int i = 0; i < N-1; i++) {
        cin >> a[i];
    }
    int missing = missingNumber(a, N);
    cout << "The missing number is: " << missing << endl;
    return 0;
}