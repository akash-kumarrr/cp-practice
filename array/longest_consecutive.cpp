#include <bits/stdc++.h>

using namespace std;

#define _(i, s, e) for (int i=s; i<e; i++)
#define pb push_back
#define sio(a) sort(a.begin(), a.end())   // sio = sort in increasing order

typedef vector<int> vi;
typedef long long ll;

int main() {
    int a, ec=0, mec=0, n;
    vi v;
    if (!(cin >> n)) return 0;
    if (n < 2) {
        cout << n << endl;
        goto end;
    }
    while (n--) {
        cin >> a;
        v.pb(a);
    }
    cout << "processing...";
    sort(v.begin(), v.end());
    _(i ,0, v.size()) {
        int j = i; 
        ec = 1;    
        while ((j + 1 < v.size()) && (v[j+1] == v[j] + 1)) {
            ec++;
            j++;
        }
        mec = max(mec, ec);
        i = j; 
    }
    cout << mec << endl;
    end:
    return 0;    
}