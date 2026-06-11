#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;

#define _(i, e) for(ll i=0; i<e; i++)
#define __(i, s, e) for(ll i=s; i<e; i++)
#define pb push_back
#define __FIO__ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie

int main() {
    //matrix = a*b
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    _(i, a) {
        _(j, b) {
            cin >> arr[i][j];
        }
    }

    int yt = 0, yb = a-1, xl = 0, xr = b-1;
    while (yt <= yb && xl <= xr) {
        //move LR
        _(i, xl, xr+1) {
            cout << arr[yt][i] << " ";
        }
        yt++;
        //move TB
        __(j, yt, yb+1) {
            cout << arr[j][xr] << " ";
        }
        xr--;
        //move RL
        if (yt <= yb) {
            for(int i=xr; i>=xl; i--) {
                cout << arr[yb][i] << " ";
            }
            yb--;
        }
        //move BT
        if (xl <= xr) {
            for(int j=yb; j>=yt; j--) {
                cout << arr[j][xl] << " ";  
            }
            xl++;
        }
    }

    return 0;
}