#include <bits/stdc++.h>

using namespace std;

int max_occurance(int* arr, int n){
    map<int, int> hash_table;
    for(int i=0; i<n; i++){
        hash_table[arr[i]] ++ ;
    }
    int temp = INT_MIN;
    int output_key;
    for(const auto& [key, value] : hash_table) {
        if (value > temp) {
            temp = value;
            output_key = key;
        }
    }
    return output_key;
}

int main() {
    int n;
    if(!(cin >> n)) return 0;
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << max_occurance(arr, n);
}