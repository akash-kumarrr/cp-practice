#include <bits/stdc++.h>
#define lp(i, a, b) for (int i=a; i<b; i++)

using namespace std;
vector<int> arr;
int main() {
    int a;
    while(cin >> a) arr.push_back(a);
    sort(arr.begin(), arr.end());

    lp(i, 1, arr.size()){
        if (arr[i] == arr[i-1]) {
            arr.erase(arr.begin() + i);
            i--;
        }
    }
    for (int i : arr) cout << i << " ";
}