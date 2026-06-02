#include <bits/stdc++.h>
#define lp(i, a, b) for(int i=a; i<b; i++)

using namespace std;

typedef set<int> si;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    si s;
    int x, y, temp;
    cin >> x >> y;
    lp(i, 0, x) {
        cin >> temp;
        s.insert(temp);
    }
    lp(i, 0, y) {
        cin >> temp;
        s.insert(temp);
    }
    for (auto q : s) cout << q << " ";
    cout << "\n";
    return 0;
}
