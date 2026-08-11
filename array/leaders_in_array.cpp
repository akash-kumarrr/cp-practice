#include <bits/stdc++.h>

using namespace std;

#define lp(i, e) for (int i=0; i<e; i++)
#define pb push_back

typedef vector<int> vi;

int main(){
    int a,b, x, y;

    vi v;

    if(!(cin >> x) || !x) return 0;

    while(x--){
        cin >> a;
        v.pb(a);
    }

    a=INT_MIN;
    vi r;

    for(int i=v.size()-1; i>-1; i--){
        if (v[i]>a){
            a=v[i];
            r.pb(a);
        }
    }

    for(const auto& i:r) cout << i << " ";

    cout << endl;
}