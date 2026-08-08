//check array is sorted

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, x, y, n;
    vector<int> v;

    if (!(cin >> c) || c<1) return 0;
    x=c;

    while (c--) {
        cin >> a;
        v.push_back(a);
    }
    bool sorted;
    for (int i=1; i<v.size(); i++){
        if (v[i-1] > v[i]) {
            sorted = false;
        }
    }
    cout << "sorted\n";
    return 0;
}