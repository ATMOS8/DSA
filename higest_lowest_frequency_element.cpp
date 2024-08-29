#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    int highestFreqElem = arr[0];
    int lowestFreqElem = arr[0];
    int highestFreq = mpp[highestFreqElem];
    int lowestFreq = mpp[lowestFreqElem];
    for(auto &pair : mpp) {
        if(pair.second > highestFreq) {
            highestFreq = pair.second;
            highestFreqElem = pair.first;
        }
        if(pair.second < lowestFreq) {
            lowestFreq = pair.second;
            lowestFreqElem = pair.first;
        }
    }
    cout << "Highest frequency element: " << highestFreqElem << " with count " << highestFreq << endl;
    cout << "Lowest frequency element: " << lowestFreqElem << " with count " << lowestFreq << endl;
    return 0;
}