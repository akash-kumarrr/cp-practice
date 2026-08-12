#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define _(i, s, e) for (int i = s; i < e; i++)

typedef vector<vector<int>> vvi;
typedef vector<int>  vi;
typedef pair<int, int> pii;

int32_t main(){
    int a, b, c;
    vvi v1;
    
    int x, y;
    cout << "x (rows): ";
    if (!(cin >> x) || !x) return 0;
    cout << "y (cols): ";
    if (!(cin >> y) || !y) return 0;

    vector<pii> coordinates; 

    pii p;

    _(i, 0, x) {
        vi row_vector;
        _(j, 0, y) {
            cin >> a;
            row_vector.pb(a);
        }
        v1.pb(row_vector);
    }

    _(i, 0, v1.size()){
        _(j, 0, v1[i].size()){
            if (!(v1[i][j])){ 
                p.first = i;
                p.second = j;
                coordinates.push_back(p);
            }
        }
    }

    _(k, 0, coordinates.size()) {
    for (int j = 0; j < y; j++) {
        v1[coordinates[k].first][j] = 0;
    }

    for (int i = 0; i < x; i++) {
        v1[i][coordinates[k].second] = 0;
    }
}

    for (const auto& i : v1){
        for (const auto& j : i){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}