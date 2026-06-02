#include <bits/stdc++.h>

using namespace std;

#define _(i, n) for(int i=0; i<n; i++)
#define pb push_back

typedef vector<int> vi;
typedef map<int, int> mii;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vi arr, ans; 
    mii mp;
    int a, n, b, c;

    cin >> n;
    _(i, n) {
        cin >> a;
        arr.pb(a);
        if (!mp.count(a)) {
            mp[a] = 1;
        }
        else mp[a]++;
    }

    _(i, mp.size()){
        _(j, mp[i]){
            ans.pb(i);
        }
    }

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;


    
}