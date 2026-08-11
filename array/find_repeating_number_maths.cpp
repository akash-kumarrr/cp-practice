#include <bits/stdc++.h>

using namespace std;

#define lp(i, e) for (int i=0; i<e; i++)
#define pb push_back

typedef vector<int> vi;

int32_t main() {
    int a, b,c;
    vi v;

    if(!(cin >> c) ||!c) return 0;

    while(c--){
        cin >> a;
        v.pb(a);
    }

    b=INT_MIN;
    a=0;

    lp(i, v.size()){
        b=max(b, v[i]);
        a+=v[i];
    }
    cout << abs(a-b) << endl;
}