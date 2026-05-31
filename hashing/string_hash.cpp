#include <bits/stdc++.h>
#define lp(i, a, b) for(int i=a; i < b; i++)

int hashmap[(int)1e3];

using namespace std;

int main() {
    string str;
    if (!(cin >> str)) return 0;
    for (auto c : str) {
        hashmap[static_cast<int>(c)]++;
    }
    lp(i, 0, 256) {
        if (hashmap[i] > 0) {
            cout << static_cast<char>(i) << " : " << hashmap[i] << endl;
        }
    }
    return 0;
}