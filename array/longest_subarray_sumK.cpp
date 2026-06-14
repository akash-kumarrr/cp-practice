#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie((NULL));

typedef vector<int> vi;
typedef long long ll;

int main() {
    vi v;
    int a, t, c , n;
    if(!(cin >> n)) return 0;
    
    while (n--) {
        cin >> a;
        v.pb(a);
    }

    cout << "enter target : ";
    cin >> t;
    int mec=0;

    for (int i=0; i<v.size(); i++) {
        int j=i;
        int ec = 0;
        int sum = 0;
        while (sum < t && j < v.size()) {
            sum += v[j];
            ec += 1;
            j++;
            if (sum == t) mec = max(mec, ec);
        }
    }

    cout << mec << endl;
}