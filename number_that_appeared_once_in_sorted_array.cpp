#include <bits/stdc++.h>
using namespace std;
int oneNumber(int arr[], int n) {
    for(int i = 0; i < n; i++){
        int num = arr[i];
        int counter = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == num){
                counter++;
            }
        }
        if(counter == 1){
            return num;
        }
    }
    return -1; 
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = oneNumber(arr, n);
    if(result != -1){
        cout << "The number that appears only once is: " << result << endl;
    } else {
        cout << "No number appears exactly once." << endl;
    }
    return 0;
}