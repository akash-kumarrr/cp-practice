#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define _(i, e) for(ll i=0; i<e; i++)
#define __(i, s, e) for(ll i=s; i<e; i++)
#define pb push_back
#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie

int maib() {
    int a, b, n;
    if (!(cin >> n)) return 0;
    vi v;
    _(i, n) {
        cin >> a;
        v.pb(a);
    }
    int leader;
    _(i, n) {
        __(j, i+1, n) {
            if (v[i] < v[j]) {
                continue;
            }

            else {
                break;
            }
        }
        if (j == n) {
            cout << v[i] << " ";
        }
    }
    return 0;
}