#include <bits/stdc++.h>
using namespace std;
string read(int n, vector<int> book, int target) {
    int left = 0, right = n - 1;
    sort(book.begin(), book.end());
    while (left < right) {
        int sum = book[left] + book[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
}
int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> book(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> book[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    string result = read(n, book, target);
    cout << result << endl;
    return 0;
}