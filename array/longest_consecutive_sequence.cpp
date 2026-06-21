//GOOGLE INTERVIEW

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vll;
typedef int ll;

#define pb push_back
#define sio(a) sort(a.begin(), a.end())   // sio = sort in increasing order

int main() {
    int a, b, c, n;
    vll v;

    if(!(cin >> n)) return 0;

    while (n--) {
        cin >> a;
        v.pb(a);
    }

    sio(v);

    int i=0, j=0, ec=0, mec=0;

    while (j<v.size()) {
        j++;
        if (v[j] == v[i]+1) {
            ec++;
        }
        else {
            mec = max(mec, ec);
            ec = 0;
            i = j;
        }
    }
    mec = max(mec, ec);
    cout << mec+1 << endl;
    return 0;


}