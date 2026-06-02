#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main() {
    vi arr;
    int a;
    while (cin >> a) arr.push_back(a);
    int i = 0, j = 1;
    while (j < arr.size()) {
        if (arr[j] == 0) {
            j++; 
            continue; 
        }
        if (arr[i] == 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++; 
            j++;
        }
        else {
            i++;
            j++;
        }
        for (auto x : arr) cout << x << " "; 
        cout << endl;
    }
}