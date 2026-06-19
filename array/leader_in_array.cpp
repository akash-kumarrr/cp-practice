#include <bits/stdc++.h>

using namespace std;

#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define _(i, s, e) for (int i=s; i<e; i++)
#define pb push_back
#define sio(a) sort(a.begin(), a.end())   // sio = sort in increasing order

typedef vector<int> vi;
typedef long long ll;

int main() {
    int a, b, operations = 0, n;
    vi v;
    vi rv;
    if (!(cin >> n)) return 0;
    while (n--) {
        cin >> a;
        v.pb(a);    
    }

    _(i, 0, v.size()-1) {
        int j = (int) v.size()-1;
        while (j > i && v[j] <= v[i]) {
            j--;
            operations++;
        }
        if (j == i) {
            rv.pb(v[i]);
        }
    }
    for (const auto& i : rv) {
        cout << i << " ";
    }
    cout << endl << "operations : " << operations << endl;
}