#include <iostream>
#include <vector>
using namespace std;
vector<int> sortedArray(vector<int>& a, vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();
    vector<int> temp;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (temp.empty() || temp.back() != a[i]) { 
                temp.push_back(a[i]);
            }
            i++;
        } else if (b[j] < a[i]) {
            if (temp.empty() || temp.back() != b[j]) { 
                temp.push_back(b[j]);
            }
            j++;
        } else { 
            if (temp.empty() || temp.back() != a[i]) { 
                temp.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    while (i < n1) {
        if (temp.empty() || temp.back() != a[i]) { 
            temp.push_back(a[i]);
        }
        i++;
    }
    while (j < n2) {
        if (temp.empty() || temp.back() != b[j]) { 
            temp.push_back(b[j]);
        }
        j++;
    }
    return temp;
}
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }
    vector<int> ans = sortedArray(a, b);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}