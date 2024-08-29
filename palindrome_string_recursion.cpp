#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string &s, int i = 0) {
    int n = s.length();
    if (i >= n / 2) {
        return true;
    }
    if (s[i] != s[n - i - 1]) {
        return false;
    }
    return isPalindrome(s, i + 1);
}
int main() {
    string s;
    cin >> s;
    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}