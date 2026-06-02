#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr;
    int target;
    if (!(cin >> target)) return 0;
    int x;
    while (cin >> x) arr.push_back(x);
    for (int i =0 ; i< arr.size(); i++) {
        if (arr[i] == target) cout << "found at index : " << i << endl; return 0;
    }
    cout << "not in array ..." << endl;
    return 0;
}

