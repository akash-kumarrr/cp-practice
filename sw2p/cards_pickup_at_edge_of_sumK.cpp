#include <bits/stdc++.h>

using namespace std;

#define fio ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define _(i, e) for(int i=0; i<e; i++)
#define pb push_back 

typedef vector<int> vi;


int main() {
    vi arr;
    int n, a, i=0, j=0;
    cin >> n ;
    _(i, n) {
        cin >> a;
        arr.pb(a);
    }
    int k;
    cout << "k : ";
    cin >> k;
    int s = 0, ms=0;
    //making left sum till kth index
    _(i, k) {
        s += arr[i];
    }
    ms = s;
    int ri = arr.size()-1;
    for(int j=k-1; j>=0; j--) {
        s-=arr[j];
        s+=arr[ri];
        ms = max(ms, s);
        ri --;
    }
    cout << ms << " " << endl;
}