#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
#define pb push_back
#define _(i ,x) for (int i=0; i<x; i++)
int main(){
    int a, b, c, x, y;
    vi v;
    if (!(cin >> x) || !x) return 0;
    b = 0;
    y=x;

    c=INT_MIN;

    while (y--){
        cin >> a;
        b+=a;
        c = max(c, a);
        v.pb(a);
    }

    int sum_till_c=(c*(c+1))/2;
    cout << b-sum_till_c << endl;
}

/*
1 2 3
1 2 2 3 4
*/