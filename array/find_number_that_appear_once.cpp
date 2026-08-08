//find number that is appearing once in array

#include <bits/stdc++.h>

using namespace std;

#define _(i ,s, e) for (int i=s; i<e ; i++)
#define pb push_back

typedef vector<int> vi;

int main(){
    vi v;
    int a, b, c, x, y;

    if (!(cin >> x) || !x) return 0;
    
    y=x;
    b=0;
    int m = INT_MIN;

    while(x--){
        cin >> a;
        b+=a;
        m = max(m, a);
        v.pb(a);
    }

    int sum_till_m = m*(m+1);

    cout << sum_till_m-b << endl;
    return 0;
}