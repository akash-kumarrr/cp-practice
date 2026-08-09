#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef unordered_map<int, int> mii;

#define _(i, e) for (int i=0; i<e; i++)
#define pb push_back

int main() {
    int a, b, c, d, x;
    mii m;
    vi v;

    if(!(cin >> x) ||!x) return 0;
    while (x--) {
        cin >> a;
        v.pb(a);
    }

    cout << "enter the target : ";
    cin >> d;

    for (int i=0; i<v.size(); i++){
        if (m[d-v[i]]) {
            printf("%d, %d\n", m[d-v[i]], i);
            return 0;
        }
        m[v[i]] = i;
    }
    cout << "no  found !";
}