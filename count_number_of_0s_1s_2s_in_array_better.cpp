#include <iostream>
#include <vector>
using namespace std;
void sortArrayBruteForce(vector<int>& arr) {
    int count_0 = 0, count_1 = 0, count_2 = 0;
    int n = arr.size(); 
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count_0++;
        }
        else if(arr[i] == 1){
            count_1++;
        }
        else{
            count_2++;
        }
    }
    int i = 0;  
    for(; i < count_0; i++){
        arr[i] = 0;
    }
    for(; i < count_0 + count_1; i++){
        arr[i] = 1;
    }
    for(; i < n; i++){
        arr[i] = 2;
    } 
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements (0, 1, 2 only): " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortArrayBruteForce(arr);
    cout << "Sorted array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;    
    return 0;
}