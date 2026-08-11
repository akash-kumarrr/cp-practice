#include <bits/stdc++.h>

using namespace std;

#define lp(i, e) for (int i=1; i<e; i++)
#define pb push_back

typedef vector<int> vi;

int main(){
    int a, b, c, x, y;
    if(!(cin >> x) || !x) return 0;

    vi v;

    while(x--){
        cin >> a;
        v.pb(a);
    }

    std::sort(v.begin(), v.end());

    b=1;
    c=INT_MIN;

    lp(i, v.size()){
        if (v[i]==v[i-1]+1) c=max(c, (++b));
        else b=1;
    }
    cout << c << endl;
}