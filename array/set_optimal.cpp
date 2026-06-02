#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef set<int> si;

#define lp(i, e) for (int i=0; i<e; i++)
#define pb(q) push_back(q)

vi a, b, c;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i=0, j=0; 
    int q;

    int s1, s2; 
    cin >> s1 >> s2;

    lp(i, s1) {
        cin >> q;
        a.pb(q);
    }
    lp(i, s2) {
        cin >> q;
        b.pb(q);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (c.empty() || c.back() != a[i]) c.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j]){
            if (c.empty() || c.back() != b[j]) c.push_back(b[j]);
            j++;
        }
        else if (a[i] == b[j]){
            if (c.empty() || c.back() != a[i]) c.push_back(a[i]);
            i++;
            j++;
        }
    }
    while (i < a.size()){
        if (c.empty() || c.back() != a[i]) c.push_back(a[i]); 
        i++;
    }
    while (j < b.size()) {
        if (c.empty() || c.back() != b[j]) c.push_back(b[j]); 
        j++; 
    }
    for (auto val : c) cout << val << " "; 
    cout << endl;
}
