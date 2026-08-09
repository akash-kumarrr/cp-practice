#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef unordered_map<int, int> mii;

#define lp(i, e) for (int i=0;i <e; i++)
#define pb push_back

int main(){
    int a, b, c, x, y;

    mii m;
    vi v;

    if(!(cin >> x) || !x) return 0;
    while (x--){
        if (!(cin >> a)) return 0;
        v.pb(a);
    }

    lp(i, v.size()) m[v[i]]++;
    int max_val=INT_MIN, max_key;

    for(const auto& [k, v] : m){
        if (v>max_val) {
            max_val=v;
            max_key=k;
        }
    }
    cout << max_key << max_val << endl;
    return 0;
}