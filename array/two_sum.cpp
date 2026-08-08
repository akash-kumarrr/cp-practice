#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define _(i, e) for (int i=0;i < e; i++)

typedef vector<int> vi; 
typedef map<int, int> mii; 

int main(){
    vi v;
    int a, x, y;

    if (!(cin >> x) || x <= 0) return 0;

    int c = x;
    while(c--){
        cin >> a;
        v.pb(a);
    }

    unordered_map<int, int> m;
    
    cout << "enter target : "; 
    cin >> y;

    for (const auto& i : v){
        int complement = y - i;

        if (m.contains(complement)){
            cout << "Pairs found: " << i << " and " << complement << endl;
            return 0;
        }

        m[i] = 1; 
    }

    cout << "No pair found." << endl;
    return 0;
}
