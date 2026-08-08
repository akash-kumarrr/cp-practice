//union of two sorted arrays

#include <bits/stdc++.h>

using namespace std;
#define _(i, e) for (int i=0; i<e; i++)
#define pb push_back
typedef vector<int> vi;

int main() {
    vi v1, v2;
    int a, b, c1, c2, x, y;

    if(!(cin >> c1) || !c1) return 0;
    vi v;

    x=c1;
    while (c1--){
        cin >> a;
        v1.pb(a);
    }

    if (!(cin >> c2) || !c2) return 0;
    y=c2;
    while (c2--) {
        cin >> a;
        v2.pb(a);
    }

    int i=0, j=0;
    while (i<x && j<y){
        if (v1[i] < v2[j]){
            v.pb(v1[i]);
            i++;
        }
        else {
            v.pb(v2[j]);
            j++;
        }
    }
    while (i<x) v.pb(v1[i++]);
    while (j<y) v.pb(v2[j++]);

    for (const auto& i : v) cout << i << " ";
    cout << endl;
}