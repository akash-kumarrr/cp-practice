#include <bits/stdc++.h>

using namespace std;

bool rec(string str, int i, int j) {
    if (i >= j) return true;
    if (str[i] != str[j]) return false;
    return rec(str, i+1, j-1);
}

int main() {
    string str;
    if (!(cin >> str)) return 0;
    int i=0, j=str.size()-1;
    cout << (rec(str, i, j) ? "true" : "false") << endl;
    return 0;
}