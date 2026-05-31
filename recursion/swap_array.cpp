#include <bits/stdc++.h>

using namespace std;

void swap(vector<int> &arr, int i, int j) {
    if (i >= j) {
        for (auto element : arr) {
            cout << element << " ";
        }
        return;
    };
    auto temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    swap(arr, i + 1, j - 1);
}

int main() {
    vector<int> arr;
    int n, x;
    while (cin >> x) {
        arr.push_back(x);
    }
    int i = 0, j = arr.size()-1;
    swap(arr, i, j);
}