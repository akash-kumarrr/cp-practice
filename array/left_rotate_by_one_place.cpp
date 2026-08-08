#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    int a, b, c, x, n;
    if (!(cin >> n) || n < 1) return 0;
    x=n;
    vi v;
    while (x--) {
        cin >> a;
        v.push_back(a);
    }
    b=v[0];
    for (int i=1; i<n; i++){
        v[i-1] = v[i];
    }
    v[n-1] = b;
    for (int phi : v) cout << phi << " ";
    cout << endl;
    return 0; 
}