#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define _(i,s,e) for(ll i=s; i<e; i++)
#define pb push_back
#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main() {
    ll a, b, ic = 0, n;
    ll arr[(int)1e7];
    if (!(cin >> n)) return 0;
    
    _(i, 0, n) cin >> arr[i];

    _(i, 0, n) {
        _(j, i + 1, n) {
            if (arr[i] > arr[j]) {
                ic++;
            }
        }
    }
    cout << ic << endl;
    return 0;
}