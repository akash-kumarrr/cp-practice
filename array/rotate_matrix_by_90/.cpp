#include <bits/stdc++.h>

using namespace std;

#define l(i,s,e) for (int i=s; i<e; i++)
#define pb push_back

typedef vector<int> vi;

int main(){
    int a, b, c, m, n;

    if(!(cin >> m)) return 0;
    if(!(cin >> n)) return 0;

    int v[m][n];

    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++) {
            cin >> *(*(v+i)+j);
        }
    }

    

}