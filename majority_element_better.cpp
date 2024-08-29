#include <iostream>
#include <vector>
#include <map>
using namespace std;
int MajorityElement(vector<int> v) {
    map<int, int> mpp;
    for(int i = 0; i < v.size(); i++) {
        mpp[v[i]]++;
    }
    for(auto it : mpp) {
        if(it.second > v.size() / 2) {
            return it.first;
        }
    }
    return -1; 
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int result = MajorityElement(v);
    if(result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found." << endl;
    }
    return 0;
}