#include  <bits/stdc++.h>

using namespace std;

#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define _(i,s, e) for (int i=s; i<e; i++)
#define pb push_back

typedef vector<int> vi;

int32_t main() {
    int a, b, n;
    vi v;
    int fc=1, mfc=0;
    int fruit1=-1, fruit2=-1;

    if (!(cin >> n)) return 0;

    while (n--) {
        cin >> a;
        v.pb(a);
    }
    int e=v.size();
    int i=0, j=i;
    while (j < e) {
        if (fruit1 == -1) {
            fruit1 = v[j];
            j++;
            fc = 1;
        }
        else {
            if (v[j] == fruit1) {
                fc++;
                j++;
            }
            else {
                if (fruit2 == -1) {
                    fruit2 = v[j];
                    j++;
                    fc ++;
                }
                else {
                    if (v[j] == fruit2) {
                        fc ++;
                        j++;
                    }

                    else {
                        i++;
                        j=i;
                        fc = 1;
                        fruit1 = -1;
                        fruit2 = -1;
                        mfc = max(mfc, fc);
                    }
                }
            }
        }
        mfc = max(fc, mfc);
    }
    cout << mfc << endl;
}