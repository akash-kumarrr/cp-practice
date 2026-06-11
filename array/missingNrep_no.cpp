#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

#define _(i, e) for(ll i=0; i<e; i++)
#define pb push_back
#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    ll a, b, c, n;
    vi v;
    vi a;
    if (!(cin >> n)) return 0;
    while (n--) {
        cin >> a;
        v.pb(a);
    }
    for(ll i=0; i<v.size(); i++) {
        if (v[i] != i+1) {
            cout << v[i] << " " << i+1 << endl;
        }
    }
    return 0;
}