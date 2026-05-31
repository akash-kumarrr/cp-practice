#include <bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
    auto z = max(a, b);
    while(z){
        if (a%z == 0 && b%z == 0) {
            cout << z << endl;
            return 0;
        }
        z--;
    }
    cout << 1 << endl;
    return 0;
}