#include <bits/stdc++.h>

using namespace std;

// 1, 2,3,4,0,4,0

int main(){
    int a, b, c, x, y;

    if (!(cin >> c) || x<1) return 0;
    vector<int> v;
    x=c;
    while (c--) {
        cin >> a;
        v.push_back(a);
    }
    cout << "-------------" << endl;

    for (int i=0; i<v.size(); i++) {
        int x=i;
        if (!v[x]){
            while (v[x]==0 && x<v.size()-1){
                x++;
            }
            v[i] = v[x];
            v[x] = 0;
        }
    } 
    for (const auto& i : v) cout << i << " ";
    cout << endl;
}