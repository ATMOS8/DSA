#include<iostream>
#include<vector>
using namespace std;
int f(int n, vector<int>& memo) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = f(n-1, memo) + f(n-2, memo);
    return memo[n];
}
int main() {
    int n;
    cin >> n;
    vector<int> memo(n+1, -1); 
    cout << f(n, memo) << endl;
}
