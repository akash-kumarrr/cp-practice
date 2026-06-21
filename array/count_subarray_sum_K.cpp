#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define l(i, s, e) for (int i=s; i<e; i++)
#define pb push_back

int32_t main() {

    int a, n;
    vi v;
    cin >> n;
    int x=n;
    int count =0;
    int target;
    while (n--) {
        cin >> a;
        v.pb(a);
    }

    cout << "target : ";
    cin >> target;

    l(i, 0, x){
        int j=0, sum=0;
        while (sum <= target) {
            sum += v[j];
            if (sum == target) {
                count++;
                j=i+1;
                sum = 0;
                break;
            }
            j++;
        }
    }

    cout << count << endl;
}