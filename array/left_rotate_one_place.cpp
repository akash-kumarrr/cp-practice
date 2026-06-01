#define lp(i, a, b) for (int i=a; i<b; i++)
#include <bits/stdc++.h>


using namespace std;
vector<int> arr;
int main() {
    int a ;
    while(cin >> a) arr.push_back(a);
    int temp = arr[0];
    lp(i, 1, arr.size()) {
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = temp;
    for (int i : arr) cout << i << " ";
}