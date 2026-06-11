#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define _(i,s, e) for (int i=s; i<e; i++)
#define pb push_back

int32_t main() {
    __FIO__;
    int a, b, n;
    vi v;
    int fc=1, mfc=0;
    int fruit1, fruit2;
    bool has_fruit2 = false;

    if (!(cin >> n)) return 0;

    while (n--) {
        cin >> a;
        v.pb(a);
    }
    int e=v.size();

    _(i, 0, e) {
        fruit1 = v[i];
        _(j, i+1, e) {
            if (v[j] == fruit1) {
                fc++;
                mfc = max(fc, mfc);
            }
            else {
                if (has_fruit2 == false) {
                    fruit2 = v[j];
                    fc++;
                    has_fruit2=true;
                    mfc = max(mfc, fc);
                }
                else {
                    if (v[j] == fruit2) {
                        fc++;
                        mfc = max(mfc, fc);
                    }
                    else {
                        mfc = max(mfc, fc);
                        fc = 1;
                        fruit1=INT_MIN;
                        fruit2=INT_MIN;
                        has_fruit2=false;
                        break;
                    }
                }
            }
        }
    }
    cout << mfc << endl;
}