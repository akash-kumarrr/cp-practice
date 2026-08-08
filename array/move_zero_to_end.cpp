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

    for (int i=0; i<v.size(); i++){
        int x=i;
        if (v[i]==0){
            while (!v[x]){
                x++;
            }
        }
        int temp = v[x];
        v[x] = v[i];
        v[i] = temp;
    }

    for (int i:v) cout << i << " ";
    cout << endl;
}