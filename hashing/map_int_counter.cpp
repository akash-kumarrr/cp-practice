#include <bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

typedef map<int, int> mi;
typedef vector<int> vi;

int main(){
    int i;
    vi inparr;
    while (cin >> i) {
        inparr.push_back(i);
    }
    mi m;
    for (auto x  :inparr) {
        m[x]++;
    }
    for (auto p : m) {
        cout << p.first << " : " << p.second << endl;
    }
}