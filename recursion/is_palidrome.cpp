#include <bits/stdc++.h>

using namespace std;

bool rec(string x, int i, int j){
    if (i>=j) return true;
    if (x[i++] != x[j--]) return false;
    return rec(x, i, j);
}

int main(){
    string s;
    if (!(cin >> s)) return 0;

    cout << ((rec(s, 0, s.length()-1)) ? "true" : "false") << endl;
}