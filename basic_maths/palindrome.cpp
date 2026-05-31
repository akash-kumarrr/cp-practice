#include <bits/stdc++.h>
#define l(i, a, b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int a;
    if (!(cin >> a)) return 0;
    int original = a;
    int x = 0;
    while (a>0) {
        x = x*10 + a%10;
        a/= 10;   
    }
    cout << (x==original ? "true" : "false") << endl;
    return 0;
}