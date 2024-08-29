#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m) {
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i < n && j < m) {
        if(A[i] < B[j]) {
            i++;
        }
        else if(B[j] < A[i]) {
            j++;
        }
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main() {
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> m;
    vector<int> B(m);
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < m; i++) {
        cin >> B[i];
    }    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<int> ans = findArrayIntersection(A, n, B, m);
    cout << "Intersection of the two arrays: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;   
    return 0;
}