#include <bits/stdc++.h>

using namespace std;

#define lp(i, e) for (int i=0; i<e; i++)
#define pb push_back

typedef vector<int> vi;
typedef unordered_map<int, int> mii;

int main(){
    int a, b, x, y;
    if(!(cin >> x) || !x) return 0;

    mii m;
    vi v;

    while(x--) {
        cin >> a;
        v.pb(a);
    }

    lp(i, v.size()) m[v[i]]++;
    for(const auto& [k, v] : m) if (v>1) cout << k << " ";
    cout << endl; 
    return 0;
}