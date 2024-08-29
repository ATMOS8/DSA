#include<bits/stdc++.h>
vector<int> sortedArray(vector <int> a, vector <int> b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i = 0; i < n1; i++){
        st.insert(a[i]);
    }
    for(int i = 0; i < n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1), b(n2);
    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }
    vector<int> ans = sortedArray(a, b);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}