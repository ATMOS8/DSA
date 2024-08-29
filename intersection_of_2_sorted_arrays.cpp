#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &A, vector<int> &B, int n, int m) {
    vector<int> ans;
    vector<int> vis(m, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(A[i] == B[j] && vis[j] == 0) {
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }
            if(B[j] > A[i]) {
                break;
            }
        }
    }
    return ans;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<int> ans = findArrayIntersection(A, B, n, m);   
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}