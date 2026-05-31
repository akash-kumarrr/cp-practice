#include <bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int main() {
    string str;
    if (!(cin >> str)) return 0;
    map<char, int> m;
    for (auto c : str) {
        m[c]++;
    }
    for (auto p : m) {
        cout << p.first << " : " << p.second << endl;
    }
}