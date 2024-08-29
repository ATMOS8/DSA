#include <bits/stdc++.h>
using namespace std;
int MajorityElement(vector<int> v) {
    int cnt = 0;
    int el = -1; 
    for(int i = 0; i < v.size(); i++) {
        if(cnt == 0) {
            el = v[i];
            cnt = 1;
        }
        else if(v[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == el) {
            cnt1++;
        }
    }

    if(cnt1 > (v.size() / 2)) {
        return el; 
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if(n <= 0){
        cout << "The array must contain at least one element." << endl;
        return 0;
    }
    vector<int> v(n);
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int result = MajorityElement(v);
    if(result != -1){
        cout << "Majority Element: " << result << endl;
    }
    else{
        cout << "No Majority Element found." << endl;
    }
    return 0;
}