#include <bits/stdc++.h>
#define lp(i, a, b) for(int i=a; i < b; i++)
using namespace std;

int main() {
    int a;
    if (!(cin >> a)) return 0;
    lp(i, 2, a) {
        if (a%i == 0) {
            cout << false << endl;
            return 0;
        }
    }
    cout << true << endl;
    return 0;
}