//Eucuidean Algo : gcd(a,b) = gcd(b, a - b)

#include <bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
    int i = 0;
    while (a > 0 && b > 0) {
        if (a==0 || b==0) {
            cout << max(a, b) << endl;
            return 0;
        }
    
        if (a % 2) {
            a -= b;
        } else {
            b -= a;
        }
    }
}