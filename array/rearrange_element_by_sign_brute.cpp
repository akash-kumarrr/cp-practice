#include <bits/stdc++.h>

using namespace std;

#define lp(i, s, e) for (int i=s; i<e; i+=1)
#define pb push_back

typedef vector<int> vi;

int32_t main(){
    vi v;
    int a, b, c, x, y, s;

    if(!(cin >> x) || !x) return 0;

    while(cin >> a && x--) v.pb(a);
    vi n, p;
    for(const auto& i:v){
        if (i<0) n.pb(i);
        else p.pb(i);
    }
    vi r;
    lp(i, 0, p.size()){
        r.pb(p[i]);
        r.pb(n[i]);
    }

    for(const auto& i : r) cout << i << " ";
    cout << endl;

    return 0;
}