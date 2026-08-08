#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, x;
    if (!(cin >> x) || x<1) return 0;

    c=x;
    vector<int> v;
    while (c--) {
        cin >> a;
        v.push_back(a);
    }
    int k;

    vector<int> q;
    cout << "enter k:",
    cin >> k;

    for(int i=0; i<k; i++){
        q.push_back(v[i]);
        v[i] = v[i+k]; 
    }
    for(int i=0; i<q.size(); i++){
        v[k+i] = q[i];
    }
    for (int i:v) cout << i << endl;
    cout << endl;

}