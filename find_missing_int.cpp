#include <bits/stdc++.h>
using namespace std;

#define _(i, s, e) for (int i=s; i<e; i++)
#define pb push_back
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int a, b, c;

    vi v;

    cin >> c;

    while (c-- ){
        cin >> a;
        v.pb(a);
    }
    
    _(i, 0, v.size()) {
        if (v[i] != i+1){
            cout << "------------\n" << i+1;
            break;
        }
    }
    return 0;
    
}