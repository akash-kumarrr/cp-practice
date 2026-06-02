#include <bits/stdc++.h>

using namespace std;

#define l0(i, a) for(int i=0;i <a; i++)
#define pb push_back

typedef vector<int> vi;
typedef unordered_map<int, int> umpii;

#define FIP ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int32_t main() {
    FIP;
    vi arr;
    umpii hmp;
    int a, n, t;
    cin >> n;
    cin >> t;
    l0(i, n) {
        cin >> a;
        arr.pb(a);
    }

    l0(i, n) {
        int comp  = t - arr[i];
        if (hmp.count(comp)) {
            cout << i <<  " " << hmp[comp]; 
            return 0;
        }
        hmp[arr[i]] = i;
    }
    cout << "DNE";
    return 0;
}