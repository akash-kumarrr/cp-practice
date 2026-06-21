#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;


#define _(i, s, e) for (int i=s; i<e; i++)
#define pb push_back
#define sio(a) sort(a.begin(), a.end())   // sio = sort in increasing order

int main() {
    int a, b, c, n;
    vi v;
    if (!(cin >> n)) return 0;

    while (n--) {
        cin >> a;
        v.pb(a);
    }

    int max_leader = INT_MIN;
    int j=v.size()-1;
    while (j>=0) {
        if (v[j] >= max_leader) {
            max_leader = v[j];
            cout << v[j] << " ";
        }
        j--;
    }
    cout << endl;
    return 0;
}