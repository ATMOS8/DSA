#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &a){
    for(int i = 0; i < num; i++){
        if(a[i] == num){
            return i;
        }
    }
    return -1; 
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int num;
    cin >> num;
    cout << linearSearch(n, num, a) << endl;
    return 0;
}